#include <stdio.h>
#include <stdlib.h>
void strcpy_(char *src, char **dst) {
    *dst = src;
}

char *strcpy_1(char *dst, const char *src) {
	if ((NULL == dst) || (NULL==src))
		return NULL;

	int i;
	for (i = 0; src[i] != '\0'; dst[i]=src[i], i++);
	return dst;
}

int main() {
	char *src = "sample";
	char dst[10];
	strcpy_1(dst, src);
	printf("%s\n", dst);
}
