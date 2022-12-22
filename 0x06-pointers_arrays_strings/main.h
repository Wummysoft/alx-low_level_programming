#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
<<<<<<< HEAD
char *rot13(char *);
int _putchar(char c)
=======
int _putchar(char c);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
>>>>>>> 0dc34bb7f3b1ae4d4f758eb4938569f5e6c7e8ef

#endif
