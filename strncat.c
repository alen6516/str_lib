#include <stdio.h>
char *strncat ( char *dst, const char *src, size_t len) {
	char *ret = dst;
	while(*++dst);
	/**while(*dst) dst++;*/
	while(len-- && (*dst++ = *src++));
	/***dst = '\0';*/
	return ret;
}

char *strncat_ ( char * dst, const char * src , size_t len)
{
    char *ret = dst;
    while (*dst) ++dst;
    while (*src && len-- && (*dst++ = *src++));
    return ret;
}

int main() {
	char d[10] = "abc";
	char s[] = "12345";	
	strncat(d, s, 3);
	printf("%s\n", d);
}
