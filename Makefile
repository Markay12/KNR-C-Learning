# Compiler and Flags
CC = gcc

# -std=c89: Force the ANSI C standard from the C Programming Language that is somewhat outdated
# -Wall Wextra: Shows all the warnings
# -Werror: Treats all warnings as errors
# -pedantic: Issue warnings for non-ISO C code
CFLAGS = -std=c89 -Wall -Wextra -Werror -pedantic -I./lib -g

# Find all the C source files in subdirectories
SRCS = $(wildcard ch*/*.c)

# Transform .c filenames into executables
BINS = $(SRCS:.c=)

all: $(BINS)

# Rule to build each exercise
%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BINS)
	find . -type f -executable -delete

.PHONY: all clean
