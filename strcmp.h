int strcmp_(const char *s1, const char *s2) {

    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 == *s2) {
            s1+=1;
            s2+=1;
            continue;
        } else
            return 1;
    }
    return 1;
}
