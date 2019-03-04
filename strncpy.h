void strncpy(char *dst, const char *src, size_t len) {
    for (; len > 0 && src; *dst++=*src++, len--);
    *dst = '\0';
}
