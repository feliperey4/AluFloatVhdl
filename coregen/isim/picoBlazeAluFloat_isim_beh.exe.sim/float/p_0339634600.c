/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;



int float_p_0339634600_sub_1429273808_2990995242(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    int t25;
    int t26;
    int t27;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((int *)t15) = 0;
    t7 = (t3 + 0U);
    t17 = *((int *)t7);
    t8 = (t3 + 0U);
    t18 = *((int *)t8);
    t10 = (t3 + 8U);
    t19 = *((int *)t10);
    t20 = (t17 - t18);
    t21 = (t20 * t19);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t11 = (t2 + t23);
    t13 = *((unsigned char *)t11);
    t24 = (t13 == (unsigned char)3);
    if (t24 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t3 + 0U);
    t17 = *((int *)t7);
    t18 = t17;
    t19 = 0;

LAB8:    if (t18 >= t19)
        goto LAB9;

LAB11:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t0 = t17;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB4:    t0 = 0;
    goto LAB1;

LAB7:    goto LAB5;

LAB9:    t8 = (t3 + 0U);
    t20 = *((int *)t8);
    t10 = (t3 + 8U);
    t25 = *((int *)t10);
    t26 = (t18 - t20);
    t21 = (t26 * t25);
    t11 = (t3 + 4U);
    t27 = *((int *)t11);
    xsi_vhdl_check_range_of_index(t20, t27, t25, t18);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t15 = (t2 + t23);
    t13 = *((unsigned char *)t15);
    t24 = (t13 == (unsigned char)3);
    if (t24 != 0)
        goto LAB12;

LAB14:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = *((int *)t8);
    t20 = (t17 + 1);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t20;

LAB13:
LAB10:    if (t18 == t19)
        goto LAB11;

LAB16:    t17 = (t18 + -1);
    t18 = t17;
    goto LAB8;

LAB12:    goto LAB11;

LAB15:    goto LAB13;

LAB17:;
}


extern void float_p_0339634600_init()
{
	static char *se[] = {(void *)float_p_0339634600_sub_1429273808_2990995242};
	xsi_register_didat("float_p_0339634600", "isim/picoBlazeAluFloat_isim_beh.exe.sim/float/p_0339634600.didat");
	xsi_register_subprogram_executes(se);
}
