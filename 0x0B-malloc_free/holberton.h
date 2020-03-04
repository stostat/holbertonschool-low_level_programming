#ifndef HOLBERTON_H
#define HOLBERTON_H
char **strtow(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int _putchar(char c);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
#endif
