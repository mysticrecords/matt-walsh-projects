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
CMAKE_SOURCE_DIR = /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build

# Include any dependencies generated for this target.
include bin/CMakeFiles/bootstrap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include bin/CMakeFiles/bootstrap.dir/compiler_depend.make

# Include the progress variables for this target.
include bin/CMakeFiles/bootstrap.dir/progress.make

# Include the compile flags for this target's objects.
include bin/CMakeFiles/bootstrap.dir/flags.make

bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.o: bin/CMakeFiles/bootstrap.dir/flags.make
bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.o: /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/src/bootstrap.cpp
bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.o: bin/CMakeFiles/bootstrap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.o"
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.o -MF CMakeFiles/bootstrap.dir/bootstrap.cpp.o.d -o CMakeFiles/bootstrap.dir/bootstrap.cpp.o -c /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/src/bootstrap.cpp

bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bootstrap.dir/bootstrap.cpp.i"
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/src/bootstrap.cpp > CMakeFiles/bootstrap.dir/bootstrap.cpp.i

bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bootstrap.dir/bootstrap.cpp.s"
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/src/bootstrap.cpp -o CMakeFiles/bootstrap.dir/bootstrap.cpp.s

# Object files for target bootstrap
bootstrap_OBJECTS = \
"CMakeFiles/bootstrap.dir/bootstrap.cpp.o"

# External object files for target bootstrap
bootstrap_EXTERNAL_OBJECTS =

bin/bootstrap: bin/CMakeFiles/bootstrap.dir/bootstrap.cpp.o
bin/bootstrap: bin/CMakeFiles/bootstrap.dir/build.make
bin/bootstrap: bin/libsut.a
bin/bootstrap: bin/CMakeFiles/bootstrap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bootstrap"
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bootstrap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/CMakeFiles/bootstrap.dir/build: bin/bootstrap
.PHONY : bin/CMakeFiles/bootstrap.dir/build

bin/CMakeFiles/bootstrap.dir/clean:
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin && $(CMAKE_COMMAND) -P CMakeFiles/bootstrap.dir/cmake_clean.cmake
.PHONY : bin/CMakeFiles/bootstrap.dir/clean

bin/CMakeFiles/bootstrap.dir/depend:
	cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/src /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example/build/bin/CMakeFiles/bootstrap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/CMakeFiles/bootstrap.dir/depend
