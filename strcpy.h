void *strcpy_1(char *dst, const char *src) {
	if ((NULL == dst) || (NULL==src))
		return NULL;
	int i;
	for (i = 0; src[i] != '\0'; dst[i]=src[i], i++);
}

void *strcpy_2(char *dst, const char *src) {
    if ((NULL == dst) || (NULL == src))
		return NULL;
    char *result = dst;       	// set return pointer
    while ( *dst++ = *src++ ); 	// copy char by char
}

void *strcpy(char *dst, char *src) {
	return strcpy_1(dst, src);
}
