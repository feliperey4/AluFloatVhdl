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
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *STD_TEXTIO;
extern char *IEEE_P_3620187407;

char *archivos_p_0370104789_sub_3935811274_1612594667(char *, char *, char *, char *);
unsigned char archivos_p_0370104789_sub_4008927481_1612594667(char *, int );
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1808404841_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_3143221075_1035706684(char *, char *, char *, int );
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


char *archivos_p_0370104789_sub_3917337735_1612594667(char *t1, char *t2, char *t3, char *t4)
{
    char t5[512];
    char t6[24];
    char t10[8];
    char t15[16];
    char t22[72];
    char t26[16];
    char t46[16];
    char t53[8];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned char t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    char *t64;
    char *t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    char *t77;
    int t79;
    char *t80;
    int t82;
    char *t83;
    int t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    int t91;
    char *t92;
    int t93;
    int t94;
    char *t95;
    int t96;
    char *t97;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    xsi_type_set_default_value(t8, t10, 0);
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = xsi_get_transient_memory(68U);
    memset(t13, 0, 68U);
    t14 = t13;
    memset(t14, (unsigned char)2, 68U);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 67;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 67);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 124U);
    t20 = ((IEEE_P_2592010699) + 4024);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    memcpy(t22, t13, 68U);
    t24 = (t17 + 64U);
    *((char **)t24) = t15;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = 68U;
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 16;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (16 - 1);
    t19 = (t29 * 1);
    t19 = (t19 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t19;
    t28 = (t5 + 244U);
    t30 = ((STD_STANDARD) + 1008);
    t31 = (t28 + 88U);
    *((char **)t31) = t30;
    t32 = xsi_get_memory(16U);
    t33 = (t28 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, t26);
    t34 = (t28 + 64U);
    *((char **)t34) = t26;
    t35 = (t28 + 80U);
    *((unsigned int *)t35) = 16U;
    t36 = (t28 + 136U);
    *((char **)t36) = t32;
    t37 = (t28 + 124U);
    *((int *)t37) = 0;
    t38 = (t28 + 128U);
    t39 = (t26 + 12U);
    t19 = *((unsigned int *)t39);
    t40 = (t19 - 1);
    *((int *)t38) = t40;
    t41 = (t28 + 120U);
    t43 = (16U > 2147483644);
    if (t43 == 1)
        goto LAB2;

LAB3:    t44 = (16U + 3);
    t45 = (t44 / 16);
    t42 = t45;

LAB4:    *((unsigned int *)t41) = t42;
    t47 = (t46 + 0U);
    t48 = (t47 + 0U);
    *((int *)t48) = 3;
    t48 = (t47 + 4U);
    *((int *)t48) = 0;
    t48 = (t47 + 8U);
    *((int *)t48) = -1;
    t49 = (0 - 3);
    t50 = (t49 * -1);
    t50 = (t50 + 1);
    t48 = (t47 + 12U);
    *((unsigned int *)t48) = t50;
    t48 = (t5 + 388U);
    t51 = ((IEEE_P_2592010699) + 4024);
    t52 = (t48 + 88U);
    *((char **)t52) = t51;
    t54 = (t48 + 56U);
    *((char **)t54) = t53;
    xsi_type_set_default_value(t51, t53, t46);
    t55 = (t48 + 64U);
    *((char **)t55) = t46;
    t56 = (t48 + 80U);
    *((unsigned int *)t56) = 4U;
    t57 = (t6 + 4U);
    t58 = (t3 != 0);
    if (t58 == 1)
        goto LAB6;

LAB5:    t59 = (t6 + 12U);
    *((char **)t59) = t4;
    t60 = (t4 + 0U);
    t61 = *((int *)t60);
    t62 = (t61 + 1);
    t63 = (t62 / 4);
    t64 = (t7 + 56U);
    t65 = *((char **)t64);
    t64 = (t65 + 0);
    *((int *)t64) = t63;
    t8 = (t4 + 0U);
    t18 = *((int *)t8);
    t29 = (t18 + 1);
    t40 = xsi_vhdl_mod(t29, 4);
    t58 = (t40 != 0);
    if (t58 != 0)
        goto LAB7;

LAB9:
LAB8:    t8 = (t17 + 56U);
    t9 = *((char **)t8);
    t8 = (t15 + 0U);
    t18 = *((int *)t8);
    t11 = (t4 + 0U);
    t29 = *((int *)t11);
    t19 = (t18 - t29);
    t12 = (t15 + 4U);
    t40 = *((int *)t12);
    t13 = (t15 + 8U);
    t49 = *((int *)t13);
    xsi_vhdl_check_range_of_slice(t18, t40, t49, t29, 0, -1);
    t42 = (t19 * 1U);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    t16 = (t4 + 12U);
    t44 = *((unsigned int *)t16);
    t44 = (t44 * 1U);
    memcpy(t14, t3, t44);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t18 = *((int *)t9);
    t29 = (t18 - 1);
    t40 = t29;
    t49 = 0;

LAB10:    if (t40 >= t49)
        goto LAB11;

LAB13:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t26 + 0U);
    t18 = *((int *)t8);
    t19 = (1 - t18);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t29 = *((int *)t12);
    t11 = (t26 + 4U);
    t40 = *((int *)t11);
    t13 = (t26 + 8U);
    t49 = *((int *)t13);
    xsi_vhdl_check_range_of_slice(t18, t40, t49, 1, t29, 1);
    t42 = (t19 * 1U);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    t16 = (t7 + 56U);
    t20 = *((char **)t16);
    t61 = *((int *)t20);
    t62 = (t61 - 1);
    t44 = (t62 * 1);
    t44 = (t44 + 1);
    t45 = (1U * t44);
    t0 = xsi_get_transient_memory(t45);
    memcpy(t0, t14, t45);
    t16 = (t7 + 56U);
    t21 = *((char **)t16);
    t63 = *((int *)t21);
    t16 = (t2 + 0U);
    t23 = (t16 + 0U);
    *((int *)t23) = 1;
    t23 = (t16 + 4U);
    *((int *)t23) = t63;
    t23 = (t16 + 8U);
    *((int *)t23) = 1;
    t66 = (t63 - 1);
    t50 = (t66 * 1);
    t50 = (t50 + 1);
    t23 = (t16 + 12U);
    *((unsigned int *)t23) = t50;

