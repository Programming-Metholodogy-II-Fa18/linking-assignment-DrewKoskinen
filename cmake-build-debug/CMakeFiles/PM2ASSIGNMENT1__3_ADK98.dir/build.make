# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/flags.make

CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.obj: CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/flags.make
CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PM2ASSIGNMENT1__3_ADK98.dir\main.cpp.obj -c "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\main.cpp"

CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\main.cpp" > CMakeFiles\PM2ASSIGNMENT1__3_ADK98.dir\main.cpp.i

CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\main.cpp" -o CMakeFiles\PM2ASSIGNMENT1__3_ADK98.dir\main.cpp.s

# Object files for target PM2ASSIGNMENT1__3_ADK98
PM2ASSIGNMENT1__3_ADK98_OBJECTS = \
"CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.obj"

# External object files for target PM2ASSIGNMENT1__3_ADK98
PM2ASSIGNMENT1__3_ADK98_EXTERNAL_OBJECTS =

PM2ASSIGNMENT1__3_ADK98.exe: CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/main.cpp.obj
PM2ASSIGNMENT1__3_ADK98.exe: CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/build.make
PM2ASSIGNMENT1__3_ADK98.exe: CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/linklibs.rsp
PM2ASSIGNMENT1__3_ADK98.exe: CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/objects1.rsp
PM2ASSIGNMENT1__3_ADK98.exe: CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PM2ASSIGNMENT1__3_ADK98.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PM2ASSIGNMENT1__3_ADK98.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/build: PM2ASSIGNMENT1__3_ADK98.exe

.PHONY : CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/build

CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PM2ASSIGNMENT1__3_ADK98.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/clean

CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98" "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98" "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\cmake-build-debug" "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\cmake-build-debug" "C:\Users\drewk\CLionProjects\PM2ASSIGNMENT1(#3)ADK98\cmake-build-debug\CMakeFiles\PM2ASSIGNMENT1__3_ADK98.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/PM2ASSIGNMENT1__3_ADK98.dir/depend

