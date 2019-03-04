int strlen_1(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

int strlen_2(char *s) {
    int i;
    for (i = 0; *(s+i) != '\0'; i++);
    return i;
}

int strlen_3(char *s) {
    char *e;
    for (e = s; *e != '\0'; e++);
    return (e-s);
}

size_t strlen_4(const char *s) {
    const char *p = s;
    while (*s) ++s;
    return s-p;
}

int strlen(char *s) {
    return strlen_1(s) & strlen_2(s) & strlen_3(s) & strlen_4(s);
}
