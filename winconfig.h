/* Hand-generated config file for Windows.  */


#ifndef CONF_H_INCLUDED
#define CONF_H_INCLUDED

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define to 1 if using `alloca.c'. */
#undef C_ALLOCA

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#undef GETGROUPS_T

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#undef GETPGRP_VOID

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#undef HAVE_ALLOCA_H

/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

/* Define to 1 if you have the <asm/elf.h> header file. */
#undef HAVE_ASM_ELF_H

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if you have the `ctermid' function. */
#undef HAVE_CTERMID

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the declaration of `fpsetmask', and to 0 if you
   don't. */
#undef HAVE_DECL_FPSETMASK

/* Define to 1 if you have the <direct.h> header file. */
#define HAVE_DIRECT_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the `dlopen' function. */
#undef HAVE_DLOPEN

/* Define to 1 if you have the `dtoa' function. */
#undef HAVE_DTOA

/* Define to 1 if you have <elf_abi.h> and <machine/reloc.h> header files. */
#undef HAVE_ELF_ABI_H

/* Define to 1 if you have the <elf.h> header file. */
#undef HAVE_ELF_H

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <excpt.h> header file. */
#define HAVE_EXCPT_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#if (defined(_MSC_VER) && (_MSC_VER >= 1800))
// Defined in VS 2013
# define HAVE_FENV_H 1
#else
# undef HAVE_FENV_H
#endif

/* Define to 1 if you have the <ffi.h> header file. */
#undef HAVE_FFI_H

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the <fpu_control.h> header file. */
#undef HAVE_FPU_CONTROL_H

/* Define to 1 if your system has a working `getgroups' function. */
#undef HAVE_GETGROUPS

/* Define to 1 if you have the `getpagesize' function. */
#undef HAVE_GETPAGESIZE

/* Define to 1 if you have the gmp.h header file */
#undef HAVE_GMP_H

/* Define to 1 if you have the `gmtime_r' function. */
#undef HAVE_GMTIME_R

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define to 1 if you have the <i386/elf_machdep.h> header file. */
#undef HAVE_I386_ELF_MACHDEP_H

/* Define to 1 if you have the <ieeefp.h> header file. */
#undef HAVE_IEEEFP_H

/* Define to 1 if the system has the type `IMAGE_FILE_HEADER'. */
#define HAVE_IMAGE_FILE_HEADER 1

/* Define to 1 if the system has the type `intptr_t'. */
#undef HAVE_INTPTR_T

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H
// This was present in VS 2013 but not 2015.

/* Define to 1 if you have the <io.h> header file. */
#define HAVE_IO_H 1

/* Define to 1 if you have the `ffi' library (-lffi). */
#undef HAVE_LIBFFI

/* Define to 1 if you have the `gdi32' library (-lgdi32). */
#define HAVE_LIBGDI32 1

/* Define to 1 if you have libgmp */
#undef HAVE_LIBGMP

/* Define to 1 if you have the `pthread' library (-lpthread). */
#undef HAVE_LIBPTHREAD

/* Define to 1 if you have the `stdc++' library (-lstdc++). */
#undef HAVE_LIBSTDC__

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
#define HAVE_LIBWS2_32 1

/* Define to 1 if you have the `X11' library (-lX11). */
#undef HAVE_LIBX11

/* Define to 1 if you have the `Xext' library (-lXext). */
#undef HAVE_LIBXEXT

/* Define to 1 if you have the `Xm' library (-lXm). */
#undef HAVE_LIBXM

/* Define to 1 if you have the `Xt' library (-lXt). */
#undef HAVE_LIBXT

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#undef HAVE_LOCALTIME_R

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <machine/reloc.h> header file. */
#undef HAVE_MACHINE_RELOC_H

/* Define to 1 if you have the <mach-o/arm64/reloc.h> header file. */
#undef HAVE_MACH_O_ARM64_RELOC_H

/* Define to 1 if you have the <mach-o/reloc.h> header file. */
#undef HAVE_MACH_O_RELOC_H

