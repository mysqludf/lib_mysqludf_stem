/*
 * Stemmer libary for MySQL.
 * The lib_mysqludf_stem library provides stemming capability for a variety of languages.
 *
 * Copyright (C) 2006 Arnold Daniels <info@adaniels.nl>
 * web:   http://www.mysqludf.com/lib_mysqludf_stem
 * email: mysql-udf-repository@googlegroups.com
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or (at
 * your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(WIN32)
#define DLLEXP __declspec(dllexport) 
#else
#define DLLEXP
#endif

#ifdef STANDARD
/* STANDARD is defined, don't use any mysql functions */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifdef __WIN__
typedef unsigned __int64 ulonglong;	/* Microsofts 64 bit types */
typedef __int64 longlong;
#else
typedef unsigned long long ulonglong;
typedef long long longlong;
#endif /*__WIN__*/
#else
#include <my_global.h>
#include <my_sys.h>
#include <m_string.h>
#endif
#include <mysql.h>
#include <ctype.h>

#include "libstemmer_c/include/libstemmer.h"

#include "config.h"


/* These must be right or mysqld will not find the symbol! */

#ifdef	__cplusplus
extern "C" {
#endif
	DLLEXP my_bool lib_mysqludf_stem_info_init(UDF_INIT *initid, UDF_ARGS *args, char *message);
	DLLEXP void lib_mysqludf_stem_info_deinit(UDF_INIT *initid);
	DLLEXP char *lib_mysqludf_stem_info(UDF_INIT *initid, UDF_ARGS *args, char *result, unsigned long *length, char *is_null, char *error);

	DLLEXP my_bool stem_word_init(UDF_INIT *initid, UDF_ARGS *args, char *message);
	DLLEXP void stem_word_deinit(UDF_INIT *initid);
	DLLEXP char *stem_word(UDF_INIT *initid, UDF_ARGS *args, char *result, unsigned long *length, char *is_null, char *error);
#ifdef	__cplusplus
}
#endif

#define RETURN_ERR(msg) { strcpy(message, msg); return 1; }		// Set error message and return in %_init functions

/**
 * Allocate unused space for a string with a specific size and null terminate it
 */
char *strncpy_alloc(const char *str, unsigned long length)
{
	if (str == NULL) return NULL;

	char *newstr = (char *)malloc((length+1) * sizeof(char));
	if (newstr == NULL) return NULL;

	strncpy(newstr, str, length);
	newstr[length] = '\0';

	return newstr;
}


/* Stem UDF functions */

/**
 * Output the library version.
 * lib_mysqludf_stem_info()
 */

my_bool lib_mysqludf_stem_info_init(UDF_INIT *initid, UDF_ARGS *args, char *message)
{
	return 0;
}

void lib_mysqludf_stem_info_deinit(UDF_INIT *initid)
{
}

char* lib_mysqludf_stem_info(UDF_INIT *initid, UDF_ARGS *args, char* result, unsigned long* length,	char *is_null, char *error)
{
	strcpy(result, PACKAGE_STRING);
	*length = strlen(PACKAGE_STRING);
	return result;
}

/**
 * Stem a word.
 * stem_word(string language, string word)
 */

my_bool stem_word_init(UDF_INIT *initid, UDF_ARGS *args, char *message)
{
	if (args->arg_count != 2) RETURN_ERR("stem_word() requires 2 arguments (language, word)");

	args->arg_type[0] = STRING_RESULT;
	args->arg_type[1] = STRING_RESULT;

	initid->ptr = NULL;
	return 0;
}

void stem_word_deinit(UDF_INIT *initid)
{
	if (initid->ptr != NULL) {
		sb_stemmer_delete((sb_stemmer*)initid->ptr);
	}
}

char *stem_word(UDF_INIT *initid, UDF_ARGS *args, char *result, unsigned long *length, char *is_null, char *error)
{
	struct sb_stemmer *stemmer = NULL;
	const sb_symbol *stemmed = NULL;
	int len;
	char *r, *e, *b, *c;

	if (!args->args[1] || args->lengths[1] == 1) {
		*is_null=1;
		return 0;
	}
	
	if (initid->ptr != NULL) {
		stemmer = (sb_stemmer *)initid->ptr;
	} else {
		char *lang = strncpy_alloc(args->args[0], args->lengths[0]);
		
		if (lang) stemmer = sb_stemmer_new(lang, "UTF_8");
		free(lang);
		
		if (!stemmer) {
			*error=1;
			return 0;
		}
	}

	r = result;
	*length = 0;
	b = c = args->args[1];
	e = c + args->lengths[1];
	
	int i=0;
	
	for(; c <= e ;c++){
		if(c == e || (*c >= 0 && *c <= 38) || (*c >= 40 && *c <= 47) || (*c >= 58 && *c <= 64) || (*c >= 91 && *c <= 96) || (*c >= 123 && *c <= 126)) {
			if (b != c) {
				stemmed = sb_stemmer_stem(stemmer, (const sb_symbol*)b, c-b);
				len = strlen((char *)stemmed);
				if (*length + len > 254) break;
				
				if (r != result) {
					*r = ' ';
					r++;
					(*length)++;
				}
			
				i++;
				memcpy(r, (char *)stemmed, len);
				r += len;
				*length += len;
			}
			b = c+1;
		}
	}

	return result;
}