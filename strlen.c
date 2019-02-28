int strlen(char []);

int strlen(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

int strlen_1(char *s) {
    int i;
    for (i = 0; *(s+i) != '\0'; i++);
    return i;
}

int strlen_2(char *s) {
    char *e;
    for (e = s; *e != '\0'; e++);
    return (e-s);
}
