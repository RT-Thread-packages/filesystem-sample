from building import *

src   = []
cwd   = GetCurrentDir()
include_path = [cwd]

# add filesystem samples.

if GetDepend('FILESYSTEM_SAMPLES_USING_READWRITE'):
    src += ['readwrite_sample.c']

if GetDepend('FILESYSTEM_SAMPLES_USING_STAT'):
    src += ['stat_sample.c']

if GetDepend('FILESYSTEM_SAMPLES_USING_RENAME'):
    src += ['rename_sample.c']

if GetDepend('FILESYSTEM_SAMPLES_USING_MKDIR'):
    src += ['mkdir_sample.c']

if GetDepend('FILESYSTEM_SAMPLES_USING_OPENDIR'):
    src += ['opendir_sample.c']

if GetDepend('FILESYSTEM_SAMPLES_USING_READDIR'):
    src += ['readdir_sample.c']

if GetDepend('FILESYSTEM_SAMPLES_USING_TELL_SEEK_DIR'):
    src += ['tell_seek_dir_sample.c']

group = DefineGroup('filesystem-samples', src, depend = ['PKG_USING_FILESYSTEM_SAMPLES'], CPPPATH = include_path)

Return('group')
