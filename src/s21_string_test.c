#include "s21_string.h"

void s21_strlen_test();
void s21_strcmp_test();
void s21_strcpy_test();
void s21_strcat_test();
void s21_strchr_test();
void s21_strstr_test();
void s21_strtok_test();

#ifdef strlen_tests
    #define test() s21_strlen_test()
#endif
#ifdef strcmp_tests
    #define test() s21_strcmp_test()
#endif
#ifdef strcpy_tests
    #define test() s21_strcpy_test()
#endif
#ifdef strcat_tests
    #define test() s21_strcat_test()
#endif
#ifdef strchr_tests
    #define test() s21_strchr_test()
#endif
#ifdef strstr_tests
    #define test() s21_strstr_test()
#endif
#ifdef strtok_tests
    #define test() s21_strtok_test()
#endif


int main(void) {
    test();
    return 0;
}

void s21_strlen_test() {
    printf("TEST OF STRLEN\n");
    char string1[] = "Dogs are nice creatures";
    char string2[] = "12345";
    char string3[] = "";
    printf("Test input: %s\n", string1);
    printf("Test output: %d\n", s21_strlen(string1));
    if (s21_strlen(string1) == 23) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s\n", string2);
    printf("Test output: %d\n", s21_strlen(string2));
    if (s21_strlen(string2) == 5) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s\n", string3);
    printf("Test output: %d\n", s21_strlen(string3));
    if (s21_strlen(string3) == 0) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strcmp_test() {
    printf("TEST OF STRCMP\n");
    char string1[] = "12345";
    char string2[] = "12345";
    char string3[] = "12345 ";
    printf("Test input: %s %s\n", string1, string2);
    printf("Test output: %d\n", s21_strcmp(string1, string2));
    if (s21_strcmp(string1, string2) == 0) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s %s\n", string1, string3);
    printf("Test output: %d\n", s21_strcmp(string1, string3));
    if (s21_strcmp(string1, string3) == 0) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strcpy_test() {
    printf("TEST OF STRCOPY\n");
    char string1[] = "This string will be copied";
    char string2[40] = "Into this string";
    char * string3 = NULL;
    char string4[40] = "";
    printf("Test input: %s --> %s\n", string1, string2);
    if (s21_strcpy(string2, string1) != NULL) {
        printf("Test output: %s %s\n", string1, string2);
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s --> %s\n", string1, "No allocated memory");
    if (s21_strcpy(string3, string1) != NULL) {
        printf("Test output: %s %s\n", string1, string3);
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s --> %s\n", string1, string4);
    if (s21_strcpy(string4, string1) != NULL) {
        printf("Test output: %s %s\n", string1, string2);
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strcat_test() {
    printf("TEST OF STRCAT\n");
    char string1[50] = "cat";
    char string2[50] = "waterpools";
    char string3[50] = "12345";
    char * string4 = NULL;
    printf("Test input: %s <-- %s\n", string1, string2);
    if (s21_strcat(string1, string2) != NULL) {
        printf("Test output: %s %s\n", string1, string2);
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s <-- %s\n", "No allocated memory", string1);
    if (s21_strcat(string4, string1) != NULL) {
        printf("Test output: %s %s\n", string1, string2);
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s <-- %s\n", string3, string1);
    if (s21_strcat(string3, string1) != NULL) {
        printf("Test output: %s %s\n", string3, string1);
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strchr_test() {
    char string[50] = "waterpools";
    printf("TEST OF STRCHR\n");
    printf("Test input: %s <-- %c\n", string, 'a');
    if (s21_strchr(string, 'a') != NULL) {
        printf("Test output: %s\n", s21_strchr(string, 'a'));
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s <-- %c\n", string, 'w');
    if (s21_strchr(string, 'w') != NULL) {
        printf("Test output: %s\n", s21_strchr(string, 'w'));
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s <-- %c\n", string, 'W');
    if (s21_strchr(string, 'W') != NULL) {
        printf("Test output: %s\n", s21_strchr(string, 'W'));
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strstr_test() {
    printf("TEST OF STRSTR\n");
    char string[50] = "I like waterpools and beer and oranges";
    char word[] = "beer";
    char word2[] = "birds";
    char *word3 = NULL;
    printf("Test input: %s --> %s\n", word, string);
    if (s21_strstr(string, word) != NULL) {
        printf("Test output: %s\n", s21_strstr(string, word));
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s --> %s\n", word2, string);
    if (s21_strstr(string, word2) != NULL) {
        printf("Test output: %s\n", s21_strstr(string, word2));
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
    printf("Test input: %s --> %s\n", "not allocated", string);
    if (s21_strstr(string, word3) != NULL) {
        printf("Test output: %s\n", s21_strstr(string, word3));
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strtok_test() {
    printf("TEST OF STRTOK\n");
    char string[50] = "Yeah, it has - a lot of ! signs.";
    char string1[50] = "Good1boy1is1here1";
    printf("Test input: token :%s --> %s\n", " ,-!.", string);
    //
    char * ptr = NULL;
    ptr = s21_strtok(string, " ,-!.");
    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = s21_strtok(NULL, " ,.-!");
    }
    printf("SUCCESS\n");
    //
    printf("Test input: token :%s --> %s\n", "1", string1);
    char * ptr1 = NULL;
    ptr1 = s21_strtok(string1, "1");
    while (ptr1 != NULL) {
        printf("%s\n", ptr1);
        ptr1 = s21_strtok(NULL, "1");
    }
    printf("SUCCESS\n");
}
