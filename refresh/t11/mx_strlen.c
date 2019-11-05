int mx_strlen(const char *s) {
    int count = 0;
    int i = 0;
    while (s[i] != '\0') {
        i++;
        count++;
    }
    return count;
}