/* Define to 1 if you have the <mach-o/x86_64/reloc.h> header file. */
#undef HAVE_MACH_O_X86_64_RELOC_H

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if `gregs' is a member of `mcontext_t'. */
#undef HAVE_MCONTEXT_T_GREGS

/* Define to 1 if `mc_esp' is a member of `mcontext_t'. */
#undef HAVE_MCONTEXT_T_MC_ESP

/* Define to 1 if `regs' is a member of `mcontext_t'. */
#undef HAVE_MCONTEXT_T_REGS

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkstemp' function. */
#undef HAVE_MKSTEMP

/* Define to 1 if you have the `mmap' function. */
#undef HAVE_MMAP

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#undef HAVE_NETINET_TCP_H

/* Define to 1 if you have the PE/COFF types. */
#define HAVE_PECOFF 1

/* Define to 1 if you have the <poll.h> header file. */
#undef HAVE_POLL_H

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the `pthread_jit_write_protect_np' function. */
#undef HAVE_PTHREAD_JIT_WRITE_PROTECT_NP

/* Define to 1 if the system has the type `ptrdiff_t'. */
#undef HAVE_PTRDIFF_T

/* Define to 1 if you have the <pwd.h> header file. */
#undef HAVE_PWD_H

/* Define to 1 if you have the <semaphore.h> header file. */
#undef HAVE_SEMAPHORE_H

/* Define to 1 if you have the `sigaltstack' function. */
#undef HAVE_SIGALTSTACK

/* Define to 1 if the system has the type `sighandler_t'. */
#undef HAVE_SIGHANDLER_T

/* Define to 1 if you have the <siginfo.h> header file. */
#undef HAVE_SIGINFO_H

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if the system has the type `sig_t'. */
#undef HAVE_SIG_T

/* Define to 1 if the system has the type `socklen_t'. */
#undef HAVE_SOCKLEN_T

/* Define to 1 if the system has the type `ssize_t'. */
#undef HAVE_SSIZE_T

/* Define to 1 if the system has the type `stack_t'. */
#undef HAVE_STACK_T

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
#undef HAVE_STAT_EMPTY_STRING_BUG

/* Define to 1 if you have the <stdarg.h> header file. */
#undef HAVE_STDARG_H

/* Define to 1 if stdbool.h conforms to C99. */
#undef HAVE_STDBOOL_H

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the `strtod' function. */
#define HAVE_STRTOD 1

/* Define to 1 if `ss' is a member of `struct mcontext'. */
#undef HAVE_STRUCT_MCONTEXT_SS

/* Define to 1 if the system has the type `struct sigcontext'. */
#undef HAVE_STRUCT_SIGCONTEXT

/* Define to 1 if `sun_len' is a member of `struct sockaddr_un'. */
#undef HAVE_STRUCT_SOCKADDR_UN_SUN_LEN

/* Define to 1 if `st_atim' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIM

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIMENSEC

/* Define to 1 if `st_atimespec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIMESPEC

/* Define to 1 if `st_atime_n' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIME_N

/* Define to 1 if `st_uatime' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_UATIME

/* Define to 1 if `ss' is a member of `struct __darwin_mcontext32'. */
#undef HAVE_STRUCT___DARWIN_MCONTEXT32_SS

/* Define to 1 if `__ss' is a member of `struct __darwin_mcontext32'. */
#undef HAVE_STRUCT___DARWIN_MCONTEXT32___SS

/* Define to 1 if `ss' is a member of `struct __darwin_mcontext64'. */
#undef HAVE_STRUCT___DARWIN_MCONTEXT64_SS

/* Define to 1 if `__ss' is a member of `struct __darwin_mcontext64'. */
#undef HAVE_STRUCT___DARWIN_MCONTEXT64___SS

/* Define to 1 if `ss' is a member of `struct __darwin_mcontext'. */
#undef HAVE_STRUCT___DARWIN_MCONTEXT_SS

/* Define to 1 if `__ss' is a member of `struct __darwin_mcontext'. */
#undef HAVE_STRUCT___DARWIN_MCONTEXT___SS

