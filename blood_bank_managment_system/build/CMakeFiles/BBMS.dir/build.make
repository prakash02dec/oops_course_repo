# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\praka\Desktop\blood_bank_managment_system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\praka\Desktop\blood_bank_managment_system\build

# Include any dependencies generated for this target.
include CMakeFiles/BBMS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BBMS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BBMS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BBMS.dir/flags.make

CMakeFiles/BBMS.dir/main.cpp.obj: CMakeFiles/BBMS.dir/flags.make
CMakeFiles/BBMS.dir/main.cpp.obj: ../main.cpp
CMakeFiles/BBMS.dir/main.cpp.obj: CMakeFiles/BBMS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\praka\Desktop\blood_bank_managment_system\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BBMS.dir/main.cpp.obj"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BBMS.dir/main.cpp.obj -MF CMakeFiles\BBMS.dir\main.cpp.obj.d -o CMakeFiles\BBMS.dir\main.cpp.obj -c C:\Users\praka\Desktop\blood_bank_managment_system\main.cpp

CMakeFiles/BBMS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BBMS.dir/main.cpp.i"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\praka\Desktop\blood_bank_managment_system\main.cpp > CMakeFiles\BBMS.dir\main.cpp.i

CMakeFiles/BBMS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BBMS.dir/main.cpp.s"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\praka\Desktop\blood_bank_managment_system\main.cpp -o CMakeFiles\BBMS.dir\main.cpp.s

CMakeFiles/BBMS.dir/admin.cpp.obj: CMakeFiles/BBMS.dir/flags.make
CMakeFiles/BBMS.dir/admin.cpp.obj: ../admin.cpp
CMakeFiles/BBMS.dir/admin.cpp.obj: CMakeFiles/BBMS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\praka\Desktop\blood_bank_managment_system\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BBMS.dir/admin.cpp.obj"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BBMS.dir/admin.cpp.obj -MF CMakeFiles\BBMS.dir\admin.cpp.obj.d -o CMakeFiles\BBMS.dir\admin.cpp.obj -c C:\Users\praka\Desktop\blood_bank_managment_system\admin.cpp

CMakeFiles/BBMS.dir/admin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BBMS.dir/admin.cpp.i"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\praka\Desktop\blood_bank_managment_system\admin.cpp > CMakeFiles\BBMS.dir\admin.cpp.i

CMakeFiles/BBMS.dir/admin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BBMS.dir/admin.cpp.s"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\praka\Desktop\blood_bank_managment_system\admin.cpp -o CMakeFiles\BBMS.dir\admin.cpp.s

CMakeFiles/BBMS.dir/hospital.cpp.obj: CMakeFiles/BBMS.dir/flags.make
CMakeFiles/BBMS.dir/hospital.cpp.obj: ../hospital.cpp
CMakeFiles/BBMS.dir/hospital.cpp.obj: CMakeFiles/BBMS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\praka\Desktop\blood_bank_managment_system\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BBMS.dir/hospital.cpp.obj"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BBMS.dir/hospital.cpp.obj -MF CMakeFiles\BBMS.dir\hospital.cpp.obj.d -o CMakeFiles\BBMS.dir\hospital.cpp.obj -c C:\Users\praka\Desktop\blood_bank_managment_system\hospital.cpp

CMakeFiles/BBMS.dir/hospital.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BBMS.dir/hospital.cpp.i"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\praka\Desktop\blood_bank_managment_system\hospital.cpp > CMakeFiles\BBMS.dir\hospital.cpp.i

CMakeFiles/BBMS.dir/hospital.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BBMS.dir/hospital.cpp.s"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\praka\Desktop\blood_bank_managment_system\hospital.cpp -o CMakeFiles\BBMS.dir\hospital.cpp.s

CMakeFiles/BBMS.dir/user.cpp.obj: CMakeFiles/BBMS.dir/flags.make
CMakeFiles/BBMS.dir/user.cpp.obj: ../user.cpp
CMakeFiles/BBMS.dir/user.cpp.obj: CMakeFiles/BBMS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\praka\Desktop\blood_bank_managment_system\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/BBMS.dir/user.cpp.obj"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BBMS.dir/user.cpp.obj -MF CMakeFiles\BBMS.dir\user.cpp.obj.d -o CMakeFiles\BBMS.dir\user.cpp.obj -c C:\Users\praka\Desktop\blood_bank_managment_system\user.cpp

CMakeFiles/BBMS.dir/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BBMS.dir/user.cpp.i"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\praka\Desktop\blood_bank_managment_system\user.cpp > CMakeFiles\BBMS.dir\user.cpp.i

CMakeFiles/BBMS.dir/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BBMS.dir/user.cpp.s"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\praka\Desktop\blood_bank_managment_system\user.cpp -o CMakeFiles\BBMS.dir\user.cpp.s

# Object files for target BBMS
BBMS_OBJECTS = \
"CMakeFiles/BBMS.dir/main.cpp.obj" \
"CMakeFiles/BBMS.dir/admin.cpp.obj" \
"CMakeFiles/BBMS.dir/hospital.cpp.obj" \
"CMakeFiles/BBMS.dir/user.cpp.obj"

# External object files for target BBMS
BBMS_EXTERNAL_OBJECTS =

BBMS.exe: CMakeFiles/BBMS.dir/main.cpp.obj
BBMS.exe: CMakeFiles/BBMS.dir/admin.cpp.obj
BBMS.exe: CMakeFiles/BBMS.dir/hospital.cpp.obj
BBMS.exe: CMakeFiles/BBMS.dir/user.cpp.obj
BBMS.exe: CMakeFiles/BBMS.dir/build.make
BBMS.exe: CMakeFiles/BBMS.dir/linklibs.rsp
BBMS.exe: CMakeFiles/BBMS.dir/objects1.rsp
BBMS.exe: CMakeFiles/BBMS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\praka\Desktop\blood_bank_managment_system\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable BBMS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BBMS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BBMS.dir/build: BBMS.exe
.PHONY : CMakeFiles/BBMS.dir/build

CMakeFiles/BBMS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BBMS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BBMS.dir/clean

CMakeFiles/BBMS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\praka\Desktop\blood_bank_managment_system C:\Users\praka\Desktop\blood_bank_managment_system C:\Users\praka\Desktop\blood_bank_managment_system\build C:\Users\praka\Desktop\blood_bank_managment_system\build C:\Users\praka\Desktop\blood_bank_managment_system\build\CMakeFiles\BBMS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BBMS.dir/depend

