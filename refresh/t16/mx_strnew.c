#include <stdlib.h>
#include <stddef.h>

char *mx_strnew(const int size) {
    char *s = (char*)malloc(size + 1);
    int i = 0;
    while (i < size + 1) {
    	s[i] = '\0';
    	i++;
    }
    return s;
}