/* Define to 1 if you have the `sysctl' function. */
#undef HAVE_SYSCTL

/* Define to 1 if you have the `sysctlbyname' function. */
#undef HAVE_SYSCTLBYNAME

/* Define to 1 if the system has the type
   `SYSTEM_LOGICAL_PROCESSOR_INFORMATION'. */
#define HAVE_SYSTEM_LOGICAL_PROCESSOR_INFORMATION 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/elf_386.h> header file. */
#undef HAVE_SYS_ELF_386_H

/* Define to 1 if you have the <sys/elf_amd64.h> header file. */
#undef HAVE_SYS_ELF_AMD64_H

/* Define to 1 if you have the <sys/elf_SPARC.h> header file. */
#undef HAVE_SYS_ELF_SPARC_H

/* Define to 1 if you have the <sys/errno.h> header file. */
#undef HAVE_SYS_ERRNO_H

/* Define to 1 if you have the <sys/file.h> header file. */
#undef HAVE_SYS_FILE_H

/* Define to 1 if you have the <sys/filio.h> header file. */
#undef HAVE_SYS_FILIO_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/mman.h> header file. */
#undef HAVE_SYS_MMAN_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/select.h> header file. */
#undef HAVE_SYS_SELECT_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/sockio.h> header file. */
#undef HAVE_SYS_SOCKIO_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#undef HAVE_SYS_SYSCTL_H

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
#undef HAVE_SYS_SYSTEMINFO_H

/* Define to 1 if you have the <sys/times.h> header file. */
#undef HAVE_SYS_TIMES_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#undef HAVE_SYS_UIO_H

/* Define to 1 if you have the <sys/un.h> header file. */
#undef HAVE_SYS_UN_H

/* Define to 1 if you have the <sys/utsname.h> header file. */
#undef HAVE_SYS_UTSNAME_H

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the `tcdrain' function. */
#undef HAVE_TCDRAIN

/* Define to 1 if you have the <tchar.h> header file. */
#define HAVE_TCHAR_H 1

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <ucontext.h> header file. */
#undef HAVE_UCONTEXT_H

/* Define to 1 if the system has the type `ucontext_t'. */
#undef HAVE_UCONTEXT_T

/* Define to 1 if the system has the type `uintptr_t'. */
#undef HAVE_UINTPTR_T

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the <values.h> header file. */
#undef HAVE_VALUES_H

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to 1 if you have the <X11/Xlib.h> header file. */
#undef HAVE_X11_XLIB_H

/* Define to 1 if you have the <Xm/Xm.h> header file. */
#undef HAVE_XM_XM_H

/* Define to 1 if the system has the type `_Bool'. */
#undef HAVE__BOOL

/* Define to 1 if you have the `_ftelli64' function. */
#define HAVE__FTELLI64 1

/* These are commented out.  They may be defined in the project settings. */
/* Define if the host is an ARM (64-bit) */
/*#undef HOSTARCHITECTURE_AARCH64*/

/* Define if the host is an Alpha (64-bit) */
/*#undef HOSTARCHITECTURE_ALPHA*/

/* Define if the host is an ARM (32-bit) */
/*#undef HOSTARCHITECTURE_ARM*/

/* Define if the host is an HP PA-RISC (32-bit) */
/*#undef HOSTARCHITECTURE_HPPA*/

/* Define if the host is an Itanium */
/*#undef HOSTARCHITECTURE_IA64*/

/* Define if the host is a Motorola 68000 */
/*#undef HOSTARCHITECTURE_M68K*/

/* Define if the host is a MIPS (32-bit) */
/*#undef HOSTARCHITECTURE_MIPS*/

/* Define if the host is a MIPS (64-bit) */
/*#undef HOSTARCHITECTURE_MIPS64*/

/* Define if the host is a PowerPC (32-bit) */
/*#undef HOSTARCHITECTURE_PPC*/

/* Define if the host is a PowerPC (64-bit) */
/*#undef HOSTARCHITECTURE_PPC64*/