LAB1:    t8 = (t28 + 80);
    t18 = *((int *)t8);
    t9 = (t28 + 136U);
    t11 = *((char **)t9);
    xsi_put_memory(t18, t11);
    return t0;
LAB2:    t42 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t57) = t3;
    goto LAB5;

LAB7:    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t49 = *((int *)t11);
    t61 = (t49 + 1);
    t9 = (t7 + 56U);
    t12 = *((char **)t9);
    t9 = (t12 + 0);
    *((int *)t9) = t61;
    goto LAB8;

LAB11:    t8 = (t17 + 56U);
    t11 = *((char **)t8);
    t8 = (t15 + 0U);
    t61 = *((int *)t8);
    t62 = (t40 * 4);
    t63 = (t62 + 3);
    t19 = (t61 - t63);
    t66 = (t40 * 4);
    t12 = (t15 + 4U);
    t67 = *((int *)t12);
    t13 = (t15 + 8U);
    t68 = *((int *)t13);
    xsi_vhdl_check_range_of_slice(t61, t67, t68, t63, t66, -1);
    t42 = (t19 * 1U);
    t43 = (0 + t42);
    t14 = (t11 + t43);
    t16 = (t48 + 56U);
    t20 = *((char **)t16);
    t16 = (t20 + 0);
    t69 = (t40 * 4);
    t70 = (t69 + 3);
    t71 = (t40 * 4);
    t72 = (t71 - t70);
    t44 = (t72 * -1);
    t44 = (t44 + 1);
    t45 = (1U * t44);
    memcpy(t16, t14, t45);
    t8 = (t48 + 56U);
    t9 = *((char **)t8);
    t8 = (t1 + 3484);
    t18 = xsi_mem_cmp(t8, t9, 4U);
    if (t18 == 1)
        goto LAB15;

LAB35:    t12 = (t1 + 3488);
    t29 = xsi_mem_cmp(t12, t9, 4U);
    if (t29 == 1)
        goto LAB16;

LAB36:    t14 = (t1 + 3492);
    t61 = xsi_mem_cmp(t14, t9, 4U);
    if (t61 == 1)
        goto LAB17;

LAB37:    t20 = (t1 + 3496);
    t62 = xsi_mem_cmp(t20, t9, 4U);
    if (t62 == 1)
        goto LAB18;

