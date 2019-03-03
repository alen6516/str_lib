/***
 File Name: a.c
 Author: alen6516
 Created Time: 2019-03-01
***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "util.h"

int main() {
    char *s;
    s = randstring(8);
    printf("%s\n", s);
}
