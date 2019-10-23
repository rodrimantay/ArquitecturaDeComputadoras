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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003885379568_1164157689_init();
    work_m_00000000003756298227_1573349579_init();
    work_m_00000000000235947551_1376674007_init();
    work_m_00000000003525750583_2885315853_init();
    work_m_00000000002002011171_3865191691_init();
    work_m_00000000002206679891_2380458251_init();
    work_m_00000000001572479141_2528794150_init();
    work_m_00000000001572479141_0866297629_init();
    work_m_00000000001572479141_1817558700_init();
    work_m_00000000001572479141_3232891280_init();
    work_m_00000000001572479141_2456658499_init();
    work_m_00000000001572479141_3857342560_init();
    work_m_00000000001572479141_2606439645_init();
    work_m_00000000001572479141_2328264065_init();
    work_m_00000000000511043909_0886308060_init();
    work_m_00000000002708011338_0891058111_init();
    work_m_00000000002926521801_3686289037_init();
    work_m_00000000001444354767_3010026701_init();
    work_m_00000000003861587943_2714912999_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003861587943_2714912999");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