LAB38:    t23 = (t1 + 3500);
    t63 = xsi_mem_cmp(t23, t9, 4U);
    if (t63 == 1)
        goto LAB19;

LAB39:    t25 = (t1 + 3504);
    t66 = xsi_mem_cmp(t25, t9, 4U);
    if (t66 == 1)
        goto LAB20;

LAB40:    t30 = (t1 + 3508);
    t67 = xsi_mem_cmp(t30, t9, 4U);
    if (t67 == 1)
        goto LAB21;

LAB41:    t32 = (t1 + 3512);
    t68 = xsi_mem_cmp(t32, t9, 4U);
    if (t68 == 1)
        goto LAB22;

LAB42:    t34 = (t1 + 3516);
    t69 = xsi_mem_cmp(t34, t9, 4U);
    if (t69 == 1)
        goto LAB23;

LAB43:    t36 = (t1 + 3520);
    t70 = xsi_mem_cmp(t36, t9, 4U);
    if (t70 == 1)
        goto LAB24;

LAB44:    t38 = (t1 + 3524);
    t71 = xsi_mem_cmp(t38, t9, 4U);
    if (t71 == 1)
        goto LAB25;

LAB45:    t41 = (t1 + 3528);
    t72 = xsi_mem_cmp(t41, t9, 4U);
    if (t72 == 1)
        goto LAB26;

LAB46:    t51 = (t1 + 3532);
    t73 = xsi_mem_cmp(t51, t9, 4U);
    if (t73 == 1)
        goto LAB27;

LAB47:    t54 = (t1 + 3536);
    t74 = xsi_mem_cmp(t54, t9, 4U);
    if (t74 == 1)
        goto LAB28;

LAB48:    t56 = (t1 + 3540);
    t75 = xsi_mem_cmp(t56, t9, 4U);
    if (t75 == 1)
        goto LAB29;

LAB49:    t64 = (t1 + 3544);
    t76 = xsi_mem_cmp(t64, t9, 4U);
    if (t76 == 1)
        goto LAB30;

LAB50:    t77 = (t1 + 3548);
    t79 = xsi_mem_cmp(t77, t9, 4U);
    if (t79 == 1)
        goto LAB31;

LAB51:    t80 = (t1 + 3552);
    t82 = xsi_mem_cmp(t80, t9, 4U);
    if (t82 == 1)
        goto LAB32;

LAB52:    t83 = (t1 + 3556);
    t85 = xsi_mem_cmp(t83, t9, 4U);
    if (t85 == 1)
        goto LAB33;

LAB53:
LAB34:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)63;

LAB14:
LAB12:    if (t40 == t49)
        goto LAB13;

LAB55:    t18 = (t40 + -1);
    t40 = t18;
    goto LAB10;

LAB15:    t86 = (t28 + 56U);
    t87 = *((char **)t86);
    t86 = (t7 + 56U);
    t88 = *((char **)t86);
    t89 = *((int *)t88);
    t90 = (t89 - t40);
    t86 = (t26 + 0U);
    t91 = *((int *)t86);
    t92 = (t26 + 8U);
    t93 = *((int *)t92);
    t94 = (t90 - t91);
    t19 = (t94 * t93);
    t95 = (t26 + 4U);
    t96 = *((int *)t95);
    xsi_vhdl_check_range_of_index(t91, t96, t93, t90);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t97 = (t87 + t43);
    *((unsigned char *)t97) = (unsigned char)48;
    goto LAB14;

LAB16:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)49;
    goto LAB14;

LAB17:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)50;
    goto LAB14;

LAB18:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)51;
    goto LAB14;

LAB19:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)52;
    goto LAB14;

LAB20:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)53;
    goto LAB14;

LAB21:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)54;
    goto LAB14;

LAB22:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)55;
    goto LAB14;

LAB23:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)56;
    goto LAB14;

LAB24:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)57;
    goto LAB14;

LAB25:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)65;
    goto LAB14;

LAB26:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)66;
    goto LAB14;

LAB27:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)67;
    goto LAB14;

LAB28:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)68;
    goto LAB14;

LAB29:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)69;
    goto LAB14;

LAB30:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)70;
    goto LAB14;

LAB31:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)122;
    goto LAB14;

LAB32:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)117;
    goto LAB14;

