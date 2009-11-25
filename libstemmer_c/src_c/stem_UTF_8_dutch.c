
/* This file was generated automatically by the Snowball to ANSI C compiler */

#include "../runtime/header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int dutch_UTF_8_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_measure(struct SN_env * z);
static int r_Step_6(struct SN_env * z);
static int r_Step_7(struct SN_env * z);
static int r_Step_4(struct SN_env * z);
static int r_Step_3(struct SN_env * z);
static int r_Step_2(struct SN_env * z);
static int r_Step_1(struct SN_env * z);
static int r_lengthen_V(struct SN_env * z);
static int r_VX(struct SN_env * z);
static int r_V(struct SN_env * z);
static int r_C(struct SN_env * z);
static int r_R2(struct SN_env * z);
static int r_R1(struct SN_env * z);
static int r_prelude(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * dutch_UTF_8_create_env(void);
extern void dutch_UTF_8_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_1[2] = { 0xC3, 0xA1 };
static const symbol s_0_2[2] = { 0xC3, 0xA4 };
static const symbol s_0_3[2] = { 0xC3, 0xA9 };
static const symbol s_0_4[2] = { 0xC3, 0xAB };
static const symbol s_0_5[2] = { 0xC3, 0xAD };
static const symbol s_0_6[2] = { 0xC3, 0xAF };
static const symbol s_0_7[2] = { 0xC3, 0xB3 };
static const symbol s_0_8[2] = { 0xC3, 0xB6 };
static const symbol s_0_9[2] = { 0xC3, 0xBA };
static const symbol s_0_10[2] = { 0xC3, 0xBC };

static const struct among a_0[11] =
{
/*  0 */ { 0, 0, -1, 6, 0},
/*  1 */ { 2, s_0_1, 0, 1, 0},
/*  2 */ { 2, s_0_2, 0, 1, 0},
/*  3 */ { 2, s_0_3, 0, 2, 0},
/*  4 */ { 2, s_0_4, 0, 2, 0},
/*  5 */ { 2, s_0_5, 0, 3, 0},
/*  6 */ { 2, s_0_6, 0, 3, 0},
/*  7 */ { 2, s_0_7, 0, 4, 0},
/*  8 */ { 2, s_0_8, 0, 4, 0},
/*  9 */ { 2, s_0_9, 0, 5, 0},
/* 10 */ { 2, s_0_10, 0, 5, 0}
};

static const symbol s_1_0[3] = { 'n', 'd', 'e' };
static const symbol s_1_1[2] = { 'e', 'n' };
static const symbol s_1_2[4] = { 'i', 'e', 'e', 'n' };
static const symbol s_1_3[4] = { 'a', 'l', 'e', 'n' };
static const symbol s_1_4[3] = { 'v', 'e', 'n' };
static const symbol s_1_5[1] = { 's' };
static const symbol s_1_6[2] = { '\'', 's' };
static const symbol s_1_7[2] = { 'e', 's' };
static const symbol s_1_8[3] = { 'i', 'e', 's' };
static const symbol s_1_9[3] = { 'a', 'u', 's' };

static const struct among a_1[10] =
{
/*  0 */ { 3, s_1_0, -1, 10, 0},
/*  1 */ { 2, s_1_1, -1, 9, 0},
/*  2 */ { 4, s_1_2, 1, 7, 0},
/*  3 */ { 4, s_1_3, 1, 6, 0},
/*  4 */ { 3, s_1_4, 1, 8, 0},
/*  5 */ { 1, s_1_5, -1, 2, 0},
/*  6 */ { 2, s_1_6, 5, 1, 0},
/*  7 */ { 2, s_1_7, 5, 4, 0},
/*  8 */ { 3, s_1_8, 7, 3, 0},
/*  9 */ { 3, s_1_9, 5, 5, 0}
};

static const symbol s_2_0[2] = { 'd', 'e' };
static const symbol s_2_1[2] = { 'g', 'e' };
static const symbol s_2_2[5] = { 'i', 's', 'c', 'h', 'e' };
static const symbol s_2_3[2] = { 'j', 'e' };
static const symbol s_2_4[5] = { 'l', 'i', 'j', 'k', 'e' };
static const symbol s_2_5[2] = { 'l', 'e' };
static const symbol s_2_6[3] = { 'e', 'n', 'e' };
static const symbol s_2_7[2] = { 'r', 'e' };
static const symbol s_2_8[2] = { 's', 'e' };
static const symbol s_2_9[2] = { 't', 'e' };
static const symbol s_2_10[4] = { 'i', 'e', 'v', 'e' };

static const struct among a_2[11] =
{
/*  0 */ { 2, s_2_0, -1, 5, 0},
/*  1 */ { 2, s_2_1, -1, 2, 0},
/*  2 */ { 5, s_2_2, -1, 4, 0},
/*  3 */ { 2, s_2_3, -1, 1, 0},
/*  4 */ { 5, s_2_4, -1, 3, 0},
/*  5 */ { 2, s_2_5, -1, 9, 0},
/*  6 */ { 3, s_2_6, -1, 10, 0},
/*  7 */ { 2, s_2_7, -1, 8, 0},
/*  8 */ { 2, s_2_8, -1, 7, 0},
/*  9 */ { 2, s_2_9, -1, 6, 0},
/* 10 */ { 4, s_2_10, -1, 11, 0}
};

static const symbol s_3_0[4] = { 'h', 'e', 'i', 'd' };
static const symbol s_3_1[3] = { 'f', 'i', 'e' };
static const symbol s_3_2[3] = { 'g', 'i', 'e' };
static const symbol s_3_3[4] = { 'a', 't', 'i', 'e' };
static const symbol s_3_4[4] = { 'i', 's', 'm', 'e' };
static const symbol s_3_5[3] = { 'i', 'n', 'g' };
static const symbol s_3_6[4] = { 'a', 'r', 'i', 'j' };
static const symbol s_3_7[4] = { 'e', 'r', 'i', 'j' };
static const symbol s_3_8[3] = { 's', 'e', 'l' };
static const symbol s_3_9[4] = { 'r', 'd', 'e', 'r' };
static const symbol s_3_10[4] = { 's', 't', 'e', 'r' };
static const symbol s_3_11[5] = { 'i', 't', 'e', 'i', 't' };
static const symbol s_3_12[3] = { 'd', 's', 't' };
static const symbol s_3_13[3] = { 't', 's', 't' };

static const struct among a_3[14] =
{
/*  0 */ { 4, s_3_0, -1, 3, 0},
/*  1 */ { 3, s_3_1, -1, 7, 0},
/*  2 */ { 3, s_3_2, -1, 8, 0},
/*  3 */ { 4, s_3_3, -1, 1, 0},
/*  4 */ { 4, s_3_4, -1, 5, 0},
/*  5 */ { 3, s_3_5, -1, 5, 0},
/*  6 */ { 4, s_3_6, -1, 6, 0},
/*  7 */ { 4, s_3_7, -1, 5, 0},
/*  8 */ { 3, s_3_8, -1, 3, 0},
/*  9 */ { 4, s_3_9, -1, 4, 0},
/* 10 */ { 4, s_3_10, -1, 3, 0},
/* 11 */ { 5, s_3_11, -1, 2, 0},
/* 12 */ { 3, s_3_12, -1, 10, 0},
/* 13 */ { 3, s_3_13, -1, 9, 0}
};

static const symbol s_4_0[3] = { 'e', 'n', 'd' };
static const symbol s_4_1[5] = { 'a', 't', 'i', 'e', 'f' };
static const symbol s_4_2[4] = { 'e', 'r', 'i', 'g' };
static const symbol s_4_3[6] = { 'a', 'c', 'h', 't', 'i', 'g' };
static const symbol s_4_4[6] = { 'i', 'o', 'n', 'e', 'e', 'l' };
static const symbol s_4_5[4] = { 'b', 'a', 'a', 'r' };
static const symbol s_4_6[4] = { 'l', 'a', 'a', 'r' };
static const symbol s_4_7[4] = { 'n', 'a', 'a', 'r' };
static const symbol s_4_8[4] = { 'r', 'a', 'a', 'r' };
static const symbol s_4_9[6] = { 'e', 'r', 'i', 'g', 'e', 'r' };
static const symbol s_4_10[8] = { 'a', 'c', 'h', 't', 'i', 'g', 'e', 'r' };
static const symbol s_4_11[6] = { 'l', 'i', 'j', 'k', 'e', 'r' };
static const symbol s_4_12[4] = { 't', 'a', 'n', 't' };
static const symbol s_4_13[6] = { 'e', 'r', 'i', 'g', 's', 't' };
static const symbol s_4_14[8] = { 'a', 'c', 'h', 't', 'i', 'g', 's', 't' };
static const symbol s_4_15[6] = { 'l', 'i', 'j', 'k', 's', 't' };

static const struct among a_4[16] =
{
/*  0 */ { 3, s_4_0, -1, 10, 0},
/*  1 */ { 5, s_4_1, -1, 2, 0},
/*  2 */ { 4, s_4_2, -1, 10, 0},
/*  3 */ { 6, s_4_3, -1, 9, 0},
/*  4 */ { 6, s_4_4, -1, 1, 0},
/*  5 */ { 4, s_4_5, -1, 3, 0},
/*  6 */ { 4, s_4_6, -1, 5, 0},
/*  7 */ { 4, s_4_7, -1, 4, 0},
/*  8 */ { 4, s_4_8, -1, 6, 0},
/*  9 */ { 6, s_4_9, -1, 10, 0},
/* 10 */ { 8, s_4_10, -1, 9, 0},
/* 11 */ { 6, s_4_11, -1, 8, 0},
/* 12 */ { 4, s_4_12, -1, 7, 0},
/* 13 */ { 6, s_4_13, -1, 10, 0},
/* 14 */ { 8, s_4_14, -1, 9, 0},
/* 15 */ { 6, s_4_15, -1, 8, 0}
};

static const symbol s_5_0[2] = { 'i', 'g' };
static const symbol s_5_1[4] = { 'i', 'g', 'e', 'r' };
static const symbol s_5_2[4] = { 'i', 'g', 's', 't' };

static const struct among a_5[3] =
{
/*  0 */ { 2, s_5_0, -1, 1, 0},
/*  1 */ { 4, s_5_1, -1, 1, 0},
/*  2 */ { 4, s_5_2, -1, 1, 0}
};

static const symbol s_6_0[3] = { 'e', 'e', 'e' };
static const symbol s_6_1[3] = { 'i', 'e', 'e' };
static const symbol s_6_2[2] = { 'f', 't' };
static const symbol s_6_3[2] = { 'k', 't' };
static const symbol s_6_4[2] = { 'p', 't' };

static const struct among a_6[5] =
{
/*  0 */ { 3, s_6_0, -1, 2, 0},
/*  1 */ { 3, s_6_1, -1, 1, 0},
/*  2 */ { 2, s_6_2, -1, 4, 0},
/*  3 */ { 2, s_6_3, -1, 3, 0},
/*  4 */ { 2, s_6_4, -1, 5, 0}
};

static const symbol s_7_0[2] = { 'b', 'b' };
static const symbol s_7_1[2] = { 'c', 'c' };
static const symbol s_7_2[2] = { 'd', 'd' };
static const symbol s_7_3[2] = { 'f', 'f' };
static const symbol s_7_4[2] = { 'g', 'g' };
static const symbol s_7_5[2] = { 'h', 'h' };
static const symbol s_7_6[2] = { 'j', 'j' };
static const symbol s_7_7[2] = { 'k', 'k' };
static const symbol s_7_8[2] = { 'l', 'l' };
static const symbol s_7_9[2] = { 'm', 'm' };
static const symbol s_7_10[2] = { 'n', 'n' };
static const symbol s_7_11[2] = { 'p', 'p' };
static const symbol s_7_12[2] = { 'q', 'q' };
static const symbol s_7_13[2] = { 'r', 'r' };
static const symbol s_7_14[2] = { 's', 's' };
static const symbol s_7_15[2] = { 't', 't' };
static const symbol s_7_16[1] = { 'v' };
static const symbol s_7_17[2] = { 'v', 'v' };
static const symbol s_7_18[2] = { 'w', 'w' };
static const symbol s_7_19[2] = { 'x', 'x' };
static const symbol s_7_20[1] = { 'z' };
static const symbol s_7_21[2] = { 'z', 'z' };

static const struct among a_7[22] =
{
/*  0 */ { 2, s_7_0, -1, 1, 0},
/*  1 */ { 2, s_7_1, -1, 2, 0},
/*  2 */ { 2, s_7_2, -1, 3, 0},
/*  3 */ { 2, s_7_3, -1, 4, 0},
/*  4 */ { 2, s_7_4, -1, 5, 0},
/*  5 */ { 2, s_7_5, -1, 6, 0},
/*  6 */ { 2, s_7_6, -1, 7, 0},
/*  7 */ { 2, s_7_7, -1, 8, 0},
/*  8 */ { 2, s_7_8, -1, 9, 0},
/*  9 */ { 2, s_7_9, -1, 10, 0},
/* 10 */ { 2, s_7_10, -1, 11, 0},
/* 11 */ { 2, s_7_11, -1, 12, 0},
/* 12 */ { 2, s_7_12, -1, 13, 0},
/* 13 */ { 2, s_7_13, -1, 14, 0},
/* 14 */ { 2, s_7_14, -1, 15, 0},
/* 15 */ { 2, s_7_15, -1, 16, 0},
/* 16 */ { 1, s_7_16, -1, 21, 0},
/* 17 */ { 2, s_7_17, 16, 17, 0},
/* 18 */ { 2, s_7_18, -1, 18, 0},
/* 19 */ { 2, s_7_19, -1, 19, 0},
/* 20 */ { 1, s_7_20, -1, 22, 0},
/* 21 */ { 2, s_7_21, 20, 20, 0}
};

static const unsigned char g_v[] = { 17, 65, 16, 1 };

static const unsigned char g_v_WX[] = { 17, 65, 208, 1 };

static const unsigned char g_AOU[] = { 1, 64, 16 };

static const unsigned char g_AIOU[] = { 1, 65, 16 };

static const symbol s_0[] = { 'a' };
static const symbol s_1[] = { 'e' };
static const symbol s_2[] = { 'i' };
static const symbol s_3[] = { 'o' };
static const symbol s_4[] = { 'u' };
static const symbol s_5[] = { 'y' };
static const symbol s_6[] = { 'Y' };
static const symbol s_7[] = { 'i' };
static const symbol s_8[] = { 'I' };
static const symbol s_9[] = { 'y' };
static const symbol s_10[] = { 'Y' };
static const symbol s_11[] = { 'i', 'j' };
static const symbol s_12[] = { 'i', 'j' };
static const symbol s_13[] = { 'i', 'j' };
static const symbol s_14[] = { 'e' };
static const symbol s_15[] = { 't' };
static const symbol s_16[] = { 'i', 'e' };
static const symbol s_17[] = { 'a', 'r' };
static const symbol s_18[] = { 'e', 'r' };
static const symbol s_19[] = { 'e' };
static const symbol s_20[] = { 'a', 'u' };
static const symbol s_21[] = { 'a', 'a', 'l' };
static const symbol s_22[] = { 'i', 'e' };
static const symbol s_23[] = { 'f' };
static const symbol s_24[] = { 'h', 'e', 'd' };
static const symbol s_25[] = { 'h', 'e', 'i', 'd' };
static const symbol s_26[] = { 'n', 'd' };
static const symbol s_27[] = { 'd' };
static const symbol s_28[] = { 'i' };
static const symbol s_29[] = { 'j' };
static const symbol s_30[] = { 'n', 'd' };
static const symbol s_31[] = { '\'', 't' };
static const symbol s_32[] = { 'e', 't' };
static const symbol s_33[] = { 'r', 'n', 't' };
static const symbol s_34[] = { 'r', 'n' };
static const symbol s_35[] = { 't' };
static const symbol s_36[] = { 'i', 'n', 'k' };
static const symbol s_37[] = { 'i', 'n', 'g' };
static const symbol s_38[] = { 'm', 'p' };
static const symbol s_39[] = { 'm' };
static const symbol s_40[] = { '\'' };
static const symbol s_41[] = { 'g' };
static const symbol s_42[] = { 'l', 'i', 'j', 'k' };
static const symbol s_43[] = { 'i', 's', 'c', 'h' };
static const symbol s_44[] = { 't' };
static const symbol s_45[] = { 's' };
static const symbol s_46[] = { 'r' };
static const symbol s_47[] = { 'l' };
static const symbol s_48[] = { 'e', 'n' };
static const symbol s_49[] = { 'i', 'e', 'f' };
static const symbol s_50[] = { 'e', 'e', 'r' };
static const symbol s_51[] = { 'r' };
static const symbol s_52[] = { 'a', 'a', 'r' };
static const symbol s_53[] = { 'f' };
static const symbol s_54[] = { 'g' };
static const symbol s_55[] = { 't' };
static const symbol s_56[] = { 'd' };
static const symbol s_57[] = { 'i', 'e' };
static const symbol s_58[] = { 'e', 'e', 'r' };
static const symbol s_59[] = { 'n' };
static const symbol s_60[] = { 'l' };
static const symbol s_61[] = { 'r' };
static const symbol s_62[] = { 't', 'e', 'e', 'r' };
static const symbol s_63[] = { 'l', 'i', 'j', 'k' };
static const symbol s_64[] = { 'i', 'e' };
static const symbol s_65[] = { 'e', 'e' };
static const symbol s_66[] = { 'k' };
static const symbol s_67[] = { 'f' };
static const symbol s_68[] = { 'p' };
static const symbol s_69[] = { 'b' };
static const symbol s_70[] = { 'c' };
static const symbol s_71[] = { 'd' };
static const symbol s_72[] = { 'f' };
static const symbol s_73[] = { 'g' };
static const symbol s_74[] = { 'h' };
static const symbol s_75[] = { 'j' };
static const symbol s_76[] = { 'k' };
static const symbol s_77[] = { 'l' };
static const symbol s_78[] = { 'm' };
static const symbol s_79[] = { 'n' };
static const symbol s_80[] = { 'p' };
static const symbol s_81[] = { 'q' };
static const symbol s_82[] = { 'r' };
static const symbol s_83[] = { 's' };
static const symbol s_84[] = { 't' };
static const symbol s_85[] = { 'v' };
static const symbol s_86[] = { 'w' };
static const symbol s_87[] = { 'x' };
static const symbol s_88[] = { 'z' };
static const symbol s_89[] = { 'f' };
static const symbol s_90[] = { 's' };
static const symbol s_91[] = { 'i', 'j' };
static const symbol s_92[] = { 'i', 'j' };
static const symbol s_93[] = { 'y' };
static const symbol s_94[] = { 'Y' };
static const symbol s_95[] = { 'y' };
static const symbol s_96[] = { 'Y' };
static const symbol s_97[] = { 'Y' };
static const symbol s_98[] = { 'y' };

static int r_prelude(struct SN_env * z) {
    int among_var;
    {   int c_test = z->c; /* test, line 49 */
        while(1) { /* repeat, line 49 */
            int c1 = z->c;
            z->bra = z->c; /* [, line 50 */
            if (z->c + 1 >= z->l || z->p[z->c + 1] >> 5 != 5 || !((340306450 >> (z->p[z->c + 1] & 0x1f)) & 1)) among_var = 6; else
            among_var = find_among(z, a_0, 11); /* substring, line 50 */
            if (!(among_var)) goto lab0;
            z->ket = z->c; /* ], line 50 */
            switch(among_var) {
                case 0: goto lab0;
                case 1:
                    {   int ret = slice_from_s(z, 1, s_0); /* <-, line 52 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {   int ret = slice_from_s(z, 1, s_1); /* <-, line 54 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 3:
                    {   int ret = slice_from_s(z, 1, s_2); /* <-, line 56 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 4:
                    {   int ret = slice_from_s(z, 1, s_3); /* <-, line 58 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 5:
                    {   int ret = slice_from_s(z, 1, s_4); /* <-, line 60 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 6:
                    {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                        if (ret < 0) goto lab0;
                        z->c = ret; /* next, line 61 */
                    }
                    break;
            }
            continue;
        lab0:
            z->c = c1;
            break;
        }
        z->c = c_test;
    }
    {   int c_keep = z->c; /* try, line 64 */
        z->bra = z->c; /* [, line 64 */
        if (!(eq_s(z, 1, s_5))) { z->c = c_keep; goto lab1; }
        z->ket = z->c; /* ], line 64 */
        {   int ret = slice_from_s(z, 1, s_6); /* <-, line 64 */
            if (ret < 0) return ret;
        }
    lab1:
        ;
    }
    while(1) { /* repeat, line 65 */
        int c2 = z->c;
        while(1) { /* goto, line 65 */
            int c3 = z->c;
            if (in_grouping_U(z, g_v, 97, 121, 0)) goto lab3;
            z->bra = z->c; /* [, line 66 */
            {   int c4 = z->c; /* or, line 66 */
                if (!(eq_s(z, 1, s_7))) goto lab5;
                z->ket = z->c; /* ], line 66 */
                if (in_grouping_U(z, g_v, 97, 121, 0)) goto lab5;
                {   int ret = slice_from_s(z, 1, s_8); /* <-, line 66 */
                    if (ret < 0) return ret;
                }
                goto lab4;
            lab5:
                z->c = c4;
                if (!(eq_s(z, 1, s_9))) goto lab3;
                z->ket = z->c; /* ], line 67 */
                {   int ret = slice_from_s(z, 1, s_10); /* <-, line 67 */
                    if (ret < 0) return ret;
                }
            }
        lab4:
            z->c = c3;
            break;
        lab3:
            z->c = c3;
            {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                if (ret < 0) goto lab2;
                z->c = ret; /* goto, line 65 */
            }
        }
        continue;
    lab2:
        z->c = c2;
        break;
    }
    return 1;
}

static int r_R1(struct SN_env * z) {
    z->I[0] = z->c; /* setmark x, line 74 */
    if (!(z->I[0] >= z->I[1])) return 0;
    return 1;
}

static int r_R2(struct SN_env * z) {
    z->I[0] = z->c; /* setmark x, line 75 */
    if (!(z->I[0] >= z->I[2])) return 0;
    return 1;
}

static int r_V(struct SN_env * z) {
    {   int m_test = z->l - z->c; /* test, line 77 */
        {   int m1 = z->l - z->c; (void)m1; /* or, line 77 */
            if (in_grouping_b_U(z, g_v, 97, 121, 0)) goto lab1;
            goto lab0;
        lab1:
            z->c = z->l - m1;
            if (!(eq_s_b(z, 2, s_11))) return 0;
        }
    lab0:
        z->c = z->l - m_test;
    }
    return 1;
}

static int r_VX(struct SN_env * z) {
    {   int m_test = z->l - z->c; /* test, line 78 */
        {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
            if (ret < 0) return 0;
            z->c = ret; /* next, line 78 */
        }
        {   int m1 = z->l - z->c; (void)m1; /* or, line 78 */
            if (in_grouping_b_U(z, g_v, 97, 121, 0)) goto lab1;
            goto lab0;
        lab1:
            z->c = z->l - m1;
            if (!(eq_s_b(z, 2, s_12))) return 0;
        }
    lab0:
        z->c = z->l - m_test;
    }
    return 1;
}

static int r_C(struct SN_env * z) {
    {   int m_test = z->l - z->c; /* test, line 79 */
        {   int m1 = z->l - z->c; (void)m1; /* not, line 79 */
            if (!(eq_s_b(z, 2, s_13))) goto lab0;
            return 0;
        lab0:
            z->c = z->l - m1;
        }
        if (out_grouping_b_U(z, g_v, 97, 121, 0)) return 0;
        z->c = z->l - m_test;
    }
    return 1;
}

static int r_lengthen_V(struct SN_env * z) {
    {   int m1 = z->l - z->c; (void)m1; /* do, line 81 */
        if (out_grouping_b_U(z, g_v_WX, 97, 121, 0)) goto lab0;
        z->ket = z->c; /* [, line 82 */
        {   int m2 = z->l - z->c; (void)m2; /* or, line 82 */
            if (in_grouping_b_U(z, g_AOU, 97, 117, 0)) goto lab2;
            z->bra = z->c; /* ], line 82 */
            {   int m_test = z->l - z->c; /* test, line 82 */
                {   int m3 = z->l - z->c; (void)m3; /* or, line 82 */
                    if (out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab4;
                    goto lab3;
                lab4:
                    z->c = z->l - m3;
                    if (z->c > z->lb) goto lab2; /* atlimit, line 82 */
                }
            lab3:
                z->c = z->l - m_test;
            }
            goto lab1;
        lab2:
            z->c = z->l - m2;
            if (!(eq_s_b(z, 1, s_14))) goto lab0;
            z->bra = z->c; /* ], line 83 */
            {   int m_test = z->l - z->c; /* test, line 83 */
                {   int m4 = z->l - z->c; (void)m4; /* or, line 83 */
                    if (out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab6;
                    goto lab5;
                lab6:
                    z->c = z->l - m4;
                    if (z->c > z->lb) goto lab0; /* atlimit, line 83 */
                }
            lab5:
                {   int m5 = z->l - z->c; (void)m5; /* not, line 84 */
                    if (in_grouping_b_U(z, g_AIOU, 97, 117, 0)) goto lab7;
                    goto lab0;
                lab7:
                    z->c = z->l - m5;
                }
                {   int m6 = z->l - z->c; (void)m6; /* not, line 85 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) goto lab8;
                        z->c = ret; /* next, line 85 */
                    }
                    if (in_grouping_b_U(z, g_AIOU, 97, 117, 0)) goto lab8;
                    if (out_grouping_b_U(z, g_v, 97, 121, 0)) goto lab8;
                    goto lab0;
                lab8:
                    z->c = z->l - m6;
                }
                z->c = z->l - m_test;
            }
        }
    lab1:
        z->S[0] = slice_to(z, z->S[0]); /* -> ch, line 86 */
        if (z->S[0] == 0) return -1; /* -> ch, line 86 */
        {   int c_keep = z->c;
            int ret = insert_v(z, z->c, z->c, z->S[0]); /* <+ ch, line 86 */
            z->c = c_keep;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    return 1;
}

static int r_Step_1(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 91 */
    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((540704 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_1, 10); /* among, line 91 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 91 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 93 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 94 */
                if (ret < 0) return ret;
            }
            {   int m1 = z->l - z->c; (void)m1; /* not, line 94 */
                if (!(eq_s_b(z, 1, s_15))) goto lab0;
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab0; /* call R1, line 94 */
                    if (ret < 0) return ret;
                }
                return 0;
            lab0:
                z->c = z->l - m1;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 94 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 94 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 95 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 2, s_16); /* <-, line 95 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int m2 = z->l - z->c; (void)m2; /* or, line 97 */
                if (!(eq_s_b(z, 2, s_17))) goto lab2;
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab2; /* call R1, line 97 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) goto lab2; /* call C, line 97 */
                    if (ret < 0) return ret;
                }
                z->bra = z->c; /* ], line 97 */
                {   int ret = slice_del(z); /* delete, line 97 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_lengthen_V(z);
                    if (ret == 0) goto lab2; /* call lengthen_V, line 97 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab2:
                z->c = z->l - m2;
                if (!(eq_s_b(z, 2, s_18))) goto lab3;
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab3; /* call R1, line 98 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) goto lab3; /* call C, line 98 */
                    if (ret < 0) return ret;
                }
                z->bra = z->c; /* ], line 98 */
                {   int ret = slice_del(z); /* delete, line 98 */
                    if (ret < 0) return ret;
                }
                goto lab1;
            lab3:
                z->c = z->l - m2;
                {   int ret = r_R1(z);
                    if (ret == 0) return 0; /* call R1, line 99 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) return 0; /* call C, line 99 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 1, s_19); /* <-, line 99 */
                    if (ret < 0) return ret;
                }
            }
        lab1:
            break;
        case 5:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 101 */
                if (ret < 0) return ret;
            }
            {   int ret = r_V(z);
                if (ret == 0) return 0; /* call V, line 101 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 2, s_20); /* <-, line 101 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 102 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 3, s_21); /* <-, line 102 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 103 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 2, s_22); /* <-, line 103 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 104 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_23); /* <-, line 104 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int m3 = z->l - z->c; (void)m3; /* or, line 105 */
                if (!(eq_s_b(z, 3, s_24))) goto lab5;
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab5; /* call R1, line 105 */
                    if (ret < 0) return ret;
                }
                z->bra = z->c; /* ], line 105 */
                {   int ret = slice_from_s(z, 4, s_25); /* <-, line 105 */
                    if (ret < 0) return ret;
                }
                goto lab4;
            lab5:
                z->c = z->l - m3;
                if (!(eq_s_b(z, 2, s_26))) goto lab6;
                {   int ret = slice_del(z); /* delete, line 106 */
                    if (ret < 0) return ret;
                }
                goto lab4;
            lab6:
                z->c = z->l - m3;
                if (!(eq_s_b(z, 1, s_27))) goto lab7;
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab7; /* call R1, line 107 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) goto lab7; /* call C, line 107 */
                    if (ret < 0) return ret;
                }
                z->bra = z->c; /* ], line 107 */
                {   int ret = slice_del(z); /* delete, line 107 */
                    if (ret < 0) return ret;
                }
                goto lab4;
            lab7:
                z->c = z->l - m3;
                {   int m4 = z->l - z->c; (void)m4; /* or, line 108 */
                    if (!(eq_s_b(z, 1, s_28))) goto lab10;
                    goto lab9;
                lab10:
                    z->c = z->l - m4;
                    if (!(eq_s_b(z, 1, s_29))) goto lab8;
                }
            lab9:
                {   int ret = r_V(z);
                    if (ret == 0) goto lab8; /* call V, line 108 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 108 */
                    if (ret < 0) return ret;
                }
                goto lab4;
            lab8:
                z->c = z->l - m3;
                {   int ret = r_R1(z);
                    if (ret == 0) return 0; /* call R1, line 109 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) return 0; /* call C, line 109 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 109 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_lengthen_V(z);
                    if (ret == 0) return 0; /* call lengthen_V, line 109 */
                    if (ret < 0) return ret;
                }
            }
        lab4:
            break;
        case 10:
            {   int ret = slice_from_s(z, 2, s_30); /* <-, line 110 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_2(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 116 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 101) return 0;
    among_var = find_among_b(z, a_2, 11); /* among, line 116 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 116 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int m1 = z->l - z->c; (void)m1; /* or, line 117 */
                if (!(eq_s_b(z, 2, s_31))) goto lab1;
                z->bra = z->c; /* ], line 117 */
                {   int ret = slice_del(z); /* delete, line 117 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab1:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 2, s_32))) goto lab2;
                z->bra = z->c; /* ], line 118 */
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab2; /* call R1, line 118 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) goto lab2; /* call C, line 118 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 118 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab2:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 3, s_33))) goto lab3;
                z->bra = z->c; /* ], line 119 */
                {   int ret = slice_from_s(z, 2, s_34); /* <-, line 119 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab3:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 1, s_35))) goto lab4;
                z->bra = z->c; /* ], line 120 */
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab4; /* call R1, line 120 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_VX(z);
                    if (ret == 0) goto lab4; /* call VX, line 120 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 120 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab4:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 3, s_36))) goto lab5;
                z->bra = z->c; /* ], line 121 */
                {   int ret = slice_from_s(z, 3, s_37); /* <-, line 121 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab5:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 2, s_38))) goto lab6;
                z->bra = z->c; /* ], line 122 */
                {   int ret = slice_from_s(z, 1, s_39); /* <-, line 122 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab6:
                z->c = z->l - m1;
                if (!(eq_s_b(z, 1, s_40))) goto lab7;
                z->bra = z->c; /* ], line 123 */
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab7; /* call R1, line 123 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 123 */
                    if (ret < 0) return ret;
                }
                goto lab0;
            lab7:
                z->c = z->l - m1;
                z->bra = z->c; /* ], line 124 */
                {   int ret = r_R1(z);
                    if (ret == 0) return 0; /* call R1, line 124 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) return 0; /* call C, line 124 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 124 */
                    if (ret < 0) return ret;
                }
            }
        lab0:
            break;
        case 2:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 125 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_41); /* <-, line 125 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 126 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 4, s_42); /* <-, line 126 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 127 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 4, s_43); /* <-, line 127 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 128 */
                if (ret < 0) return ret;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 128 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 128 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 129 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_44); /* <-, line 129 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 130 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_45); /* <-, line 130 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 131 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_46); /* <-, line 131 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 132 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 132 */
                if (ret < 0) return ret;
            }
            {   int ret = insert_s(z, z->c, z->c, 1, s_47); /* attach, line 132 */
                if (ret < 0) return ret;
            }
            {   int ret = r_lengthen_V(z);
                if (ret == 0) return 0; /* call lengthen_V, line 132 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 133 */
                if (ret < 0) return ret;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 133 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 133 */
                if (ret < 0) return ret;
            }
            {   int ret = insert_s(z, z->c, z->c, 2, s_48); /* attach, line 133 */
                if (ret < 0) return ret;
            }
            {   int ret = r_lengthen_V(z);
                if (ret == 0) return 0; /* call lengthen_V, line 133 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 134 */
                if (ret < 0) return ret;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 134 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 3, s_49); /* <-, line 134 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_3(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 140 */
    if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1316016 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_3, 14); /* among, line 140 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 140 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 141 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 3, s_50); /* <-, line 141 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 142 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 142 */
                if (ret < 0) return ret;
            }
            {   int ret = r_lengthen_V(z);
                if (ret == 0) return 0; /* call lengthen_V, line 142 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 145 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 145 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 1, s_51); /* <-, line 146 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 149 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 149 */
                if (ret < 0) return ret;
            }
            {   int ret = r_lengthen_V(z);
                if (ret == 0) return 0; /* call lengthen_V, line 149 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 150 */
                if (ret < 0) return ret;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 150 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 3, s_52); /* <-, line 150 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = r_R2(z);
                if (ret == 0) return 0; /* call R2, line 151 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 151 */
                if (ret < 0) return ret;
            }
            {   int ret = insert_s(z, z->c, z->c, 1, s_53); /* attach, line 151 */
                if (ret < 0) return ret;
            }
            {   int ret = r_lengthen_V(z);
                if (ret == 0) return 0; /* call lengthen_V, line 151 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = r_R2(z);
                if (ret == 0) return 0; /* call R2, line 152 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_del(z); /* delete, line 152 */
                if (ret < 0) return ret;
            }
            {   int ret = insert_s(z, z->c, z->c, 1, s_54); /* attach, line 152 */
                if (ret < 0) return ret;
            }
            {   int ret = r_lengthen_V(z);
                if (ret == 0) return 0; /* call lengthen_V, line 152 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 153 */
                if (ret < 0) return ret;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 153 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_55); /* <-, line 153 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = r_R1(z);
                if (ret == 0) return 0; /* call R1, line 154 */
                if (ret < 0) return ret;
            }
            {   int ret = r_C(z);
                if (ret == 0) return 0; /* call C, line 154 */
                if (ret < 0) return ret;
            }
            {   int ret = slice_from_s(z, 1, s_56); /* <-, line 154 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_4(struct SN_env * z) {
    int among_var;
    {   int m1 = z->l - z->c; (void)m1; /* or, line 179 */
        z->ket = z->c; /* [, line 160 */
        if (z->c - 2 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1315024 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab1;
        among_var = find_among_b(z, a_4, 16); /* among, line 160 */
        if (!(among_var)) goto lab1;
        z->bra = z->c; /* ], line 160 */
        switch(among_var) {
            case 0: goto lab1;
            case 1:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 161 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 2, s_57); /* <-, line 161 */
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 162 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 3, s_58); /* <-, line 162 */
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 163 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 163 */
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 164 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_V(z);
                    if (ret == 0) goto lab1; /* call V, line 164 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 1, s_59); /* <-, line 164 */
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 165 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_V(z);
                    if (ret == 0) goto lab1; /* call V, line 165 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 1, s_60); /* <-, line 165 */
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 166 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_V(z);
                    if (ret == 0) goto lab1; /* call V, line 166 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 1, s_61); /* <-, line 166 */
                    if (ret < 0) return ret;
                }
                break;
            case 7:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 167 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 4, s_62); /* <-, line 167 */
                    if (ret < 0) return ret;
                }
                break;
            case 8:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 169 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_from_s(z, 4, s_63); /* <-, line 169 */
                    if (ret < 0) return ret;
                }
                break;
            case 9:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 172 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 172 */
                    if (ret < 0) return ret;
                }
                break;
            case 10:
                {   int ret = r_R1(z);
                    if (ret == 0) goto lab1; /* call R1, line 176 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) goto lab1; /* call C, line 176 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 176 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_lengthen_V(z);
                    if (ret == 0) goto lab1; /* call lengthen_V, line 176 */
                    if (ret < 0) return ret;
                }
                break;
        }
        goto lab0;
    lab1:
        z->c = z->l - m1;
        z->ket = z->c; /* [, line 180 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((1310848 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
        among_var = find_among_b(z, a_5, 3); /* among, line 180 */
        if (!(among_var)) return 0;
        z->bra = z->c; /* ], line 180 */
        switch(among_var) {
            case 0: return 0;
            case 1:
                {   int ret = r_R1(z);
                    if (ret == 0) return 0; /* call R1, line 183 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_C(z);
                    if (ret == 0) return 0; /* call C, line 183 */
                    if (ret < 0) return ret;
                }
                {   int ret = slice_del(z); /* delete, line 183 */
                    if (ret < 0) return ret;
                }
                {   int ret = r_lengthen_V(z);
                    if (ret == 0) return 0; /* call lengthen_V, line 183 */
                    if (ret < 0) return ret;
                }
                break;
        }
    }
