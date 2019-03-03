int getRandNum() {
    FILE *fp;
    if ((fp = fopen("/dev/urandom", "r")) == NULL) {
        fprintf(stderr, "Error!, Could not open /dev/urandom to read.\n");
        return -1;
    }

    int result = fgetc(fp);
    return result;
}

char *getRandString(size_t len) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890,./<>?`~!@#$%^&*()-=_+[]{}|\\'\"";

    if (len < 2) {
        fprintf(stderr, "The given length must larger than 1.\n");
        return NULL;
    }

    char *result = malloc(sizeof(char)*(len+1));
    int key;
    for (int i=0; i<len; i++) {
        if ((key = getRandNum()) == -1) {
            fprintf(stderr, "Could not get random number.\n");
            return NULL;
        }
        key = key % ((int)sizeof(charset)-1);
        //printf("%d\n", key);
        result[i] = charset[key];
    }
    result[len] = '\0';
    return result;
}
