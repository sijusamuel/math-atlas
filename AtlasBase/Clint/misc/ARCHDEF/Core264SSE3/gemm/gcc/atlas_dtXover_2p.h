/* This file generated by /home/whaley/atlas3.9/TEST/ATLAS//tune/blas/gemm/txover.c
 */
#ifndef ATL_TXOVER_H
   #define ATL_TXOVER_H 1

   #define ATL_PDIM 1
static const int ATL_tmmNN_SQmnk_XO[1] = 
   {115};
static const int ATL_tmmNT_SQmnk_XO[1] = 
   {115};
static const int ATL_tmmTN_SQmnk_XO[1] = 
   {115};
#define ATL_tmmTT_SQmnk_XO ATL_tmmNN_SQmnk_XO
static const int *ATL_tmm_SQmnk_XO[4] =
{ATL_tmmNN_SQmnk_XO, ATL_tmmNT_SQmnk_XO,
 ATL_tmmTN_SQmnk_XO, ATL_tmmTT_SQmnk_XO};
static const int ATL_tmmNN_SmnLk_XO[9] = 
   {0,4196,4196,4196,148,118,118,56,56};
static const int ATL_tmmNT_SmnLk_XO[9] = 
   {0,1210,1210,241,118,118,118,56,56};
static const int ATL_tmmTN_SmnLk_XO[9] = 
   {0,6736,2266,1467,686,686,686,56,56};
#define ATL_tmmTT_SmnLk_XO ATL_tmmNN_SmnLk_XO
static const int *ATL_tmm_SmnLk_XO[4] =
{ATL_tmmNN_SmnLk_XO, ATL_tmmNT_SmnLk_XO,
 ATL_tmmTN_SmnLk_XO, ATL_tmmTT_SmnLk_XO};
static const int ATL_tmmNN_SmkLn_XO[9] = 
   {9475,5215,5215,280,126,117,117,70,56};
static const int ATL_tmmNT_SmkLn_XO[9] = 
   {0,5305,5305,462,155,117,117,60,56};
#define ATL_tmmTN_SmkLn_XO ATL_tmmNN_SmkLn_XO
#define ATL_tmmTT_SmkLn_XO ATL_tmmNT_SmkLn_XO
static const int *ATL_tmm_SmkLn_XO[4] =
{ATL_tmmNN_SmkLn_XO, ATL_tmmNT_SmkLn_XO,
 ATL_tmmTN_SmkLn_XO, ATL_tmmTT_SmkLn_XO};
static const int ATL_tmmNN_SnkLm_XO[9] = 
   {0,0,0,5373,601,434,117,60,56};
#define ATL_tmmNT_SnkLm_XO ATL_tmmNN_SnkLm_XO
static const int ATL_tmmTN_SnkLm_XO[9] = 
   {0,6534,2846,2846,155,117,117,60,56};
#define ATL_tmmTT_SnkLm_XO ATL_tmmTN_SnkLm_XO
static const int *ATL_tmm_SnkLm_XO[4] =
{ATL_tmmNN_SnkLm_XO, ATL_tmmNT_SnkLm_XO,
 ATL_tmmTN_SnkLm_XO, ATL_tmmTT_SnkLm_XO};
static const int ATL_tmmNN_SmLnk_XO[9] = 
   {197,197,197,197,141,130,119,96,96};
static const int ATL_tmmNT_SmLnk_XO[9] = 
   {739,739,559,549,317,123,112,66,61};
static const int ATL_tmmTN_SmLnk_XO[9] = 
   {356,356,356,356,345,140,129,118,61};
static const int ATL_tmmTT_SmLnk_XO[9] = 
   {145,145,145,145,145,123,112,66,61};
static const int *ATL_tmm_SmLnk_XO[4] =
{ATL_tmmNN_SmLnk_XO, ATL_tmmNT_SmLnk_XO,
 ATL_tmmTN_SmLnk_XO, ATL_tmmTT_SmLnk_XO};
static const int ATL_tmmNN_SnLmk_XO[9] = 
   {260,260,260,260,260,135,124,113,113};
static const int ATL_tmmNT_SnLmk_XO[9] = 
   {777,777,736,556,134,123,112,66,61};
static const int ATL_tmmTN_SnLmk_XO[9] = 
   {236,236,236,236,225,123,112,89,61};
static const int ATL_tmmTT_SnLmk_XO[9] = 
   {203,203,203,203,203,192,181,170,159};
static const int *ATL_tmm_SnLmk_XO[4] =
{ATL_tmmNN_SnLmk_XO, ATL_tmmNT_SnLmk_XO,
 ATL_tmmTN_SnLmk_XO, ATL_tmmTT_SnLmk_XO};
static const int ATL_tmmNN_SkLmn_XO[9] = 
   {0,0,0,145,134,123,112,66,61};
static const int ATL_tmmNT_SkLmn_XO[9] = 
   {0,0,0,3169,156,123,112,66,61};
static const int ATL_tmmTN_SkLmn_XO[9] = 
   {0,0,0,186,186,175,164,164,61};
#define ATL_tmmTT_SkLmn_XO ATL_tmmNN_SkLmn_XO
static const int *ATL_tmm_SkLmn_XO[4] =
{ATL_tmmNN_SkLmn_XO, ATL_tmmNT_SkLmn_XO,
 ATL_tmmTN_SkLmn_XO, ATL_tmmTT_SkLmn_XO};

#endif /* end ifndef ATL_TXOVER_H */
