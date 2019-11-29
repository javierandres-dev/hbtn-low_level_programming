#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _STRCAT_H
#define _STRCAT_H
char *_strcat(char *dest, char *src);
#endif

#ifndef _STRNCAT_H
#define _STRNCAT_H
char *_strncat(char *dest, char *src, int n);
#endif

#ifndef _STRNCPY_H
#define _STRNCPY_H
char *_strncpy(char *dest, char *src, int n);
#endif

#ifndef _STRCMP_H
#define _STRCMP_H
int _strcmp(char *s1, char *s2);
#endif

#ifndef REVERSE_ARRAY_H
#define REVERSE_ARRAY_H
void reverse_array(int *a, int n);
#endif

#ifndef STRING_TOUPPER_H
#define STRING_TOUPPER_H
char *string_toupper(char *s);
#endif

#ifndef CAP_STRING_H
#define CAP_STRING_H
char *cap_string(char *s);
#endif

#ifndef LEET_H
#define LEET_H
char *leet(char *s);
#endif

#ifndef ROT13_H
#define ROT13_H
char *rot13(char *s);
#endif

#ifndef PRINT_NUMBER_H
#define PRINT_NUMBER_H
void print_number(int n);
#endif

#ifndef INFINITE_ADD_H
#define INFINITE_ADD_H
char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif

#ifndef PRINT_BUFFER_H
#define PRINT_BUFFER_H
void print_buffer(char *b, int size);
#endif
