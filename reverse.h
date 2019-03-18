char *reverse_1(char *str, size_t len) {
	len--;
	for (int i=0; i<len; i++, len--) {
		str[i] = str[i] + str[len];
		str[len] = str[i] - str[len];
		str[i] = str[i] - str[len];
	}
}

char *reverse_2(char *str, size_t len) {
	len--;
	for(int i=0; i<len; i++, len--) {
		str[i] = str[i] ^ str[len];
		str[len] = str[i] ^ str[len];
		str[i] = str[i] ^ str[len];
	}
}
/**int main() {*/
/**    char s[] = "123456";*/
/**    reverse_2(s, 6);*/
/**    printf("%s\n", s);*/
/**}*/
