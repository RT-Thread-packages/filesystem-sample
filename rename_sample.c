/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date             Author      Notes
 *
 */
/*
 * 程序清单：更改名称
 *
 * 程序会创建一个操作文件的函数并导出到msh命令列表
 * 在函数中调用 rename()函数
 * int rename(const char *oldpath, const char *newpath);
 * rename()会将参数oldpath 所指定的文件名称改为参数newpath
 * 所指的文件名称。若newpath 所指定的文件已经存在，则该文件将会被覆盖。
 *
*/
#include <rtthread.h>
#if RT_VER_NUM >= 0x40100
#include <fcntl.h> /* 当需要使用文件操作时，需要包含这个头文件 */
#else
#include <dfs_posix.h>
#endif /*RT_VER_NUM >= 0x40100*/

static void rename_sample(void)
{
    rt_kprintf("%s => %s ", "/text.txt", "/text1.txt");

    if (rename("/text.txt", "/text1.txt") < 0)
        rt_kprintf("[error!]\n");
    else
        rt_kprintf("[ok!]\n");
}
/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(rename_sample, rename sample);
