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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.25.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.25.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build

# Include any dependencies generated for this target.
include CMakeFiles/Section_7_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Section_7_main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Section_7_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Section_7_main.dir/flags.make

CMakeFiles/Section_7_main.dir/main.cpp.o: CMakeFiles/Section_7_main.dir/flags.make
CMakeFiles/Section_7_main.dir/main.cpp.o: /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src/main.cpp
CMakeFiles/Section_7_main.dir/main.cpp.o: CMakeFiles/Section_7_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Section_7_main.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Section_7_main.dir/main.cpp.o -MF CMakeFiles/Section_7_main.dir/main.cpp.o.d -o CMakeFiles/Section_7_main.dir/main.cpp.o -c /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src/main.cpp

CMakeFiles/Section_7_main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Section_7_main.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src/main.cpp > CMakeFiles/Section_7_main.dir/main.cpp.i

CMakeFiles/Section_7_main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Section_7_main.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src/main.cpp -o CMakeFiles/Section_7_main.dir/main.cpp.s

# Object files for target Section_7_main
Section_7_main_OBJECTS = \
"CMakeFiles/Section_7_main.dir/main.cpp.o"

# External object files for target Section_7_main
Section_7_main_EXTERNAL_OBJECTS =

Section_7_main: CMakeFiles/Section_7_main.dir/main.cpp.o
Section_7_main: CMakeFiles/Section_7_main.dir/build.make
Section_7_main: CMakeFiles/Section_7_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Section_7_main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Section_7_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Section_7_main.dir/build: Section_7_main
.PHONY : CMakeFiles/Section_7_main.dir/build

CMakeFiles/Section_7_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Section_7_main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Section_7_main.dir/clean

CMakeFiles/Section_7_main.dir/depend:
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/src /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Section_7/Challenge/build/CMakeFiles/Section_7_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Section_7_main.dir/depend
