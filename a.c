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
    char s[]="123";
    printf("%d\n", (int)sizeof(s));     /* 4 */
    printf("%d\n", (int)strlen(s));     /* 3 */

    char d[10]="123";
    printf("%d\n", (int)sizeof(d));     /* 10 */
    printf("%d\n", (int)strlen(d));     /* 3 */
    if(d[4]+d[5]+d[6]+d[7]+d[8]+d[9] == 0) printf("yes\n");     /* yes */
    
    char *p=d;
    printf("%d\n", (int)sizeof(p));     /* 8 */
    printf("%d\n", (int)strlen(p));     /* 3 */
}
