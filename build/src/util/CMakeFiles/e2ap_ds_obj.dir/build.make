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
include src/util/CMakeFiles/e2ap_ds_obj.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.make

# Include the progress variables for this target.
include src/util/CMakeFiles/e2ap_ds_obj.dir/progress.make

# Include the compile flags for this target's objects.
include src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make

src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o: /home/jk/flexric/src/util/byte_array.c
src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o -MF CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o -c /home/jk/flexric/src/util/byte_array.c

src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/byte_array.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/byte_array.c > CMakeFiles/e2ap_ds_obj.dir/byte_array.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/byte_array.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/byte_array.c -o CMakeFiles/e2ap_ds_obj.dir/byte_array.c.s

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o: /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_arr.c
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o -MF CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o -c /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_arr.c

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_arr.c > CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_arr.c -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.s

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o: /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_ring.c
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o -MF CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o -c /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_ring.c

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_ring.c > CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/alg_ds/ds/seq_container/seq_ring.c -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.s

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o: /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_rb_tree.c
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o -MF CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o -c /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_rb_tree.c

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_rb_tree.c > CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_rb_tree.c -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.s

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o: /home/jk/flexric/src/util/alg_ds/ds/assoc_container/bimap.c
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o -MF CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o -c /home/jk/flexric/src/util/alg_ds/ds/assoc_container/bimap.c

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/alg_ds/ds/assoc_container/bimap.c > CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/alg_ds/ds/assoc_container/bimap.c -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.s

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o: /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_reg.c
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o -MF CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o -c /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_reg.c

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_reg.c > CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/alg_ds/ds/assoc_container/assoc_reg.c -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.s

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/flags.make
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o: /home/jk/flexric/src/util/alg_ds/ds/ts_queue/ts_queue.c
src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o: src/util/CMakeFiles/e2ap_ds_obj.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jk/flexric/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o -MF CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o.d -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o -c /home/jk/flexric/src/util/alg_ds/ds/ts_queue/ts_queue.c

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.i"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jk/flexric/src/util/alg_ds/ds/ts_queue/ts_queue.c > CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.i

src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.s"
	cd /home/jk/flexric/build/src/util && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jk/flexric/src/util/alg_ds/ds/ts_queue/ts_queue.c -o CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.s

e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/byte_array.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_arr.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/seq_container/seq_ring.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_rb_tree.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/bimap.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/assoc_container/assoc_reg.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/alg_ds/ds/ts_queue/ts_queue.c.o
e2ap_ds_obj: src/util/CMakeFiles/e2ap_ds_obj.dir/build.make
.PHONY : e2ap_ds_obj

# Rule to build all files generated by this target.
src/util/CMakeFiles/e2ap_ds_obj.dir/build: e2ap_ds_obj
.PHONY : src/util/CMakeFiles/e2ap_ds_obj.dir/build

src/util/CMakeFiles/e2ap_ds_obj.dir/clean:
	cd /home/jk/flexric/build/src/util && $(CMAKE_COMMAND) -P CMakeFiles/e2ap_ds_obj.dir/cmake_clean.cmake
.PHONY : src/util/CMakeFiles/e2ap_ds_obj.dir/clean

src/util/CMakeFiles/e2ap_ds_obj.dir/depend:
	cd /home/jk/flexric/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jk/flexric /home/jk/flexric/src/util /home/jk/flexric/build /home/jk/flexric/build/src/util /home/jk/flexric/build/src/util/CMakeFiles/e2ap_ds_obj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/util/CMakeFiles/e2ap_ds_obj.dir/depend

