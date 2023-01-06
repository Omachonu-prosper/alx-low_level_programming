#!/bin/bash

# Make object files from all c source files
for source_file in *.c
do
	gcc $source_file -c -o ${source_file%".c"}.o
done

# Add all object files to the static library
for object_file in *.o
do
	ar rc liball.a $object_file
done
