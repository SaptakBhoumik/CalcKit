project('CalcKit', 'cpp', version: '1.0.0')

include = include_directories('include/')

add_project_arguments('-std=c++2a', language: 'cpp')

src=[
    'src/derivative.cpp',
    'src/dual.cpp',
    'src/integral.cpp',
    'src/limit.cpp',
]
install_headers(
                'include/constant.hpp',
                'include/derivative.hpp',
                'include/dual.hpp',
                'include/integral.hpp',
                'include/limit.hpp',
                subdir : 'CalcKit')

lib=static_library('CalcKit', src, 
        include_directories: include,install : true)

exe_src=[
    'dev.cpp',
]
executable(
    'dev.elf',
    sources: exe_src, 
    include_directories: include,
    link_with: [lib]
)



