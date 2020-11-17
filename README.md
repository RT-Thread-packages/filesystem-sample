# filesystem samples package

[中文页](README_ZH.md) | English

## 1. Introduction

This package contains relevant sample code used by the file system.

### 1.1 Example description

| File | Description |
| ------------- | ---------------------- |
| readwrite_sample.c | File read and write |
| rename_sample.c | Change name |
| stat_sample.c | Get status |
| mkdir_sample.c | Create directory |
| opendir_sample.c | Open directory |
| readdir_sample.c | Read directory |
| tell_seek_dir_sample.c | Save and set read directory location |

### 1.2 License

The filesystem samples package complies with the Apache license v2.0, see the `LICENSE` file for details.

### 1.3 Dependency

To use the filesystem samples package, you need to enable file system related functions in the menuconfig configuration option of RT-Thread. The specific path is as follows:

```
RT-Thread Components
    device virtual file system --->
```

## 2. How to open the filesystem samples package

To use the filesystem samples package, you need to select it in the package manager of RT-Thread. The specific path is as follows:

```
RT-Thread online packages
    miscellaneous packages --->
        samples: kernel and components samples --->
            a filesystem_samples package for rt-thread --->
```

Then let RT-Thread's package manager automatically update, or use the `pkgs --update` command to update the package to the BSP.

## 3. Use filesystem samples package

After opening the filesystem samples package, when performing BSP compilation, the source code of the selected package will be added to the BSP project for compilation.

**API list**

| API | Function |
| -------------- | ------------------------ |
| int open(const char *pathname, int oflag, int mode); | open file |
| int close(int fd); | close file |
| size_t read(int fd, void *buf, size_t count); | Read data |
| size_t write(int fd, const void *buf, size_t count); | write data |
| int rename(const char *oldpath, const char *newpath); | change name |
| int stat(const char *file_name, struct stat *buf); | Get status |
| int mkdir(const char *path, mode_t mode); | Create directory |
| DIR* opendir(const char* name); | Open directory |
| struct dirent* readdir(DIR *d); | Read directory |
| off_t telldir(DIR *d); | Get the reading position of the directory stream |
| void seekdir(DIR *d, off_t offset); | Set the position of the read directory |
| void rewinddir(DIR *d); | Reset the position of the read directory to the beginning |
| int closedir(DIR* d); | close directory |
| int rmdir(const char *pathname); | delete directory |
| int mkfs(const char * fs_name, const char * device) | format file system |

## 4. Matters needing attention

Nothing.

## 5. Contact & Thanks

* Maintenance: [misonyo](https://github.com/misonyo)
* Homepage: https://github.com/RT-Thread-packages/filesystem-sample
