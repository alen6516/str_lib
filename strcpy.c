#include <stdio.h>
void *strcpy_1(char *dst, const char *src) {
	if ((NULL == dst) || (NULL==src))
		return NULL;
	int i;
	for (i = 0; src[i] != '\0'; dst[i]=src[i], i++);
	//return dst;
}

void *strcpy_2(char *dst, const char *src) {
    if ((NULL == dst) || (NULL == src))
		return NULL;
    char *result = dst;       	// set return pointer
    while ( *dst++ = *src++ ); 	// copy char by char
    //return result;
}

void *strcpy_() {
	return "123";
}
int main() {
	char s[10];
	strcpy_1(s, "12345");
	printf("%s\n", s);
	strcpy_2(s, "543210");
	printf("%s\n", s);

}
