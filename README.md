------------------------------------------------------------------------------------
My implementation to mimic the behaviour of C function printf (defined in <stdio.h>)
------------------------------------------------------------------------------------
**External function usage contains only:**
- malloc,
- free,
- write,
- va_start,
- va_arg,
- va_copy,
- va_end.

The function handles the following conversions: **cspdiuxX%**(char, string, pointer, decimal integer, unsigned integer, hecadecimal integer (lowercase and uppercase).

**Run 'make' to get the static library file libftprintf.a**

**Run 'make tester' to run with my own test main, which compares the output and return value of ft_printf to printf's.**
