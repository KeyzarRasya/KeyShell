# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/keyzarrasya/Documents/Programming/c/shell

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keyzarrasya/Documents/Programming/c/shell/build

# Utility rule file for build_shell.

# Include any custom commands dependencies for this target.
include CMakeFiles/build_shell.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/build_shell.dir/progress.make

CMakeFiles/build_shell: shell

shell: /home/keyzarrasya/Documents/Programming/c/shell/src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/keyzarrasya/Documents/Programming/c/shell/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building KeyShell"
	gcc -o shell ../src/main.c ../src/includes/shell.c -g

build_shell: CMakeFiles/build_shell
build_shell: shell
build_shell: CMakeFiles/build_shell.dir/build.make
.PHONY : build_shell

# Rule to build all files generated by this target.
CMakeFiles/build_shell.dir/build: build_shell
.PHONY : CMakeFiles/build_shell.dir/build

CMakeFiles/build_shell.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/build_shell.dir/cmake_clean.cmake
.PHONY : CMakeFiles/build_shell.dir/clean

CMakeFiles/build_shell.dir/depend:
	cd /home/keyzarrasya/Documents/Programming/c/shell/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keyzarrasya/Documents/Programming/c/shell /home/keyzarrasya/Documents/Programming/c/shell /home/keyzarrasya/Documents/Programming/c/shell/build /home/keyzarrasya/Documents/Programming/c/shell/build /home/keyzarrasya/Documents/Programming/c/shell/build/CMakeFiles/build_shell.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/build_shell.dir/depend

