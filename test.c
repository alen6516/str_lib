#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "util.h"
#include "strlen.h"
#include "strcpy.h"

static void test_strlen() {
    assert( 6 == strlen("123456") );
}

static void test_strcpy() {
    int len = 10;
    char *str = getRandString(len);
    char dst[10];
    strcpy(dst, str);
    printf("str = %s\ndst = %s\n", str, dst);
} 

int main() {
    test_strlen();
    test_strcpy();
}
