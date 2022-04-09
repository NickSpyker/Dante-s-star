#!/usr/bin/env ruby

system "make re"

system "./generator/generator 151 41 > maze.txt"

system "clear && ./solver/solver maze.txt"

buffer = `make fclean > buffer_log.txt`

system "rm -rf maze.txt  buffer_log.txt"
