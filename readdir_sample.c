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
 * 程序清单：读取目录
 *
 * 程序会创建一个操作文件的函数并导出到msh命令列表
 * 在函数中调用 readdir() 函数
 * struct dirent* readdir(DIR *d);
 * readdir()函数用来读取目录，参数d 为目录路径名。
 * 返回值为读到的目录项结构，如果返回值为RT_NULL，则表示已经读到目录尾；
 * 此外，每读取一次目录，目录流的指针位置将自动往后递推1 个位置。
*/
#include <rtthread.h>
#include <dfs_posix.h> /* 当需要使用文件操作时，需要包含这个头文件 */

static void readdir_sample(void)
{
    DIR *dirp;
    struct dirent *d;

    /* 打开/dir_test 目录*/
    dirp = opendir("/dir_test");
    if (dirp == RT_NULL)
    {
        rt_kprintf("open directory error!\n");
    }
    else
    {
        /* 读取目录*/
        while ((d = readdir(dirp)) != RT_NULL)
        {
            rt_kprintf("found %s\n", d->d_name);
        }

        /* 关闭目录 */
        closedir(dirp);
    }
}
/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(readdir_sample, readdir sample);
