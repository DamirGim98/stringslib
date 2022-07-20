    #ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_


#include <stdio.h>
#include <stdlib.h>

unsigned int s21_strlen(const char * string);
unsigned int s21_strcmp(const char *string1, const char *string2);
char* s21_strcpy(char* deststring, const char* source);
char* s21_strcat(char* destination, const char* source);
char* s21_strchr(const char *s, const char c);
char* s21_strstr(const char *word, const char *string);
int memcmp1(const char *first, const char *second, size_t n);
char* s21_strtok(char *str, char* delim);

#endif  //  SRC_S21_STRING_H_
