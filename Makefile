FLAGS = -Wall -Werror -Wextra
FILES = ./src/s21_string.c ./src/s21_string_test.c
.PHONY: clean all 

all: strlen_tests strcmp_tests strcpy_tests strcat_tests strchr_tests strstr_tests strtok_tests

clean:
	rm -rf ./build/*

strlen_tests: 
	gcc -o ./build/Quest_1 $(FLAGS) $(FILES) -Dstrlen_tests

strcmp_tests:
	gcc -o ./build/Quest_2 $(FLAGS) $(FILES) -Dstrcmp_tests

strcpy_tests:
	gcc -o ./build/Quest_3 $(FLAGS) $(FILES) -Dstrcpy_tests

strcat_tests:
	gcc -o ./build/Quest_4 $(FLAGS) $(FILES) -Dstrcat_tests
strchr_tests:
	gcc -o ./build/Quest_5 $(FLAGS) $(FILES) -Dstrchr_tests
strstr_tests:
	gcc -o ./build/Quest_6 $(FLAGS) $(FILES) -Dstrstr_tests
strtok_tests:
	gcc -o ./build/Quest_7 $(FLAGS) $(FILES) -Dstrtok_tests