# migdady5

# ft_printf

A custom implementation of the C standard `printf` function.

## Supported conversions

- Characters and strings: `%c`, `%s`
- Numbers: `%d`, `%i`, `%u`
- Hexadecimal output: `%x`, `%X`
- Pointers: `%p`
- Literal percent signs: `%%`

The project separates formatting logic into small output helpers for numbers, strings, pointers, and hexadecimal values.

## Build

```bash
make
```

This activity has been created as part of the 42 curriculum by amigdadi.