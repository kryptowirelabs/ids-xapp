# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jk/flexric

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jk/flexric/build

# Include any dependencies generated for this target.
include src/util/CMakeFiles/e2_conf_obj.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/util/CMakeFiles/e2_conf_obj.dir/compiler_depend.make

# Include the progress variables for this target.
include src/util/CMakeFiles/e2_conf_obj.dir/progress.make

# Include the compile flags for this target's objects.
include src/util/CMakeFiles/e2_conf_obj.dir/flags.make

src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.o: src/util/CMakeFiles/e2_conf_obj.dir/flags.make
src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.o: /home/jk/flexric/src/util/conf_file.c
src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.o: src/util/CMakeFiles/e2_conf_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.o -MF CMakeFiles/e2_conf_obj.dir/conf_file.c.o.d -o CMakeFiles/e2_conf_obj.dir/conf_file.c.o -c /home/jk/flexric/src/util/conf_file.c

src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2_conf_obj.dir/conf_file.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/conf_file.c > CMakeFiles/e2_conf_obj.dir/conf_file.c.i

src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2_conf_obj.dir/conf_file.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/conf_file.c -o CMakeFiles/e2_conf_obj.dir/conf_file.c.s

e2_conf_obj: src/util/CMakeFiles/e2_conf_obj.dir/conf_file.c.o
e2_conf_obj: src/util/CMakeFiles/e2_conf_obj.dir/build.make
.PHONY : e2_conf_obj

# Rule to build all files generated by this target.
src/util/CMakeFiles/e2_conf_obj.dir/build: e2_conf_obj
.PHONY : src/util/CMakeFiles/e2_conf_obj.dir/build

src/util/CMakeFiles/e2_conf_obj.dir/clean:
	cd /home/jk/flexric/build/src/util && $(CMAKE_COMMAND) -P CMakeFiles/e2_conf_obj.dir/cmake_clean.cmake
.PHONY : src/util/CMakeFiles/e2_conf_obj.dir/clean

src/util/CMakeFiles/e2_conf_obj.dir/depend:
	cd /home/jk/flexric/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jk/flexric /home/jk/flexric/src/util /home/jk/flexric/build /home/jk/flexric/build/src/util /home/jk/flexric/build/src/util/CMakeFiles/e2_conf_obj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/util/CMakeFiles/e2_conf_obj.dir/depend

