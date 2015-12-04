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
static const char *ng0 = "C:/FPGA/ProyectoFloat/AluFloat/SimuIntensiva.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *ARCHIVOS_P_0370104789;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

void archivos_p_0370104789_sub_206672475_1612594667(char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3702196107_2679687539_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 5168);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 5168);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 5056);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3702196107_2679687539_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    t2 = (t0 + 3336U);
    t3 = std_textio_endfile(t2);
    t4 = (!(t3));
    if (t4 != 0)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(75, ng0);

LAB10:    t5 = (t0 + 5072);
    *((int *)t5) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:;
LAB8:    t9 = (t0 + 5072);
    *((int *)t9) = 0;
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4296);
    t5 = (t0 + 3336U);
    t7 = (t0 + 3512U);
    std_textio_readline(STD_TEXTIO, t2, t5, t7);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4296);
    t5 = (t0 + 3512U);
    t7 = (t0 + 2768U);
    t9 = *((char **)t7);
    t7 = (t0 + 8328U);
    archivos_p_0370104789_sub_206672475_1612594667(ARCHIVOS_P_0370104789, t2, t5, t9, t7);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4296);
    t5 = (t0 + 3512U);
    t7 = (t0 + 2888U);
    t9 = *((char **)t7);
    t7 = (t0 + 8344U);
    archivos_p_0370104789_sub_206672475_1612594667(ARCHIVOS_P_0370104789, t2, t5, t9, t7);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4296);
    t5 = (t0 + 3512U);
    t7 = (t0 + 3008U);
    t9 = *((char **)t7);
    t7 = (t0 + 8360U);
    archivos_p_0370104789_sub_206672475_1612594667(ARCHIVOS_P_0370104789, t2, t5, t9, t7);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2768U);
    t5 = *((char **)t2);
    t2 = (t0 + 5232);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2888U);
    t5 = *((char **)t2);
    t2 = (t0 + 5296);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3008U);
    t5 = *((char **)t2);
    t2 = (t0 + 5360);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t5, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    t7 = (t0 + 1152U);
    t8 = xsi_signal_has_event(t7);
    if (t8 == 1)
        goto LAB12;

LAB13:    t6 = (unsigned char)0;

LAB14:    if (t6 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t6 = t12;
    goto LAB14;

}

static void work_a_3702196107_2679687539_p_2(char *t0)
{
    char t19[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;

LAB0:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5088);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t4 = (t0 + 8296U);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t9 = (t0 + 8312U);
    t11 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t8, t4, t10, t9);
    if (t11 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(95, ng0);
    t12 = (t0 + 5424);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t18 = (t17 + 1);
    t2 = (t0 + 5488);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t18;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 8296U);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t5 = (t0 + 8312U);
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t19, t4, t2, t8, t5);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t9, t19);
    t10 = (t0 + 5552);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t17;
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

}


extern void work_a_3702196107_2679687539_init()
{
	static char *pe[] = {(void *)work_a_3702196107_2679687539_p_0,(void *)work_a_3702196107_2679687539_p_1,(void *)work_a_3702196107_2679687539_p_2};
	xsi_register_didat("work_a_3702196107_2679687539", "isim/TestIntensivo_isim_beh.exe.sim/work/a_3702196107_2679687539.didat");
	xsi_register_executes(pe);
}
