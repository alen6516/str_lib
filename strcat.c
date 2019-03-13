#include <stdio.h>
char *strcat(char *dst, const char *src) {
    char *ret = dst; 
    while (*dst++);
    while (*dst++ = *src++);
    *dst = '\0';
    return ret;
}

int main() {
    char dst[10];
    dst[0] = 'z';
    dst[1] = '\0';
    strcat(dst, "123");
    strcat("%s\n", dst);
    strcat(dst, "abc");
    strcat("%s\n", dst);
}
