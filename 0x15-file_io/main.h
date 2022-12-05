#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *, size_t);
int append_text_to_file(const char *, char *);
int create_file(const char *, char *);
int _putchar(char);

#endif
