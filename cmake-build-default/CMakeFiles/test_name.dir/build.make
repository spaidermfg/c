# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_BINARY_DIR = /Users/mac/CLionProjects/CPrimePlus/cmake-build-default

# Include any dependencies generated for this target.
include CMakeFiles/test_name.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_name.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_name.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_name.dir/flags.make

CMakeFiles/test_name.dir/test_name.c.o: CMakeFiles/test_name.dir/flags.make
CMakeFiles/test_name.dir/test_name.c.o: /Users/mac/CLionProjects/CPrimePlus/test_name.c
CMakeFiles/test_name.dir/test_name.c.o: CMakeFiles/test_name.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/CLionProjects/CPrimePlus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_name.dir/test_name.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_name.dir/test_name.c.o -MF CMakeFiles/test_name.dir/test_name.c.o.d -o CMakeFiles/test_name.dir/test_name.c.o -c /Users/mac/CLionProjects/CPrimePlus/test_name.c

CMakeFiles/test_name.dir/test_name.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_name.dir/test_name.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mac/CLionProjects/CPrimePlus/test_name.c > CMakeFiles/test_name.dir/test_name.c.i

CMakeFiles/test_name.dir/test_name.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_name.dir/test_name.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mac/CLionProjects/CPrimePlus/test_name.c -o CMakeFiles/test_name.dir/test_name.c.s

CMakeFiles/test_name.dir/51/led.c.o: CMakeFiles/test_name.dir/flags.make
CMakeFiles/test_name.dir/51/led.c.o: /Users/mac/CLionProjects/CPrimePlus/51/led.c
CMakeFiles/test_name.dir/51/led.c.o: CMakeFiles/test_name.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/CLionProjects/CPrimePlus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_name.dir/51/led.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_name.dir/51/led.c.o -MF CMakeFiles/test_name.dir/51/led.c.o.d -o CMakeFiles/test_name.dir/51/led.c.o -c /Users/mac/CLionProjects/CPrimePlus/51/led.c

CMakeFiles/test_name.dir/51/led.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_name.dir/51/led.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mac/CLionProjects/CPrimePlus/51/led.c > CMakeFiles/test_name.dir/51/led.c.i

CMakeFiles/test_name.dir/51/led.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_name.dir/51/led.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mac/CLionProjects/CPrimePlus/51/led.c -o CMakeFiles/test_name.dir/51/led.c.s

# Object files for target test_name
test_name_OBJECTS = \
"CMakeFiles/test_name.dir/test_name.c.o" \
"CMakeFiles/test_name.dir/51/led.c.o"

# External object files for target test_name
test_name_EXTERNAL_OBJECTS =

test_name: CMakeFiles/test_name.dir/test_name.c.o
test_name: CMakeFiles/test_name.dir/51/led.c.o
test_name: CMakeFiles/test_name.dir/build.make
test_name: CMakeFiles/test_name.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/CLionProjects/CPrimePlus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_name"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_name.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_name.dir/build: test_name
.PHONY : CMakeFiles/test_name.dir/build

CMakeFiles/test_name.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_name.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_name.dir/clean

CMakeFiles/test_name.dir/depend:
	cd /Users/mac/CLionProjects/CPrimePlus/cmake-build-default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/CLionProjects/CPrimePlus /Users/mac/CLionProjects/CPrimePlus /Users/mac/CLionProjects/CPrimePlus/cmake-build-default /Users/mac/CLionProjects/CPrimePlus/cmake-build-default /Users/mac/CLionProjects/CPrimePlus/cmake-build-default/CMakeFiles/test_name.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_name.dir/depend

