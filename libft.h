#include <stdlib.h>

//  include guard ( prevent header from including multiple definition )
#ifndef LIBFT_H
#define LIBFT_H

//  Function Prototypes

//  Character checks and conversation
int    ft_isalpha(int c);
int    ft_isdigit(int c);
int    ft_isalnum(int c);
int    ft_isascii(int c);
int    ft_isprint(int c);
int    ft_toupper(int c);
int    ft_tolower(int c);
int    ft_strlen(char *str);
void   *ft_memset(void *ptr, int value, size_t len);
void   ft_bzero(void *ptr, size_t len);
void   *ft_memcpy(void *dst, void *src, size_t n);

//  String and memory manipulation

#endif