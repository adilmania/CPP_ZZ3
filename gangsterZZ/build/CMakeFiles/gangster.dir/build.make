# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/local/mac-dev-env/cmake-3.12.3/bin/cmake

# The command to remove a file.
RM = /usr/local/mac-dev-env/cmake-3.12.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/adil/Dev/CPP_ZZ3/gangsterZZ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/adil/Dev/CPP_ZZ3/gangsterZZ/build

# Include any dependencies generated for this target.
include CMakeFiles/gangster.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gangster.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gangster.dir/flags.make

CMakeFiles/gangster.dir/src/main.cpp.o: CMakeFiles/gangster.dir/flags.make
CMakeFiles/gangster.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adil/Dev/CPP_ZZ3/gangsterZZ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gangster.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gangster.dir/src/main.cpp.o -c /Users/adil/Dev/CPP_ZZ3/gangsterZZ/src/main.cpp

CMakeFiles/gangster.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gangster.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adil/Dev/CPP_ZZ3/gangsterZZ/src/main.cpp > CMakeFiles/gangster.dir/src/main.cpp.i

CMakeFiles/gangster.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gangster.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adil/Dev/CPP_ZZ3/gangsterZZ/src/main.cpp -o CMakeFiles/gangster.dir/src/main.cpp.s

CMakeFiles/gangster.dir/src/gangster.cpp.o: CMakeFiles/gangster.dir/flags.make
CMakeFiles/gangster.dir/src/gangster.cpp.o: ../src/gangster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adil/Dev/CPP_ZZ3/gangsterZZ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gangster.dir/src/gangster.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gangster.dir/src/gangster.cpp.o -c /Users/adil/Dev/CPP_ZZ3/gangsterZZ/src/gangster.cpp

CMakeFiles/gangster.dir/src/gangster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gangster.dir/src/gangster.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adil/Dev/CPP_ZZ3/gangsterZZ/src/gangster.cpp > CMakeFiles/gangster.dir/src/gangster.cpp.i

CMakeFiles/gangster.dir/src/gangster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gangster.dir/src/gangster.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adil/Dev/CPP_ZZ3/gangsterZZ/src/gangster.cpp -o CMakeFiles/gangster.dir/src/gangster.cpp.s

# Object files for target gangster
gangster_OBJECTS = \
"CMakeFiles/gangster.dir/src/main.cpp.o" \
"CMakeFiles/gangster.dir/src/gangster.cpp.o"

# External object files for target gangster
gangster_EXTERNAL_OBJECTS =

gangster: CMakeFiles/gangster.dir/src/main.cpp.o
gangster: CMakeFiles/gangster.dir/src/gangster.cpp.o
gangster: CMakeFiles/gangster.dir/build.make
gangster: CMakeFiles/gangster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/adil/Dev/CPP_ZZ3/gangsterZZ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable gangster"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gangster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gangster.dir/build: gangster

.PHONY : CMakeFiles/gangster.dir/build

CMakeFiles/gangster.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gangster.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gangster.dir/clean

CMakeFiles/gangster.dir/depend:
	cd /Users/adil/Dev/CPP_ZZ3/gangsterZZ/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/adil/Dev/CPP_ZZ3/gangsterZZ /Users/adil/Dev/CPP_ZZ3/gangsterZZ /Users/adil/Dev/CPP_ZZ3/gangsterZZ/build /Users/adil/Dev/CPP_ZZ3/gangsterZZ/build /Users/adil/Dev/CPP_ZZ3/gangsterZZ/build/CMakeFiles/gangster.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gangster.dir/depend

