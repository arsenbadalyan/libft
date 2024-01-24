# libft

**A collection of custom-implemented C standard functions for personal use.**

## Features

- Reimplementation of common C standard functions for memory management, string manipulation, input/output, and more.
- Ability to create a static library file (`libft.a`) for easy integration into other projects.
- Thoroughly tested to ensure functionality and reliability.

## Usage

1. **Compilation:**
   - Run `make` in the project directory to create the static library file `libft.a`.

2. **Linking:**
   - Include the library header file in your project:
     ```c
     #include "libft.h"
     ```
   - Link the library during compilation:
     ```bash
     gcc your_program.c -L. -lft -o your_program
     

## Documentation

- Refer to the `libft.h` header file for a complete list of available functions and their descriptions.

## Contributing

Contributions are welcome! Feel free to open issues, submit pull requests, or suggest improvements. Follow the [Contributing Guidelines](CONTRIBUTING.md) for more details.

## License

This project is licensed under the [MIT License](LICENSE).