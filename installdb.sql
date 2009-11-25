USE mysql;

DROP FUNCTION IF EXISTS lib_mysqludf_stem_info;
DROP FUNCTION IF EXISTS stem_word;

CREATE FUNCTION lib_mysqludf_stem_info RETURNS STRING SONAME 'lib_mysqludf_stem.so';
CREATE FUNCTION stem_word RETURNS STRING SONAME 'lib_mysqludf_stem.so';
