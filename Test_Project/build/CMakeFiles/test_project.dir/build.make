# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brian/projects/Test_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brian/projects/Test_Project/build

# Include any dependencies generated for this target.
include CMakeFiles/test_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_project.dir/flags.make

CMakeFiles/test_project.dir/main.cpp.o: CMakeFiles/test_project.dir/flags.make
CMakeFiles/test_project.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/brian/projects/Test_Project/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_project.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_project.dir/main.cpp.o -c /home/brian/projects/Test_Project/main.cpp

CMakeFiles/test_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_project.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/brian/projects/Test_Project/main.cpp > CMakeFiles/test_project.dir/main.cpp.i

CMakeFiles/test_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_project.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/brian/projects/Test_Project/main.cpp -o CMakeFiles/test_project.dir/main.cpp.s

CMakeFiles/test_project.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/test_project.dir/main.cpp.o.requires

CMakeFiles/test_project.dir/main.cpp.o.provides: CMakeFiles/test_project.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_project.dir/build.make CMakeFiles/test_project.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/test_project.dir/main.cpp.o.provides

CMakeFiles/test_project.dir/main.cpp.o.provides.build: CMakeFiles/test_project.dir/main.cpp.o

# Object files for target test_project
test_project_OBJECTS = \
"CMakeFiles/test_project.dir/main.cpp.o"

# External object files for target test_project
test_project_EXTERNAL_OBJECTS =

test_project: CMakeFiles/test_project.dir/main.cpp.o
test_project: CMakeFiles/test_project.dir/build.make
test_project: CMakeFiles/test_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable test_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_project.dir/build: test_project
.PHONY : CMakeFiles/test_project.dir/build

CMakeFiles/test_project.dir/requires: CMakeFiles/test_project.dir/main.cpp.o.requires
.PHONY : CMakeFiles/test_project.dir/requires

CMakeFiles/test_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_project.dir/clean

CMakeFiles/test_project.dir/depend:
	cd /home/brian/projects/Test_Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brian/projects/Test_Project /home/brian/projects/Test_Project /home/brian/projects/Test_Project/build /home/brian/projects/Test_Project/build /home/brian/projects/Test_Project/build/CMakeFiles/test_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_project.dir/depend

