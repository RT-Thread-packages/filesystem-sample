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
 * 代码清单：文件读写例子
 *
 * 这个例子演示了如何读写一个文件。
 */

#include <rtthread.h>
#if RT_VER_NUM >= 0x40100
#include <fcntl.h> /* 当需要使用文件操作时，需要包含这个头文件 */
#else
#include <dfs_posix.h>
#endif /*RT_VER_NUM >= 0x40100*/

static void readwrite_sample(void)
{
    int fd, size;
    char s[] = "RT-Thread Programmer!", buffer[80];

    rt_kprintf("Write string %s to test.txt.\n", s);

    /* 以创建和读写模式打开 /text.txt 文件，如果该文件不存在则创建该文件*/
    fd = open("/text.txt", O_WRONLY | O_CREAT);
    if (fd >= 0)
    {
        write(fd, s, sizeof(s));
        close(fd);
        rt_kprintf("Write done.\n");
    }

    /* 以只读模式打开 /text.txt 文件 */
    fd = open("/text.txt", O_RDONLY);
    if (fd >= 0)
    {
        size = read(fd, buffer, sizeof(buffer));
        close(fd);
        rt_kprintf("Read from file test.txt : %s \n", buffer);
        if (size < 0)
            return ;
    }
}
/* 导出到 msh 命令列表中 */
MSH_CMD_EXPORT(readwrite_sample, readwrite sample);
