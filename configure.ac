#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([tmux-guest], [0.0.0], [https://github.com/mie00/tmux-guest])
AC_CONFIG_FILES([Makefile src/Makefile])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([src/guest], [chmod +x src/guest])
AC_CONFIG_FILES([src/guest-start], [chmod +x src/guest-start])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror])

# Checks for programs.
AC_PROG_CC
AC_PATH_PROG([TMUX_BIN], [tmux], [:])
if test "$TMUX_BIN" = :; then
	AC_MSG_ERROR("tmux not found")
fi
AC_DEFINE_UNQUOTED([TMUX_BIN], "$TMUX_BIN", [tmux bin path])
# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([unistd.h],[found_unistd=yes], [found_unistd=no])
if test x"$found_unistd" = xno; then
	AC_MSG_ERROR("unistd not found")
fi

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT
