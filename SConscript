from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()
group = []
CPPPATH = []

# add filesystem samples.
if GetDepend('FILESYSTEM_SAMPLES_USING_OPENFILE'):
    src += Glob('openfile/*.c')
    CPPPATH += [cwd + '/openfile']

if GetDepend('FILESYSTEM_SAMPLES_USING_READWRITE'):
    src += Glob('readwrite/*.c')
    CPPPATH += [cwd + '/readwrite']

if GetDepend('FILESYSTEM_SAMPLES_USING_STAT'):
    src += Glob('stat/*.c')
    CPPPATH += [cwd + '/stat']

if GetDepend('FILESYSTEM_SAMPLES_USING_RENAME'):
    src += Glob('rename/*.c')
    CPPPATH += [cwd + '/rename']

if GetDepend('FILESYSTEM_SAMPLES_USING_MKDIR'):
    src += Glob('mkdir/*.c')
    CPPPATH += [cwd + '/mkdir']

if GetDepend('FILESYSTEM_SAMPLES_USING_OPENDIR'):
    src += Glob('opendir/*.c')
    CPPPATH += [cwd + '/opendir']

if GetDepend('FILESYSTEM_SAMPLES_USING_READDIR'):
    src += Glob('readdir/*.c')
    CPPPATH += [cwd + '/readdir']

if GetDepend('FILESYSTEM_SAMPLES_USING_TELL_SEEK_DIR'):
    src += Glob('tell_seek_dir/*.c')
    CPPPATH += [cwd + '/tell_seek_dir']

group = DefineGroup('filesystem-samples', src, depend = ['PKG_USING_FILESYSTEM_SAMPLES'], CPPPATH = CPPPATH)

Return('group')
