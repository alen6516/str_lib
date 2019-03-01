/***
 File Name: a.c
 Author: alen6516
 Created Time: 2019-03-01
***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main() {
    char *s = "123";
    printf("*s = %c\n", *s);
    printf("*s++ = %c\n", *s++);
    printf("*++s = %c\n", *++s);
    printf("*s = %c\n", *s);
}
