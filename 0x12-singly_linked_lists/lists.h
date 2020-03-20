#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s *nodePtr;
struct list_s 
{
	char *str;
	unsigned int len;
	nodePtr next;
	};
typedef struct list_s list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
#endif
