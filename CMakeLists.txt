cmake_minimum_required(VERSION 3.13)
project(curso_C C)

set(CMAKE_C_STANDARD 99)

add_executable(curso_C main.c video_1.c video_2.c video_3.c video_4.c)
add_executable(main.c main.c)

add_executable(video_1.c video_1.c)
add_executable(video_2.c video_2.c)
add_executable(video_3.c video_3.c)
add_executable(video_4.c video_4.c)