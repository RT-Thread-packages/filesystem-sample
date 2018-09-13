/* 
 * Copyright (c) 2006-2018, RT-Thread Development Team 
 * 
 * SPDX-License-Identifier: Apache-2.0 
 * 
 * Change Logs: 
 * Date             Author      Notes
 * 
 */
/*
 * 程序清单：创建目录
 *
 * 程序会创建一个操作文件的函数并导出到msh命令列表
 * 在函数中调用 mkdir() 函数
 * int mkdir(const char *path, mode_t mode);
 * mkdir()函数用来创建一个目录，参数path 为目录名，
 * 参数mode 在当前版本未启用，输入0x777 即可。
*/

#include <rtthread.h>
#include <dfs_posix.h> /* 当需要使用文件操作时，需要包含这个头文件 */

static void mkdir_sample(void)
{
    int ret;

    /* 创建目录*/
    ret = mkdir("/dir_test", 0x777);
    if (ret < 0)
    {
        /* 创建目录失败*/
        rt_kprintf("dir error!\n");
    }
    else
    {
        /* 创建目录成功*/
        rt_kprintf("mkdir ok!\n");
    }
}
/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(mkdir_sample, mkdir sample);

