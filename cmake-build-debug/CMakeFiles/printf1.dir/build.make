# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/CLionProjects/CPrimePlus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/CLionProjects/CPrimePlus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/printf1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/printf1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/printf1.dir/flags.make

CMakeFiles/printf1.dir/printf1.c.o: CMakeFiles/printf1.dir/flags.make
CMakeFiles/printf1.dir/printf1.c.o: ../printf1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/CLionProjects/CPrimePlus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/printf1.dir/printf1.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/printf1.dir/printf1.c.o -c /Users/mac/CLionProjects/CPrimePlus/printf1.c

CMakeFiles/printf1.dir/printf1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/printf1.dir/printf1.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mac/CLionProjects/CPrimePlus/printf1.c > CMakeFiles/printf1.dir/printf1.c.i

CMakeFiles/printf1.dir/printf1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/printf1.dir/printf1.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mac/CLionProjects/CPrimePlus/printf1.c -o CMakeFiles/printf1.dir/printf1.c.s

# Object files for target printf1
printf1_OBJECTS = \
"CMakeFiles/printf1.dir/printf1.c.o"

# External object files for target printf1
printf1_EXTERNAL_OBJECTS =

printf1: CMakeFiles/printf1.dir/printf1.c.o
printf1: CMakeFiles/printf1.dir/build.make
printf1: CMakeFiles/printf1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/CLionProjects/CPrimePlus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable printf1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/printf1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/printf1.dir/build: printf1
.PHONY : CMakeFiles/printf1.dir/build

CMakeFiles/printf1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/printf1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/printf1.dir/clean

CMakeFiles/printf1.dir/depend:
	cd /Users/mac/CLionProjects/CPrimePlus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/CLionProjects/CPrimePlus /Users/mac/CLionProjects/CPrimePlus /Users/mac/CLionProjects/CPrimePlus/cmake-build-debug /Users/mac/CLionProjects/CPrimePlus/cmake-build-debug /Users/mac/CLionProjects/CPrimePlus/cmake-build-debug/CMakeFiles/printf1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/printf1.dir/depend