LAB33:    t8 = (t28 + 56U);
    t9 = *((char **)t8);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t18 = *((int *)t11);
    t29 = (t18 - t40);
    t8 = (t26 + 0U);
    t61 = *((int *)t8);
    t12 = (t26 + 8U);
    t62 = *((int *)t12);
    t63 = (t29 - t61);
    t19 = (t63 * t62);
    t13 = (t26 + 4U);
    t66 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t61, t66, t62, t29);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t14 = (t9 + t43);
    *((unsigned char *)t14) = (unsigned char)120;
    goto LAB14;

LAB54:;
LAB56:;
}

char *archivos_p_0370104789_sub_3478709790_1612594667(char *t1, char *t2, char *t3, char *t4)
{
    char t6[24];
    char t10[16];
    char *t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;

LAB0:    t7 = (t6 + 4U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 12U);
    *((char **)t9) = t4;
    t11 = archivos_p_0370104789_sub_3935811274_1612594667(t1, t10, t3, t4);
    t12 = (t10 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t11, t13);
    t14 = (t10 + 0U);
    t15 = *((int *)t14);
    t16 = (t10 + 4U);
    t17 = *((int *)t16);
    t18 = (t10 + 8U);
    t19 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t15;
    t21 = (t20 + 4U);
    *((int *)t21) = t17;
    t21 = (t20 + 8U);
    *((int *)t21) = t19;
    t22 = (t17 - t15);
    t23 = (t22 * t19);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *archivos_p_0370104789_sub_3935811274_1612594667(char *t1, char *t2, char *t3, char *t4)
{
    char t5[632];
    char t6[24];
    char t7[16];
    char t32[16];
    char t48[8];
    char t54[8];
    char t60[8];
    char t69[16];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 10;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (10 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((STD_STANDARD) + 1008);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t14 = xsi_get_memory(10U);
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, t7);
    t16 = (t9 + 64U);
    *((char **)t16) = t7;
    t17 = (t9 + 80U);
    *((unsigned int *)t17) = 10U;
    t18 = (t9 + 136U);
    *((char **)t18) = t14;
    t19 = (t9 + 124U);
    *((int *)t19) = 0;
    t20 = (t9 + 128U);
    t21 = (t7 + 12U);
    t11 = *((unsigned int *)t21);
    t22 = (t11 - 1);
    *((int *)t20) = t22;
    t23 = (t9 + 120U);
    t25 = (10U > 2147483644);
    if (t25 == 1)
        goto LAB2;

LAB3:    t26 = (10U + 3);
    t27 = (t26 / 16);
    t24 = t27;

LAB4:    *((unsigned int *)t23) = t24;
    t28 = (t4 + 0U);
    t29 = *((int *)t28);
    t30 = (0 - t29);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t31 = (t31 * 1U);
    t33 = (t4 + 0U);
    t34 = *((int *)t33);
    t35 = (t32 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = t34;
    t36 = (t35 + 4U);
    *((int *)t36) = 0;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - t34);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = (t5 + 148U);
    t39 = ((IEEE_P_1242562249) + 3000);
    t40 = (t36 + 88U);
    *((char **)t40) = t39;
    t41 = (char *)alloca(t31);
    t42 = (t36 + 56U);
    *((char **)t42) = t41;
    xsi_type_set_default_value(t39, t41, t32);
    t43 = (t36 + 64U);
    *((char **)t43) = t32;
    t44 = (t36 + 80U);
    *((unsigned int *)t44) = t31;
    t45 = (t5 + 268U);
    t46 = ((STD_STANDARD) + 384);
    t47 = (t45 + 88U);
    *((char **)t47) = t46;
    t49 = (t45 + 56U);
    *((char **)t49) = t48;
    *((int *)t48) = 1;
    t50 = (t45 + 80U);
    *((unsigned int *)t50) = 4U;
    t51 = (t5 + 388U);
    t52 = ((STD_STANDARD) + 384);
    t53 = (t51 + 88U);
    *((char **)t53) = t52;
    t55 = (t51 + 56U);
    *((char **)t55) = t54;
    *((int *)t54) = 1;
    t56 = (t51 + 80U);
    *((unsigned int *)t56) = 4U;
    t57 = (t5 + 508U);
    t58 = ((STD_STANDARD) + 384);
    t59 = (t57 + 88U);
    *((char **)t59) = t58;
    t61 = (t57 + 56U);
    *((char **)t61) = t60;
    *((int *)t60) = 10;
    t62 = (t57 + 80U);
    *((unsigned int *)t62) = 4U;
    t63 = (t6 + 4U);
    t64 = (t3 != 0);
    if (t64 == 1)
        goto LAB6;

LAB5:    t65 = (t6 + 12U);
    *((char **)t65) = t4;
    t66 = (t36 + 56U);
    t67 = *((char **)t66);
    t66 = (t67 + 0);
    t68 = (t4 + 12U);
    t38 = *((unsigned int *)t68);
    t38 = (t38 * 1U);
    memcpy(t66, t3, t38);

LAB7:    t8 = (t36 + 56U);
    t12 = *((char **)t8);
    t8 = (t57 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t64 = ieee_p_1242562249_sub_3143221075_1035706684(IEEE_P_1242562249, t12, t32, t10);
    if (t64 != 0)
        goto LAB8;

LAB10:    t8 = (t45 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t22 = t10;
    t29 = 1;

LAB11:    if (t22 >= t29)
        goto LAB12;

LAB14:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t7 + 0U);
    t10 = *((int *)t13);
    t14 = (t7 + 4U);
    t22 = *((int *)t14);
    t15 = (t7 + 8U);
    t29 = *((int *)t15);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t10;
    t17 = (t16 + 4U);
    *((int *)t17) = t22;
    t17 = (t16 + 8U);
    *((int *)t17) = t29;
    t30 = (t22 - t10);
    t24 = (t30 * t29);
    t24 = (t24 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t24;

LAB1:    t8 = (t9 + 80);
    t10 = *((int *)t8);
    t12 = (t9 + 136U);
    t13 = *((char **)t12);
    xsi_put_memory(t10, t13);
    return t0;
LAB2:    t24 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t63) = t3;
    goto LAB5;

LAB8:    t8 = (t45 + 56U);
    t14 = *((char **)t8);
    t22 = *((int *)t14);
    t29 = (t22 + 1);
    t8 = (t45 + 56U);
    t15 = *((char **)t8);
    t8 = (t15 + 0);
    *((int *)t8) = t29;
    t8 = (t36 + 56U);
    t12 = *((char **)t8);
    t8 = (t57 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_1808404841_1035706684(IEEE_P_1242562249, t69, t12, t32, t10);
    t14 = (t36 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t16 = (t69 + 12U);
    t11 = *((unsigned int *)t16);
    t24 = (1U * t11);
    memcpy(t14, t8, t24);
    goto LAB7;

LAB9:;
LAB12:    t8 = (t51 + 56U);
    t13 = *((char **)t8);
    t30 = *((int *)t13);
    t8 = ieee_p_1242562249_sub_1808404841_1035706684(IEEE_P_1242562249, t69, t3, t4, t30);
    t34 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t69);
    t14 = (t57 + 56U);
    t15 = *((char **)t14);
    t37 = *((int *)t15);
    t70 = xsi_vhdl_mod(t34, t37);
    t64 = archivos_p_0370104789_sub_4008927481_1612594667(t1, t70);
    t14 = (t9 + 56U);
    t16 = *((char **)t14);
    t14 = (t7 + 0U);
    t71 = *((int *)t14);
    t17 = (t7 + 8U);
    t72 = *((int *)t17);
    t73 = (t22 - t71);
    t11 = (t73 * t72);
    t18 = (t7 + 4U);
    t74 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t71, t74, t72, t22);
    t24 = (1U * t11);
    t25 = (0 + t24);
    t19 = (t16 + t25);
    *((unsigned char *)t19) = t64;
    t8 = (t51 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t57 + 56U);
    t13 = *((char **)t8);
    t30 = *((int *)t13);
    t34 = (t10 * t30);
    t8 = (t51 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t34;

LAB13:    if (t22 == t29)
        goto LAB14;

LAB15:    t10 = (t22 + -1);
    t22 = t10;
    goto LAB11;

LAB16:;
}

unsigned char archivos_p_0370104789_sub_4008927481_1612594667(char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 192);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 1U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    if (t2 == 0)
        goto LAB3;

LAB40:    if (t2 == 1)
        goto LAB4;

LAB41:    if (t2 == 2)
        goto LAB5;

LAB42:    if (t2 == 3)
        goto LAB6;

LAB43:    if (t2 == 4)
        goto LAB7;

LAB44:    if (t2 == 5)
        goto LAB8;

LAB45:    if (t2 == 6)
        goto LAB9;

LAB46:    if (t2 == 7)
        goto LAB10;

LAB47:    if (t2 == 8)
        goto LAB11;

LAB48:    if (t2 == 9)
        goto LAB12;

LAB49:    if (t2 == 10)
        goto LAB13;

LAB50:    if (t2 == 11)
        goto LAB14;

LAB51:    if (t2 == 12)
        goto LAB15;

LAB52:    if (t2 == 13)
        goto LAB16;

LAB53:    if (t2 == 14)
        goto LAB17;

LAB54:    if (t2 == 15)
        goto LAB18;

LAB55:    if (t2 == 16)
        goto LAB19;

LAB56:    if (t2 == 17)
        goto LAB20;

LAB57:    if (t2 == 18)
        goto LAB21;

LAB58:    if (t2 == 19)
        goto LAB22;

LAB59:    if (t2 == 20)
        goto LAB23;

LAB60:    if (t2 == 21)
        goto LAB24;

LAB61:    if (t2 == 22)
        goto LAB25;

LAB62:    if (t2 == 23)
        goto LAB26;

LAB63:    if (t2 == 24)
        goto LAB27;

LAB64:    if (t2 == 25)
        goto LAB28;

LAB65:    if (t2 == 26)
        goto LAB29;

LAB66:    if (t2 == 27)
        goto LAB30;

LAB67:    if (t2 == 28)
        goto LAB31;

LAB68:    if (t2 == 29)
        goto LAB32;

LAB69:    if (t2 == 30)
        goto LAB33;

LAB70:    if (t2 == 31)
        goto LAB34;

LAB71:    if (t2 == 32)
        goto LAB35;

LAB72:    if (t2 == 33)
        goto LAB36;

LAB73:    if (t2 == 34)
        goto LAB37;

LAB74:    if (t2 == 35)
        goto LAB38;

LAB75:
LAB39:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)63;

LAB2:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t14 = *((unsigned char *)t7);
    t0 = t14;

LAB1:    return t0;
LAB3:    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((unsigned char *)t12) = (unsigned char)48;
    goto LAB2;

LAB4:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)49;
    goto LAB2;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)50;
    goto LAB2;