lab0:
    return 1;
}

static int r_Step_7(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 190 */
    if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 101 && z->p[z->c - 1] != 116)) return 0;
    among_var = find_among_b(z, a_6, 5); /* among, line 190 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 190 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_64); /* <-, line 191 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_65); /* <-, line 192 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 1, s_66); /* <-, line 193 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 1, s_67); /* <-, line 194 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 1, s_68); /* <-, line 195 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Step_6(struct SN_env * z) {
    int among_var;
    z->ket = z->c; /* [, line 201 */
    if (z->c <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((98532828 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_7, 22); /* among, line 201 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 201 */
    switch(among_var) {
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 1, s_69); /* <-, line 202 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 1, s_70); /* <-, line 203 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 1, s_71); /* <-, line 204 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 1, s_72); /* <-, line 205 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 1, s_73); /* <-, line 206 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 1, s_74); /* <-, line 207 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int ret = slice_from_s(z, 1, s_75); /* <-, line 208 */
                if (ret < 0) return ret;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 1, s_76); /* <-, line 209 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int ret = slice_from_s(z, 1, s_77); /* <-, line 210 */
                if (ret < 0) return ret;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 1, s_78); /* <-, line 211 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int ret = slice_from_s(z, 1, s_79); /* <-, line 212 */
                if (ret < 0) return ret;
            }
            break;
        case 12:
            {   int ret = slice_from_s(z, 1, s_80); /* <-, line 213 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = slice_from_s(z, 1, s_81); /* <-, line 214 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int ret = slice_from_s(z, 1, s_82); /* <-, line 215 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int ret = slice_from_s(z, 1, s_83); /* <-, line 216 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int ret = slice_from_s(z, 1, s_84); /* <-, line 217 */
                if (ret < 0) return ret;
            }
            break;
        case 17:
            {   int ret = slice_from_s(z, 1, s_85); /* <-, line 218 */
                if (ret < 0) return ret;
            }
            break;
        case 18:
            {   int ret = slice_from_s(z, 1, s_86); /* <-, line 219 */
                if (ret < 0) return ret;
            }
            break;
        case 19:
            {   int ret = slice_from_s(z, 1, s_87); /* <-, line 220 */
                if (ret < 0) return ret;
            }
            break;
        case 20:
            {   int ret = slice_from_s(z, 1, s_88); /* <-, line 221 */
                if (ret < 0) return ret;
            }
            break;
        case 21:
            {   int ret = slice_from_s(z, 1, s_89); /* <-, line 222 */
                if (ret < 0) return ret;
            }
            break;
        case 22:
            {   int ret = slice_from_s(z, 1, s_90); /* <-, line 223 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_measure(struct SN_env * z) {
    {   int c1 = z->c; /* do, line 251 */
        z->c = z->l; /* tolimit, line 252 */
        z->I[1] = z->c; /* setmark p1, line 253 */
        z->I[2] = z->c; /* setmark p2, line 254 */
        z->c = c1;
    }
    {   int c2 = z->c; /* do, line 256 */
        while(1) { /* repeat, line 257 */
            if (out_grouping_U(z, g_v, 97, 121, 0)) goto lab2;
            continue;
        lab2:
            break;
        }
        {   int i = 1;
            while(1) { /* atleast, line 257 */
                int c3 = z->c;
                {   int c4 = z->c; /* or, line 257 */
                    if (!(eq_s(z, 2, s_91))) goto lab5;
                    goto lab4;
                lab5:
                    z->c = c4;
                    if (in_grouping_U(z, g_v, 97, 121, 0)) goto lab3;
                }
            lab4:
                i--;
                continue;
            lab3:
                z->c = c3;
                break;
            }
            if (i > 0) goto lab1;
        }
        if (out_grouping_U(z, g_v, 97, 121, 0)) goto lab1;
        z->I[1] = z->c; /* setmark p1, line 257 */
        while(1) { /* repeat, line 258 */
            if (out_grouping_U(z, g_v, 97, 121, 0)) goto lab6;
            continue;
        lab6:
            break;
        }
        {   int i = 1;
            while(1) { /* atleast, line 258 */
                int c5 = z->c;
                {   int c6 = z->c; /* or, line 258 */
                    if (!(eq_s(z, 2, s_92))) goto lab9;
                    goto lab8;
                lab9:
                    z->c = c6;
                    if (in_grouping_U(z, g_v, 97, 121, 0)) goto lab7;
                }
            lab8:
                i--;
                continue;
            lab7:
                z->c = c5;
                break;
            }
            if (i > 0) goto lab1;
        }
        if (out_grouping_U(z, g_v, 97, 121, 0)) goto lab1;
        z->I[2] = z->c; /* setmark p2, line 258 */
    lab1:
        z->c = c2;
    }
    return 1;
}

