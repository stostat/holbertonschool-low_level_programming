#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_setzer(char *s, char b, unsigned int n);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isdig(char *num);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
