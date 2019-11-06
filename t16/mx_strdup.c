#include<stdlib.h>
#include<stdio.h>

char *mx_strcpy(char *dst, const char *src); 
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *p = (char *) malloc(mx_strlen(str) + 1);
    if(p) {
        mx_strcpy(p, str);
    }
    return p;
} 

