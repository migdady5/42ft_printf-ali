# migdady5\n\n*This activity has been created as part of the 42 curriculum by amigdadi*

## Description
**ft_printf** is a C library that re-implements a simplified version of `printf()` from libc.
It prints formatted output and returns the number of characters written.

This project focuses on:
- Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`, `va_copy`)
- Parsing a format string
- Building an extensible design for adding conversions

## Supported conversions
The function handles the following specifiers:

- `%c` : print a single character  
- `%s` : print a string  
- `%p` : print a pointer address in hexadecimal (`0x...`)  
- `%d` / `%i` : print a signed decimal integer  
- `%u` : print an unsigned decimal integer  
- `%x` : print a number in lowercase hexadecimal  
- `%X` : print a number in uppercase hexadecimal  
- `%%` : print a `%` character

Notes:
- Buffer management of the original `printf()` is **not** implemented.
- Behavior is compared against the system `printf()` for supported conversions.

## Instructions

### Build
make -> Builds the project (compiles source files and produces the final output)
make clean -> Removes build artifacts such as object files
make fclean -> make clean + rm -f libft.a
make re -> Recompile everything
