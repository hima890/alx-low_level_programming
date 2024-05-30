Here's a comprehensive `README.md` file for the Makefile tasks:

```markdown
# Makefile Project

This project demonstrates the use of Makefiles to automate the building and cleaning of a C project. The project consists of multiple Makefiles, each progressively adding more complexity and functionality.

## Requirements

- **OS:** Ubuntu 20.04 LTS
- **GCC Version:** 9.3.0
- **Make Version:** GNU Make 4.2.1
- All files should end with a new line.
- A `README.md` file, at the root of the folder of the project, is mandatory.

## Makefiles

### 0-Makefile

The first Makefile builds the executable `school` from the source files `main.c` and `school.c`.

**Usage:**
```sh
make -f 0-Makefile
```

**Contents:**
```makefile
all:
    gcc main.c school.c -o school
```

### 1-Makefile

This Makefile introduces variables for the compiler (`CC`) and source files (`SRC`).

**Usage:**
```sh
make -f 1-Makefile
```

**Contents:**
```makefile
CC = gcc
SRC = main.c school.c

all:
    $(CC) $(SRC) -o school
```

### 2-Makefile

This Makefile adds variables for object files (`OBJ`) and the executable name (`NAME`). It ensures that only updated source files are recompiled.

**Usage:**
```sh
make -f 2-Makefile
```

**Contents:**
```makefile
CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school

all: $(NAME)

$(NAME): $(OBJ)
    $(CC) $(OBJ) -o $(NAME)

%.o: %.c
    $(CC) -c $< -o $@
```

### 3-Makefile

This Makefile introduces additional rules for cleaning the build environment: `clean`, `oclean`, `fclean`, and `re`.

**Usage:**
```sh
make -f 3-Makefile
make clean -f 3-Makefile
make oclean -f 3-Makefile
make fclean -f 3-Makefile
make re -f 3-Makefile
```

**Contents:**
```makefile
CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school

all: $(NAME)

$(NAME): $(OBJ)
    $(CC) $(OBJ) -o $(NAME)

%.o: %.c
    $(CC) -c $< -o $@

clean:
    rm -f *~ $(NAME)

oclean:
    rm -f $(OBJ)

fclean: clean oclean

re: fclean all
```

### 4-Makefile

This Makefile adds compiler flags (`CFLAGS`) for stricter compilation checks.

**Usage:**
```sh
make -f 4-Makefile
make clean -f 4-Makefile
make oclean -f 4-Makefile
make fclean -f 4-Makefile
make re -f 4-Makefile
```

**Contents:**
```makefile
CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(NAME)

$(NAME): $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f *~ $(NAME)

oclean:
    rm -f $(OBJ)

fclean: clean oclean

re: fclean all
```

### 100-Makefile

This advanced Makefile meets several additional constraints, such as limiting the usage of certain strings and ensuring compatibility with various file names.

**Usage:**
```sh
make -f 100-Makefile
make clean -f 100-Makefile
make oclean -f 100-Makefile
make fclean -f 100-Makefile
make re -f 100-Makefile
```

**Contents:**
```makefile
# 100-Makefile

# Variables
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = school
CFLAGS = -Wall -Werror -Wextra -pedantic

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

main.o: main.c m.h
	$(CC) -c main.c

school.o: school.c m.h
	$(CC) -c school.c

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all

.PHONY: all clean oclean fclean re
```

## Island Perimeter

This task involves creating a function `island_perimeter` in Python that calculates the perimeter of an island represented in a grid.

**Function Definition:**
```python
#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    
    Args:
        grid (list of list of int): The grid representing the island.
            0 represents a water zone.
            1 represents a land zone.
    
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2

    return perimeter
```

**Testing the Function:**
Create a `5-main.py` file to test the `island_perimeter` function:

```python
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
```

Running this script should output the perimeter of the island in the grid, which is `12`.

## Conclusion

This project provides a thorough understanding of how to use Makefiles for automating compilation and cleaning tasks, as well as a practical Python function for calculating the perimeter of an island in a grid.
```

Place this `README.md` file at the root of your project folder. It provides clear instructions on the purpose and usage of each Makefile and the Python function, ensuring anyone reviewing the project can understand and test it easily.
