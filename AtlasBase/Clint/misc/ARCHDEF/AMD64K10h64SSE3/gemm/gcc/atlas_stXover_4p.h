/* This file generated by /home/whaley/TEST/ATLAS3.9.22/obj64/..//tune/blas/gemm/txover.c
*/
#ifndef ATL_TXOVER_H
#define ATL_TXOVER_H 1

#define ATL_PDIM 2
static const int ATL_tmmNN_SQmnk_XO[2] =
{144,144};
static const int ATL_tmmNT_SQmnk_XO[2] =
{144,144};
static const int ATL_tmmTN_SQmnk_XO[2] =
{144,144};
#define ATL_tmmTT_SQmnk_XO ATL_tmmNN_SQmnk_XO
static const int *ATL_tmm_SQmnk_XO[4] =
{ATL_tmmNN_SQmnk_XO, ATL_tmmNT_SQmnk_XO,
ATL_tmmTN_SQmnk_XO, ATL_tmmTT_SQmnk_XO};
static const int ATL_tmmNN_SmnLk_XO[18] =
{0,0,0,0,2241,4310,2241,3927,0,555,238,290,153,290,153,288,0,72};
static const int ATL_tmmNT_SmnLk_XO[18] =
{5487,7204,4816,5027,0,1659,0,1659,271,2323,271,2240,158,295,158,303,0,72};
static const int ATL_tmmTN_SmnLk_XO[18] =
{0,0,0,0,2009,5005,0,2009,702,2780,272,313,151,294,151,391,0,72};
#define ATL_tmmTT_SmnLk_XO ATL_tmmNN_SmnLk_XO
static const int *ATL_tmm_SmnLk_XO[4] =
{ATL_tmmNN_SmnLk_XO, ATL_tmmNT_SmnLk_XO,
ATL_tmmTN_SmnLk_XO, ATL_tmmTT_SmnLk_XO};
static const int ATL_tmmNN_SmkLn_XO[18] =
{3077,5888,3077,4593,1561,2285,1561,1561,292,519,292,297,0,288,144,304,0,72};
static const int ATL_tmmNT_SmkLn_XO[18] =
{6738,6738,4782,4863,4782,6145,693,3236,693,737,273,1440,196,291,196,294,0,72};
#define ATL_tmmTN_SmkLn_XO ATL_tmmNN_SmkLn_XO
#define ATL_tmmTT_SmkLn_XO ATL_tmmNT_SmkLn_XO
static const int *ATL_tmm_SmkLn_XO[4] =
{ATL_tmmNN_SmkLn_XO, ATL_tmmNT_SmkLn_XO,
ATL_tmmTN_SmkLn_XO, ATL_tmmTT_SmkLn_XO};
static const int ATL_tmmNN_SnkLm_XO[18] =
{0,0,0,0,0,6514,3029,3258,820,879,262,288,155,288,155,294,0,72};
#define ATL_tmmNT_SnkLm_XO ATL_tmmNN_SnkLm_XO
static const int ATL_tmmTN_SnkLm_XO[18] =
{9540,0,5806,0,2332,0,0,2332,283,5815,262,298,155,288,155,294,0,72};
#define ATL_tmmTT_SnkLm_XO ATL_tmmTN_SnkLm_XO
static const int *ATL_tmm_SnkLm_XO[4] =
{ATL_tmmNN_SnkLm_XO, ATL_tmmNT_SnkLm_XO,
ATL_tmmTN_SnkLm_XO, ATL_tmmTT_SnkLm_XO};
static const int ATL_tmmNN_SmLnk_XO[18] =
{615,625,615,625,0,615,221,539,164,175,164,175,0,164,164,164,72,152};
static const int ATL_tmmNT_SmLnk_XO[18] =
{0,293,0,293,293,377,0,185,163,163,152,163,152,163,152,152,72,152};
static const int ATL_tmmTN_SmLnk_XO[18] =
{0,322,0,322,232,3200,221,894,152,163,152,163,152,163,0,152,72,152};
static const int ATL_tmmTT_SmLnk_XO[18] =
{226,237,226,721,226,597,226,265,163,1636,152,163,0,152,152,152,72,152};
static const int *ATL_tmm_SmLnk_XO[4] =
{ATL_tmmNN_SmLnk_XO, ATL_tmmNT_SmLnk_XO,
ATL_tmmTN_SmLnk_XO, ATL_tmmTT_SmLnk_XO};
static const int ATL_tmmNN_SnLmk_XO[18] =
{229,983,229,735,229,600,229,677,215,254,152,163,152,163,152,152,72,152};
static const int ATL_tmmNT_SnLmk_XO[18] =
{224,235,0,224,224,345,152,174,152,163,152,163,152,163,152,152,72,152};
static const int ATL_tmmTN_SnLmk_XO[18] =
{250,316,250,299,221,457,221,311,152,163,152,163,152,163,152,152,72,152};
static const int ATL_tmmTT_SnLmk_XO[18] =
{462,472,462,840,0,462,203,521,145,236,145,156,145,156,145,268,72,152};
static const int *ATL_tmm_SnLmk_XO[4] =
{ATL_tmmNN_SnLmk_XO, ATL_tmmNT_SnLmk_XO,
ATL_tmmTN_SnLmk_XO, ATL_tmmTT_SnLmk_XO};
static const int ATL_tmmNN_SkLmn_XO[18] =
{0,346,0,346,346,422,220,425,152,163,152,163,152,163,152,152,72,152};
static const int ATL_tmmNT_SkLmn_XO[18] =
{366,377,366,409,276,420,0,276,163,219,163,174,0,163,152,164,72,152};
static const int ATL_tmmTN_SkLmn_XO[18] =
{0,366,366,429,285,407,0,285,161,299,152,163,152,163,152,152,72,152};
#define ATL_tmmTT_SkLmn_XO ATL_tmmNN_SkLmn_XO
static const int *ATL_tmm_SkLmn_XO[4] =
{ATL_tmmNN_SkLmn_XO, ATL_tmmNT_SkLmn_XO,
ATL_tmmTN_SkLmn_XO, ATL_tmmTT_SkLmn_XO};

#endif /* end ifndef ATL_TXOVER_H */
