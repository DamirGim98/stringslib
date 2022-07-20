#include "s21_string.h"

unsigned int s21_strlen(const char * string) {
    unsigned int count = 0;
    while (*string != '\0') {
        count++;
        string++;
    }
    return count;
}

unsigned int s21_strcmp(const char *string1, const char *string2) {
    while (*string1) {
        if (*string1 != *string2) {
            break;
        }
        string1++;
        string2++;
    }
    return *(const unsigned char*)string1 - *(const unsigned char*)string2;
}

char* s21_strcpy(char* deststring, const char* source) {
    char *result = deststring;
    if (result == NULL) {
        return NULL;
    }
    while (*source != '\0') {
        *deststring = *source;
        deststring++;
        source++;
    }
    *deststring = '\0';
    return result;
}

char* s21_strcat(char* destination, const char* source) {
    char* ptr = destination;
    if (ptr == NULL) {
        return NULL;
    }
    ptr = destination + s21_strlen(destination);
    while (*source != '\0') {
        *ptr++ = *source++;
    }
    *ptr = '\0';
    return destination;
}

char * s21_strchr(const char *s, const char c) {
    while (*s != c && *s != '\0') {
        s++;
    }
    if (*s == c) {
        return (char *)s;
    } else {
        return NULL;
    }
}

char * s21_strstr(const char *orstring, const char *word) {
    const char *ptr = word;
    if (ptr != NULL) {
        size_t n = s21_strlen(word);
        while (*orstring) {
            if (!memcmp1(orstring, word, n)) {
                return (char *)orstring;
            }
            orstring++;
        }
    }
    return NULL;
}

int memcmp1(const char *first, const char *second, size_t n) {
    size_t i;
    for (i = 0; i < n; i++, first++, second++) {
        if (*first < *second) {
            return -1;
        } else if (*first > *second) {
            return 1;
        }
    }
    return 0;
}

int is_delim(char c, char *delim) {
    while (*delim != '\0') {
        if (c == *delim)
        return 1;
        delim++;
    }
    return 0;
}

char * s21_strtok(char *s, char *delim) {
    static char *p;
    if (!s) {
        s = p;
    }
    if (!s) {
        return NULL;
    }
    while (1) {
        if (is_delim(*s, delim)) {
            s++;
            continue;
        }
        if (*s == '\0') {
            return NULL;
        }
        break;
    }
    char *ret = s;
    while (1) {
        if (*s == '\0') {
            p = s;
            return ret;
        }
        if (is_delim(*s, delim)) {
            *s = '\0';
            p = s + 1;
            return ret;
        }
        s++;
    }
}
