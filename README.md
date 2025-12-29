# Get_Next_Line

*This project has been created as part of the 42 curriculum.*

## Description

**Get_Next_Line** is a project aimed at implementing a function that reads and returns a line from a file descriptor. This function addresses the complexities of file handling and dynamic memory allocation in C.

The `Get_Next_Line` project demonstrates the ability to handle a variety of edge cases, such as reading from multiple file descriptors or handling files with no newline characters.

### Key Features

- Efficiently reads one line at a time from a file descriptor.
- Handles varying buffer sizes for optimized performance.
- Supports multiple file descriptors (bonus feature).
- Fully compliant with 42's norminette coding standards.

---

## Usage

### Prerequisites

- C compiler
- A Unix-based operating system

### Adding GNL to Your Project

1. Copy the following files into your project directory:
   - `get_next_line.c`
   - `get_next_line.h`
   - (Optional) `get_next_line_bonus.c` and `get_next_line_bonus.h` for multi-descriptor support.

2. Include the header within your code:

   ```c
   #include "get_next_line.h"
   ```

3. Compile your project with the `get_next_line` implementation:

   ```bash
   cc -Wall -Wextra -Werror your_file.c get_next_line.c -o your_program
   ```

For the bonus implementation, simply add `get_next_line_bonus.c` during compilation:

```bash
cc -Wall -Wextra -Werror your_file.c get_next_line_bonus.c -o your_program
```

### Example Usage

```c
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("example.txt", O_RDONLY);
    if (fd == -1)
        return (1);

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

---

## Files

### Core Files

- `get_next_line.c`: Contains the implementation of the `get_next_line` function.
- `get_next_line.h`: Header file with function prototypes and necessary includes.
- `get_next_line_utils.c`: Utility functions for dynamic memory handling and buffer operations.

### Bonus Files

- `get_next_line_bonus.c`: Extended functionality to handle multiple file descriptors.
- `get_next_line_bonus.h`: Header file for the bonus implementation.
- `get_next_line_utils_bonus.c`: Utility functions for the bonus feature.

---

## Notes

- The function assumes that the `BUFFER_SIZE` macro is defined during compilation. You can define it as needed:
  ```bash
  cc -D BUFFER_SIZE=42 your_file.c get_next_line.c -o your_program
  ```

- The function returns:
  - The next line read from the file descriptor (excluding the newline).
  - `NULL` on EOF or if an error occurs.