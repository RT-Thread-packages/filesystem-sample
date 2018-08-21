from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()
group = []
CPPPATH = []

# add filesystem samples.
if GetDepend('FILESYSTEM_SAMPLES_USING_OPENFILE'):
    src += ['openfile/openfile.c']
    CPPPATH += [cwd + '/openfile']

if GetDepend('FILESYSTEM_SAMPLES_USING_READWRITE'):
    src += ['readwrite/readwrite.c']
    CPPPATH += [cwd + '/readwrite']

if GetDepend('FILESYSTEM_SAMPLES_USING_STAT'):
    src += ['stat/stat.c']
    CPPPATH += [cwd + '/stat']

if GetDepend('FILESYSTEM_SAMPLES_USING_RENAME'):
    src += ['rename/rename.c']
    CPPPATH += [cwd + '/rename']

if GetDepend('FILESYSTEM_SAMPLES_USING_MKDIR'):
    src += ['mkdir/mkdir.c']
    CPPPATH += [cwd + '/mkdir']

if GetDepend('FILESYSTEM_SAMPLES_USING_OPENDIR'):
    src += ['opendir/opendir.c']
    CPPPATH += [cwd + '/opendir']

if GetDepend('FILESYSTEM_SAMPLES_USING_READDIR'):
    src += ['readdir/readdir.c']
    CPPPATH += [cwd + '/readdir']

if GetDepend('FILESYSTEM_SAMPLES_USING_TELL_SEEK_DIR'):
    src += ['tell_seek_dir/tell_seek_dir.c']
    CPPPATH += [cwd + '/tell_seek_dir']

group = DefineGroup('filesystem-samples', src, depend = ['PKG_USING_FILESYSTEM_SAMPLES'], CPPPATH = CPPPATH)

Return('group')