LAB6:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)51;
    goto LAB2;

LAB7:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)52;
    goto LAB2;

LAB8:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)53;
    goto LAB2;

LAB9:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)54;
    goto LAB2;

LAB10:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)55;
    goto LAB2;

LAB11:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)56;
    goto LAB2;

LAB12:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)57;
    goto LAB2;

LAB13:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)65;
    goto LAB2;

LAB14:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)66;
    goto LAB2;

LAB15:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)67;
    goto LAB2;

LAB16:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)68;
    goto LAB2;

LAB17:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)69;
    goto LAB2;

LAB18:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)70;
    goto LAB2;

LAB19:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)71;
    goto LAB2;

LAB20:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)72;
    goto LAB2;

LAB21:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)73;
    goto LAB2;

LAB22:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)74;
    goto LAB2;

LAB23:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)75;
    goto LAB2;

LAB24:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)76;
    goto LAB2;

LAB25:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)77;
    goto LAB2;

LAB26:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)78;
    goto LAB2;

LAB27:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)79;
    goto LAB2;

LAB28:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)80;
    goto LAB2;

LAB29:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)81;
    goto LAB2;

LAB30:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)82;
    goto LAB2;

LAB31:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)83;
    goto LAB2;

LAB32:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)84;
    goto LAB2;