extern int dutch_UTF_8_stem(struct SN_env * z) {
    {   int ret = r_prelude(z);
        if (ret == 0) return 0; /* call prelude, line 263 */
        if (ret < 0) return ret;
    }
    z->B[0] = 0; /* unset Y_found, line 264 */
    z->B[1] = 0; /* unset stemmed, line 265 */
    {   int c1 = z->c; /* do, line 266 */
        z->bra = z->c; /* [, line 266 */
        if (!(eq_s(z, 1, s_93))) goto lab0;
        z->ket = z->c; /* ], line 266 */
        {   int ret = slice_from_s(z, 1, s_94); /* <-, line 266 */
            if (ret < 0) return ret;
        }
        z->B[0] = 1; /* set Y_found, line 266 */
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* do, line 267 */
        while(1) { /* repeat, line 267 */
            int c3 = z->c;
            while(1) { /* goto, line 267 */
                int c4 = z->c;
                if (in_grouping_U(z, g_v, 97, 121, 0)) goto lab3;
                z->bra = z->c; /* [, line 267 */
                if (!(eq_s(z, 1, s_95))) goto lab3;
                z->ket = z->c; /* ], line 267 */
                z->c = c4;
                break;
            lab3:
                z->c = c4;
                {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                    if (ret < 0) goto lab2;
                    z->c = ret; /* goto, line 267 */
                }
            }
            {   int ret = slice_from_s(z, 1, s_96); /* <-, line 267 */
                if (ret < 0) return ret;
            }
            z->B[0] = 1; /* set Y_found, line 267 */
            continue;
        lab2:
            z->c = c3;
            break;
        }
        z->c = c2;
    }
    {   int ret = r_measure(z);
        if (ret == 0) return 0; /* call measure, line 269 */
        if (ret < 0) return ret;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 271 */

    {   int m5 = z->l - z->c; (void)m5; /* do, line 272 */
        {   int ret = r_Step_1(z);
            if (ret == 0) goto lab4; /* call Step_1, line 272 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set stemmed, line 272 */
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 273 */
        {   int ret = r_Step_2(z);
            if (ret == 0) goto lab5; /* call Step_2, line 273 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set stemmed, line 273 */
    lab5:
        z->c = z->l - m6;
    }
    {   int m7 = z->l - z->c; (void)m7; /* do, line 274 */
        {   int ret = r_Step_3(z);
            if (ret == 0) goto lab6; /* call Step_3, line 274 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set stemmed, line 274 */
    lab6:
        z->c = z->l - m7;
    }
    {   int m8 = z->l - z->c; (void)m8; /* do, line 275 */
        {   int ret = r_Step_4(z);
            if (ret == 0) goto lab7; /* call Step_4, line 275 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set stemmed, line 275 */
    lab7:
        z->c = z->l - m8;
    }
    z->c = z->lb;
    z->lb = z->c; z->c = z->l; /* backwards, line 289 */

    {   int m9 = z->l - z->c; (void)m9; /* do, line 290 */
        {   int ret = r_Step_7(z);
            if (ret == 0) goto lab8; /* call Step_7, line 290 */
            if (ret < 0) return ret;
        }
        z->B[1] = 1; /* set stemmed, line 290 */
    lab8:
        z->c = z->l - m9;
    }
    {   int m10 = z->l - z->c; (void)m10; /* do, line 291 */
        {   int m11 = z->l - z->c; (void)m11; /* or, line 291 */
            if (!(z->B[1])) goto lab11; /* Boolean test stemmed, line 291 */
            goto lab10;
        lab11:
            z->c = z->l - m11;
            {   int ret = r_Step_6(z);
                if (ret == 0) goto lab9; /* call Step_6, line 291 */
                if (ret < 0) return ret;
            }
        }
    lab10:
    lab9:
        z->c = z->l - m10;
    }
    z->c = z->lb;
    {   int c12 = z->c; /* do, line 293 */
        if (!(z->B[0])) goto lab12; /* Boolean test Y_found, line 293 */
        while(1) { /* repeat, line 293 */
            int c13 = z->c;
            while(1) { /* goto, line 293 */
                int c14 = z->c;
                z->bra = z->c; /* [, line 293 */
                if (!(eq_s(z, 1, s_97))) goto lab14;
                z->ket = z->c; /* ], line 293 */
                z->c = c14;
                break;
            lab14:
                z->c = c14;
                {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                    if (ret < 0) goto lab13;
                    z->c = ret; /* goto, line 293 */
                }
            }
            {   int ret = slice_from_s(z, 1, s_98); /* <-, line 293 */
                if (ret < 0) return ret;
            }
            continue;
        lab13:
            z->c = c13;
            break;
        }
    lab12:
        z->c = c12;
    }
    return 1;
}

extern struct SN_env * dutch_UTF_8_create_env(void) { return SN_create_env(1, 3, 2); }

extern void dutch_UTF_8_close_env(struct SN_env * z) { SN_close_env(z, 1); }

