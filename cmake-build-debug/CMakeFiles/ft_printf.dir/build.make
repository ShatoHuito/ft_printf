# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gbrittan/CLionProjects/My_printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gbrittan/CLionProjects/My_printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_printf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_printf.dir/flags.make

CMakeFiles/ft_printf.dir/libftprintf.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libftprintf.c.o: ../libftprintf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_printf.dir/libftprintf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libftprintf.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libftprintf.c

CMakeFiles/ft_printf.dir/libftprintf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libftprintf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libftprintf.c > CMakeFiles/ft_printf.dir/libftprintf.c.i

CMakeFiles/ft_printf.dir/libftprintf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libftprintf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libftprintf.c -o CMakeFiles/ft_printf.dir/libftprintf.c.s

CMakeFiles/ft_printf.dir/char.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/char.c.o: ../char.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ft_printf.dir/char.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/char.c.o   -c /Users/gbrittan/CLionProjects/My_printf/char.c

CMakeFiles/ft_printf.dir/char.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/char.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/char.c > CMakeFiles/ft_printf.dir/char.c.i

CMakeFiles/ft_printf.dir/char.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/char.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/char.c -o CMakeFiles/ft_printf.dir/char.c.s

CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o: ../libft/ft_putchar_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_putchar_fd.c

CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_putchar_fd.c > CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.i

CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_putchar_fd.c -o CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.s

CMakeFiles/ft_printf.dir/libft/ft_strchr.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strchr.c.o: ../libft/ft_strchr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strchr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strchr.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_strchr.c

CMakeFiles/ft_printf.dir/libft/ft_strchr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strchr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_strchr.c > CMakeFiles/ft_printf.dir/libft/ft_strchr.c.i

CMakeFiles/ft_printf.dir/libft/ft_strchr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strchr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_strchr.c -o CMakeFiles/ft_printf.dir/libft/ft_strchr.c.s

CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.o: ../libft/ft_isdigit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_isdigit.c

CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_isdigit.c > CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.i

CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_isdigit.c -o CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.s

CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o: ../libft/ft_putstr_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_putstr_fd.c

CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_putstr_fd.c > CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.i

CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_putstr_fd.c -o CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.s

CMakeFiles/ft_printf.dir/string.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/string.c.o: ../string.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ft_printf.dir/string.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/string.c.o   -c /Users/gbrittan/CLionProjects/My_printf/string.c

CMakeFiles/ft_printf.dir/string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/string.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/string.c > CMakeFiles/ft_printf.dir/string.c.i

CMakeFiles/ft_printf.dir/string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/string.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/string.c -o CMakeFiles/ft_printf.dir/string.c.s

CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o: ../libft/ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_strlen.c

CMakeFiles/ft_printf.dir/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strlen.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_strlen.c > CMakeFiles/ft_printf.dir/libft/ft_strlen.c.i

CMakeFiles/ft_printf.dir/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strlen.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_strlen.c -o CMakeFiles/ft_printf.dir/libft/ft_strlen.c.s

CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.o: ../libft/ft_putnbr_fd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_putnbr_fd.c

CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_putnbr_fd.c > CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.i

CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_putnbr_fd.c -o CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.s

CMakeFiles/ft_printf.dir/libft/ft_itoa.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_itoa.c.o: ../libft/ft_itoa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/ft_printf.dir/libft/ft_itoa.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_itoa.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_itoa.c

CMakeFiles/ft_printf.dir/libft/ft_itoa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_itoa.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_itoa.c > CMakeFiles/ft_printf.dir/libft/ft_itoa.c.i

CMakeFiles/ft_printf.dir/libft/ft_itoa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_itoa.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_itoa.c -o CMakeFiles/ft_printf.dir/libft/ft_itoa.c.s

CMakeFiles/ft_printf.dir/libft/ft_strdup.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strdup.c.o: ../libft/ft_strdup.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strdup.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strdup.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_strdup.c

CMakeFiles/ft_printf.dir/libft/ft_strdup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strdup.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_strdup.c > CMakeFiles/ft_printf.dir/libft/ft_strdup.c.i

CMakeFiles/ft_printf.dir/libft/ft_strdup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strdup.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_strdup.c -o CMakeFiles/ft_printf.dir/libft/ft_strdup.c.s

CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o: ../libft/ft_strcpy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o   -c /Users/gbrittan/CLionProjects/My_printf/libft/ft_strcpy.c

CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/libft/ft_strcpy.c > CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.i

CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/libft/ft_strcpy.c -o CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.s

CMakeFiles/ft_printf.dir/int_dec.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/int_dec.c.o: ../int_dec.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/ft_printf.dir/int_dec.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/int_dec.c.o   -c /Users/gbrittan/CLionProjects/My_printf/int_dec.c

CMakeFiles/ft_printf.dir/int_dec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/int_dec.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/int_dec.c > CMakeFiles/ft_printf.dir/int_dec.c.i

CMakeFiles/ft_printf.dir/int_dec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/int_dec.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/int_dec.c -o CMakeFiles/ft_printf.dir/int_dec.c.s

CMakeFiles/ft_printf.dir/unsigned.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/unsigned.c.o: ../unsigned.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/ft_printf.dir/unsigned.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/unsigned.c.o   -c /Users/gbrittan/CLionProjects/My_printf/unsigned.c

CMakeFiles/ft_printf.dir/unsigned.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/unsigned.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/unsigned.c > CMakeFiles/ft_printf.dir/unsigned.c.i

CMakeFiles/ft_printf.dir/unsigned.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/unsigned.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/unsigned.c -o CMakeFiles/ft_printf.dir/unsigned.c.s

CMakeFiles/ft_printf.dir/x_X.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/x_X.c.o: ../x_X.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/ft_printf.dir/x_X.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/x_X.c.o   -c /Users/gbrittan/CLionProjects/My_printf/x_X.c

CMakeFiles/ft_printf.dir/x_X.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/x_X.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gbrittan/CLionProjects/My_printf/x_X.c > CMakeFiles/ft_printf.dir/x_X.c.i

CMakeFiles/ft_printf.dir/x_X.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/x_X.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gbrittan/CLionProjects/My_printf/x_X.c -o CMakeFiles/ft_printf.dir/x_X.c.s

# Object files for target ft_printf
ft_printf_OBJECTS = \
"CMakeFiles/ft_printf.dir/libftprintf.c.o" \
"CMakeFiles/ft_printf.dir/char.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strchr.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o" \
"CMakeFiles/ft_printf.dir/string.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_itoa.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strdup.c.o" \
"CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o" \
"CMakeFiles/ft_printf.dir/int_dec.c.o" \
"CMakeFiles/ft_printf.dir/unsigned.c.o" \
"CMakeFiles/ft_printf.dir/x_X.c.o"

# External object files for target ft_printf
ft_printf_EXTERNAL_OBJECTS =

ft_printf: CMakeFiles/ft_printf.dir/libftprintf.c.o
ft_printf: CMakeFiles/ft_printf.dir/char.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putchar_fd.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strchr.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_isdigit.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putstr_fd.c.o
ft_printf: CMakeFiles/ft_printf.dir/string.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strlen.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_putnbr_fd.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_itoa.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strdup.c.o
ft_printf: CMakeFiles/ft_printf.dir/libft/ft_strcpy.c.o
ft_printf: CMakeFiles/ft_printf.dir/int_dec.c.o
ft_printf: CMakeFiles/ft_printf.dir/unsigned.c.o
ft_printf: CMakeFiles/ft_printf.dir/x_X.c.o
ft_printf: CMakeFiles/ft_printf.dir/build.make
ft_printf: CMakeFiles/ft_printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking C executable ft_printf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_printf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_printf.dir/build: ft_printf

.PHONY : CMakeFiles/ft_printf.dir/build

CMakeFiles/ft_printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_printf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_printf.dir/clean

CMakeFiles/ft_printf.dir/depend:
	cd /Users/gbrittan/CLionProjects/My_printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gbrittan/CLionProjects/My_printf /Users/gbrittan/CLionProjects/My_printf /Users/gbrittan/CLionProjects/My_printf/cmake-build-debug /Users/gbrittan/CLionProjects/My_printf/cmake-build-debug /Users/gbrittan/CLionProjects/My_printf/cmake-build-debug/CMakeFiles/ft_printf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_printf.dir/depend

