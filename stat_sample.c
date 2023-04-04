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
 * 程序清单：取得状态
 *
 * 程序会创建一个操作文件的函数并导出到msh命令列表
 * 在函数中调用 stat() 函数
 * int stat(const char *file_name, struct stat *buf);
 * stat()函数用来将参数file_name 所指向的文件状态，
 * 复制到buf 指针所指的结构中(struct stat)。
*/
#include <rtthread.h>
/* 当需要使用文件操作时，需要包含下面两个头文件 */
#include <unistd.h>
#include <fcntl.h>

static void stat_sample(void)
{
    int ret;
    struct stat buf;
    ret = stat("/text.txt", &buf);
    if (ret == 0)
        rt_kprintf("text.txt file size = %d\n", buf.st_size);
    else
        rt_kprintf("text.txt file not fonud\n");
}
/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(stat_sample, show text.txt stat sample);