/* Define if the host is a RISC-V (32-bit) */
/*#undef HOSTARCHITECTURE_RISCV32*/

/* Define if the host is a RISC-V (64-bit) */
/*#undef HOSTARCHITECTURE_RISCV64*/

/* Define if the host is an S/390 (32-bit) */
/*#undef HOSTARCHITECTURE_S390*/

/* Define if the host is an S/390 (64-bit) */
/*#undef HOSTARCHITECTURE_S390X*/

/* Define if the host is a SuperH (32-bit) */
/*#undef HOSTARCHITECTURE_SH*/

/* Define if the host is a Sparc (32-bit) */
/*#undef HOSTARCHITECTURE_SPARC*/

/* Define if the host is a Sparc (64-bit) */
/*#undef HOSTARCHITECTURE_SPARC64*/

/* Define if the host is an X86 (32-bit ABI, 64-bit processor) */
/*#undef HOSTARCHITECTURE_X32*/

/* Define if the host is an X86 (32-bit) */
/*#undef HOSTARCHITECTURE_X86*/

/* Define if the host is an X86 (64-bit) */
/*#undef HOSTARCHITECTURE_X86_64*/

/* Define if using the interpreter */
/*#undef INTERPRETED*/

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#undef LSTAT_FOLLOWS_SLASHED_SYMLINK

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* These are commented out.  They may be defined in the project settings. */
/* Define if this should use 32-bit values in 64-bit architectures */
/* #undef POLYML32IN64 */

/* Define to the type of arg 1 for `select'. */
#undef SELECT_TYPE_ARG1

/* Define to the type of args 2, 3 and 4 for `select'. */
#undef SELECT_TYPE_ARG234

/* Define to the type of arg 5 for `select'. */
#undef SELECT_TYPE_ARG5

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
// N.B.  This is 4 on both 32-bit and 64-bit
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
// N.B.  This is 4 on both 32-bit and 64-bit
#define SIZEOF_LONG 4

// Size of long long
// N.B. This is 8 on both 32-bit and 64-bit
#define SIZEOF_LONG_LONG 8

/* The size of `void*', as computed by sizeof. */
#undef SIZEOF_VOIDP
#ifdef _WIN64
#define SIZEOF_VOIDP 8
#else
#define SIZEOF_VOIDP 4
#endif

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Defined if external symbols are prefixed by underscores */
#undef SYMBOLS_REQUIRE_UNDERSCORE
#ifdef _WIN64
#   undef SYMBOLS_REQUIRE_UNDERSCORE
#else
#   define SYMBOLS_REQUIRE_UNDERSCORE 1
#endif

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* Version number of package */
#undef VERSION

/* Define if the X-Windows interface should be built */
#undef WITH_XWINDOWS

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
// All (current) Windows platforms are little-endian.
#undef WORDS_BIGENDIAN

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#undef _FILE_OFFSET_BITS

/* Define for large files, on AIX-style hosts. */
#undef _LARGE_FILES

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
#undef _UINT32_T

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
#undef _UINT64_T

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#define gid_t int

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
#undef int16_t

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#undef int32_t

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
#undef int64_t

/* Define to the type of a signed integer type wide enough to hold a pointer,
   if such a type exists, and if the system does not define it. */
#undef intptr_t

/* Define to `int' if <sys/types.h> does not define. */
#define mode_t int

/* Define to `long int' if <sys/types.h> does not define. */
#undef off_t

/* Define to `int' if <sys/types.h> does not define. */
#define pid_t int

/* Define to `int' if <sys/types.h> does not define. */
#undef ptrdiff_t

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to `int' if <sys/types.h> does not define. */
// There is an SSIZE_T
#undef ssize_t

#if defined(_MSC_VER)
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;
#endif

/* Define to `int' if <sys/types.h> doesn't define. */
#define uid_t int

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
#undef uint16_t

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#undef uint32_t

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
#undef uint64_t

/* Define to the type of an unsigned integer type wide enough to hold a
   pointer, if such a type exists, and if the system does not define it. */
#undef uintptr_t

#endif