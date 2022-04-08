#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(char *s);
void print_number(int n);
int is_digit(char *s);
void _puts(char *str);
int _strlen(char *s);
void errors(void);

#endif /*MAIN_H*/