LAB33:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)85;
    goto LAB2;

LAB34:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)86;
    goto LAB2;

LAB35:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)87;
    goto LAB2;

LAB36:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)88;
    goto LAB2;

LAB37:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)89;
    goto LAB2;

LAB38:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)90;
    goto LAB2;

LAB76:;
LAB77:;
}

void archivos_p_0370104789_sub_206672475_1612594667(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t5[728];
    char t6[32];
    char t11[16];
    char t27[8];
    char t33[8];
    char t39[8];
    char t46[16];
    char t60[16];
    char t66[8];
    char t81[16];
    char t82[16];
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    char *t47;
    int t48;
    int t49;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    int t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned char t80;
    unsigned int t83;
    static char *nl0[] = {&&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17, &&LAB17};

LAB0:    t7 = (t4 + 0U);
    t8 = *((int *)t7);
    t9 = (0 - t8);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t4 + 0U);
    t13 = *((int *)t12);
    t14 = (t11 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = t13;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - t13);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t5 + 4U);
    t18 = ((IEEE_P_2592010699) + 4024);
    t19 = (t15 + 88U);
    *((char **)t19) = t18;
    t20 = (char *)alloca(t10);
    t21 = (t15 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t11);
    t22 = (t15 + 64U);
    *((char **)t22) = t11;
    t23 = (t15 + 80U);
    *((unsigned int *)t23) = t10;
    t24 = (t5 + 124U);
    t25 = ((STD_STANDARD) + 384);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 4U;
    t30 = (t5 + 244U);
    t31 = ((STD_STANDARD) + 192);
    t32 = (t30 + 88U);
    *((char **)t32) = t31;
    t34 = (t30 + 56U);
    *((char **)t34) = t33;
    xsi_type_set_default_value(t31, t33, 0);
    t35 = (t30 + 80U);
    *((unsigned int *)t35) = 1U;
    t36 = (t5 + 364U);
    t37 = ((STD_STANDARD) + 0);
    t38 = (t36 + 88U);
    *((char **)t38) = t37;
    t40 = (t36 + 56U);
    *((char **)t40) = t39;
    *((unsigned char *)t39) = (unsigned char)1;
    t41 = (t36 + 80U);
    *((unsigned int *)t41) = 1U;
    t42 = (t4 + 0U);
    t43 = *((int *)t42);
    t44 = (t43 + 4);
    t45 = (0 - t44);
    t17 = (t45 * -1);
    t17 = (t17 + 1);
    t17 = (t17 * 1U);
    t47 = (t4 + 0U);
    t48 = *((int *)t47);
    t49 = (t48 + 4);
    t50 = (t46 + 0U);
    t51 = (t50 + 0U);
    *((int *)t51) = t49;
    t51 = (t50 + 4U);
    *((int *)t51) = 0;
    t51 = (t50 + 8U);
    *((int *)t51) = -1;
    t52 = (0 - t49);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t51 = (t50 + 12U);
    *((unsigned int *)t51) = t53;
    t51 = (t5 + 484U);
    t54 = ((IEEE_P_2592010699) + 4024);
    t55 = (t51 + 88U);
    *((char **)t55) = t54;
    t56 = (char *)alloca(t17);
    t57 = (t51 + 56U);
    *((char **)t57) = t56;
    xsi_type_set_default_value(t54, t56, t46);
    t58 = (t51 + 64U);
    *((char **)t58) = t46;
    t59 = (t51 + 80U);
    *((unsigned int *)t59) = t17;
    t61 = (t60 + 0U);
    t62 = (t61 + 0U);
    *((int *)t62) = 3;
    t62 = (t61 + 4U);
    *((int *)t62) = 0;
    t62 = (t61 + 8U);
    *((int *)t62) = -1;
    t63 = (0 - 3);
    t53 = (t63 * -1);
    t53 = (t53 + 1);
    t62 = (t61 + 12U);
    *((unsigned int *)t62) = t53;
    t62 = (t5 + 604U);
    t64 = ((IEEE_P_2592010699) + 4024);
    t65 = (t62 + 88U);
    *((char **)t65) = t64;
    t67 = (t62 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, t60);
    t68 = (t62 + 64U);
    *((char **)t68) = t60;
    t69 = (t62 + 80U);
    *((unsigned int *)t69) = 4U;
    t70 = (t6 + 4U);
    *((char **)t70) = t2;
    t71 = (t6 + 12U);
    *((char **)t71) = t3;
    t72 = (t6 + 20U);
    *((char **)t72) = t4;
    t73 = (t11 + 12U);
    t53 = *((unsigned int *)t73);
    t53 = (t53 * 1U);
    t74 = xsi_get_transient_memory(t53);
    memset(t74, 0, t53);
    t75 = t74;
    memset(t75, (unsigned char)2, t53);
    t76 = (t15 + 56U);
    t77 = *((char **)t76);
    t76 = (t77 + 0);
    t78 = (t11 + 12U);
    t79 = *((unsigned int *)t78);
    t79 = (t79 * 1U);
    memcpy(t76, t74, t79);
    t7 = (t36 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB2:    t7 = (t36 + 56U);
    t12 = *((char **)t7);
    t80 = *((unsigned char *)t12);
    if (t80 != 0)
        goto LAB3;

LAB5:    t7 = (t15 + 56U);
    t12 = *((char **)t7);
    t7 = (t3 + 0);
    t14 = (t11 + 12U);
    t10 = *((unsigned int *)t14);
    t10 = (t10 * 1U);
    memcpy(t7, t12, t10);

LAB1:    return;
LAB3:    t7 = (t30 + 56U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    std_textio_read8(STD_TEXTIO, t1, t2, t7);
    t7 = (t30 + 56U);
    t12 = *((char **)t7);
    t80 = *((unsigned char *)t12);
    t7 = (char *)((nl0) + t80);
    goto **((char **)t7);

LAB4:;
LAB6:    t7 = (t36 + 56U);
    t12 = *((char **)t7);
    t80 = *((unsigned char *)t12);
    if (t80 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB7:    t14 = (t24 + 56U);
    t18 = *((char **)t14);
    t14 = (t18 + 0);
    *((int *)t14) = 0;
    goto LAB6;

LAB8:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 1;
    goto LAB6;

LAB9:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 2;
    goto LAB6;

LAB10:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 3;
    goto LAB6;

LAB11:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 4;
    goto LAB6;

LAB12:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 5;
    goto LAB6;

LAB13:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 6;
    goto LAB6;

LAB14:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 7;
    goto LAB6;

LAB15:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 8;
    goto LAB6;

LAB16:    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((int *)t7) = 9;
    goto LAB6;

LAB17:    t7 = (t36 + 56U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    *((unsigned char *)t7) = (unsigned char)0;
    goto LAB6;

LAB18:    t7 = (t15 + 56U);
    t14 = *((char **)t7);
    t7 = (t0 + 3560);
    t19 = (t82 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 0;
    t21 = (t19 + 4U);
    *((int *)t21) = 3;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t8 = (3 - 0);
    t10 = (t8 * 1);
    t10 = (t10 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t10;
    t21 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t81, t14, t11, t7, t82);
    t22 = (t51 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    t25 = (t81 + 12U);
    t10 = *((unsigned int *)t25);
    t17 = (1U * t10);
    memcpy(t22, t21, t17);
    t7 = (t24 + 56U);
    t12 = *((char **)t7);
    t8 = *((int *)t12);
    t7 = (t60 + 12U);
    t10 = *((unsigned int *)t7);
    t14 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t81, t8, ((t10)));
    t18 = (t62 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t21 = (t81 + 12U);
    t17 = *((unsigned int *)t21);
    t17 = (t17 * 1U);
    memcpy(t18, t14, t17);
    t7 = (t51 + 56U);
    t12 = *((char **)t7);
    t7 = (t46 + 0U);
    t8 = *((int *)t7);
    t14 = (t4 + 0U);
    t9 = *((int *)t14);
    t10 = (t8 - t9);
    t18 = (t46 + 4U);
    t13 = *((int *)t18);
    t19 = (t46 + 8U);
    t16 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(t8, t13, t16, t9, 0, -1);
    t17 = (t10 * 1U);
    t53 = (0 + t17);
    t21 = (t12 + t53);
    t22 = (t4 + 0U);
    t43 = *((int *)t22);
    t23 = (t82 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t43;
    t25 = (t23 + 4U);
    *((int *)t25) = 0;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t44 = (0 - t43);
    t79 = (t44 * -1);
    t79 = (t79 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t79;
    t25 = (t62 + 56U);
    t26 = *((char **)t25);
    t25 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t81, t21, t82, t26, t60);
    t28 = (t15 + 56U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    t31 = (t81 + 12U);
    t79 = *((unsigned int *)t31);
    t83 = (1U * t79);
    memcpy(t28, t25, t83);
    goto LAB19;

}


extern void archivos_p_0370104789_init()
{
	static char *se[] = {(void *)archivos_p_0370104789_sub_3917337735_1612594667,(void *)archivos_p_0370104789_sub_3478709790_1612594667,(void *)archivos_p_0370104789_sub_3935811274_1612594667,(void *)archivos_p_0370104789_sub_4008927481_1612594667,(void *)archivos_p_0370104789_sub_206672475_1612594667};
	xsi_register_didat("archivos_p_0370104789", "isim/TestIntensivo_isim_beh.exe.sim/archivos/p_0370104789.didat");
	xsi_register_subprogram_executes(se);
}
