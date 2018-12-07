# filesystem samples package

## 1、介绍

这个软件包包含了文件系统使用的相关示例代码。

### 1.1 例程说明

| 文件          | 说明                   |
| ------------- | ---------------------- |
| readwrite_sample.c     | 文件读写               |
| rename_sample.c        | 更改名称               |
| stat_sample.c          | 取得状态               |
| mkdir_sample.c         | 创建目录               |
| opendir_sample.c       | 打开目录               |
| readdir_sample.c       | 读取目录               |
| tell_seek_dir_sample.c | 保存与设置读取目录位置 |

### 1.2 许可证

filesystem samples package 遵循 Apache license v2.0 许可，详见 `LICENSE` 文件。

### 1.3 依赖

使用 filesystem samples package 需要在 RT-Thread 的 menuconfig 配置选项中使能文件系统相关功能，具体路径如下：

```
RT-Thread Components
    device virtual file system --->

```

## 2、如何打开 filesystem samples package

使用 filesystem samples package 需要在 RT-Thread 的包管理器中选择它，具体路径如下：

```
RT-Thread online packages
    miscellaneous packages --->
        samples: kernel and components samples --->
            a filesystem_samples package for rt-thread --->

```

然后让 RT-Thread 的包管理器自动更新，或者使用 `pkgs --update` 命令更新包到 BSP 中。

## 3、使用 filesystem samples package

在打开 filesystem samples package 后，当进行 BSP 编译时，选择的软件包相关源代码会被加入到 BSP 工程中进行编译。

**API 列表**

| API        | 功能                     |
| -------------- | ------------------------ |
| int open(const char *pathname, int oflag, int mode);  | 打开文件                 |
| int close(int fd);                                    | 关闭文件                 |
| size_t read(int fd, void *buf, size_t count);         | 读取数据                 |
| size_t write(int fd, const void *buf, size_t count);  | 写入数据                 |
| int rename(const char *oldpath, const char *newpath); | 更改名称                 |
| int stat(const char *file_name, struct stat *buf);    | 取得状态                 |
| int mkdir(const char *path, mode_t mode);             | 创建目录                 |
| DIR* opendir(const char* name);                       | 打开目录                 |
| struct dirent* readdir(DIR *d);                       | 读取目录                 |
| off_t telldir(DIR *d);                                | 取得目录流的读取位置     |
| void seekdir(DIR *d, off_t offset);                   | 设置读取目录的位置       |
| void rewinddir(DIR *d);                               | 重设读取目录的位置到开头 |
| int closedir(DIR* d);                                 | 关闭目录                 |
| int rmdir(const char *pathname);                      | 删除目录                 |
| int mkfs(const char * fs_name, const char * device)   | 格式化文件系统           |

## 4、注意事项

暂无。

## 5、联系方式 & 感谢

* 维护：[misonyo](https://github.com/misonyo)
* 主页：https://github.com/RT-Thread-packages/filesystem-sample
