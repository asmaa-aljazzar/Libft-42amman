#include <stdio.h>
#include "libft.h"

// ft_isalpha()
void test_ft_isalpha(){
    printf("Testing ft_isalpha...\n");

    char    low = 'a';
    char    upp = 'A';
    char    num = '9';
    char    spicial = '#';
    char    space = ' ';
    char    null = '\0';
    printf(" Expected 1, Got %d\n",ft_isalpha(low));
    printf(" Expected 1, Got %d\n",ft_isalpha(upp));
    printf(" Expected 0, Got %d\n",ft_isalpha(num));
    printf(" Expected 0, Got %d\n",ft_isalpha(spicial));
    printf(" Expected 0, Got %d\n",ft_isalpha(space));
    printf(" Expected 0, Got %d\n",ft_isalpha(null));
    printf("==============================================================\n");
}

// ft_isdigit()
void    test_ft_isdigit(){
    printf("Testing ft_isdigit...\n");
    

    char    low = 'a';
    char    upp = 'A';
    char    num = '9';
    char    spicial = '#';
    char    space = ' ';
    char    null = '\0';
    printf(" Expected 0, Got %d\n",ft_isdigit(low));
    printf(" Expected 0, Got %d\n",ft_isdigit(upp));
    printf(" Expected 1, Got %d\n",ft_isdigit(num));
    printf(" Expected 0, Got %d\n",ft_isdigit(spicial));
    printf(" Expected 0, Got %d\n",ft_isdigit(space));
    printf(" Expected 0, Got %d\n",ft_isdigit(null));
    printf("==============================================================\n");
}

// ft_isalnum()
void    test_ft_isalnum(){
    printf("Testing ft_isallnum...\n");

    char    low = 'a';
    char    upp = 'A';
    char    num = '9';
    char    spicial = '#';
    char    space = ' ';
    char    null = '\0';
    printf(" Expected 1, Got %d\n",ft_isalnum(low));
    printf(" Expected 1, Got %d\n",ft_isalnum(upp));
    printf(" Expected 1, Got %d\n",ft_isalnum(num));
    printf(" Expected 0, Got %d\n",ft_isalnum(spicial));
    printf(" Expected 0, Got %d\n",ft_isalnum(space));
    printf(" Expected 0, Got %d\n",ft_isalnum(null));
    printf("==============================================================\n");
}

// ft_isascii()
void    test_ft_isascii(){
    printf("Testing ft_isascii...\n");

    char    a = 'a';
    char    Z = 'Z';
    char    zero = '0';
    char    mark = '!';
    char    special1 = '@';
    char    special2 = '#';
    char    null = '\0';
    char    tap ='\t';
    char    newline = '\n';
    char    back = '\r';
    char    space = ' ';
    char    not1 = 'ü';
    char    not2 = 'ö';
    char    not3 = 'ä';
    char    not4 = 'ñ';
    char    not5 = 'ç';
    char    not6 = 'é';
    int     num2 = 127;
    int     num3 = 130;
    int     num4 = 12;

    printf(" Expected 1, Got %d\n",ft_isascii(a));
    printf(" Expected 1, Got %d\n",ft_isascii(Z));
    printf(" Expected 1, Got %d\n",ft_isascii(zero));
    printf(" Expected 1, Got %d\n",ft_isascii(mark));
    printf(" Expected 1, Got %d\n",ft_isascii(special1));
    printf(" Expected 1, Got %d\n",ft_isascii(special2));
    printf(" Expected 1, Got %d\n",ft_isascii(null));
    printf(" Expected 1, Got %d\n",ft_isascii(tap));
    printf(" Expected 1, Got %d\n",ft_isascii(newline));
    printf(" Expected 1, Got %d\n",ft_isascii(back));
    printf(" Expected 1, Got %d\n",ft_isascii(space));
    printf(" Expected 0, Got %d\n",ft_isascii(not1));
    printf(" Expected 0, Got %d\n",ft_isascii(not2));
    printf(" Expected 0, Got %d\n",ft_isascii(not3));
    printf(" Expected 0, Got %d\n",ft_isascii(not4));
    printf(" Expected 0, Got %d\n",ft_isascii(not5));
    printf(" Expected 0, Got %d\n",ft_isascii(not6));
    printf(" Expected 1, Got %d\n",ft_isascii(num2));
    printf(" Expected 0, Got %d\n",ft_isascii(num3));
    printf(" Expected 1, Got %d\n",ft_isascii(num4));
    printf("==============================================================\n");
}

// ft_isprint()
void    test_ft_isprint(){
  printf("Testing ft_isprint...\n");

    char    low = 'a';
    char    upp = 'Z';
    char    num = '9';
    char    zero = '0';
    char    spicial1 = '#';
    char    spicial2 = '@';
    char    mark = '!';
    char    space = ' ';
    char    non = '\0';
    char    non1 = '\t';
    char    non2 = '\r';
    char    non3 = '\n';

    printf(" Expected 1, Got %d\n",ft_isprint(low));
    printf(" Expected 1, Got %d\n",ft_isprint(upp));
    printf(" Expected 1, Got %d\n",ft_isprint(num));
    printf(" Expected 1, Got %d\n",ft_isprint(zero));
    printf(" Expected 1, Got %d\n",ft_isprint(spicial1));
    printf(" Expected 1, Got %d\n",ft_isprint(spicial2));
    printf(" Expected 1, Got %d\n",ft_isprint(space));
    printf(" Expected 0, Got %d\n",ft_isprint(non));
    printf(" Expected 0, Got %d\n",ft_isprint(non1));
    printf(" Expected 0, Got %d\n",ft_isprint(non2));
    printf(" Expected 0, Got %d\n",ft_isprint(non3));
    printf("==============================================================\n");
}

// ft_toupper()
void    test_ft_toupper(){
    printf("Testing ft_toupper...\n");

    char   a = 'a', b = 'b', c= 'c', z = 'z';
    char   A = 'A', B = 'B', C= 'C', Z = 'Z';
    char   var1 = '0', var2 = '9', var3 = '!', var4 = '@', var5 = '#', var6 = '\n', var7 = '\t',var8 = '\0',var9 = ' '; 
    int    num1 = 97, num2 = 122;

    printf(" Expected 65, Got %d\n",ft_toupper(a));
    printf(" Expected 66, Got %d\n",ft_toupper(b));
    printf(" Expected 67, Got %d\n",ft_toupper(c));
    printf(" Expected 90, Got %d\n",ft_toupper(z));
    printf(" Expected 65, Got %d\n",ft_toupper(A));
    printf(" Expected 66, Got %d\n",ft_toupper(B));
    printf(" Expected 67, Got %d\n",ft_toupper(C));
    printf(" Expected 90, Got %d\n",ft_toupper(Z));
    printf(" Expected 48, Got %d\n",ft_toupper(var1));
    printf(" Expected 57, Got %d\n",ft_toupper(var2));
    printf(" Expected 33, Got %d\n",ft_toupper(var3));
    printf(" Expected 64, Got %d\n",ft_toupper(var4));
    printf(" Expected 35, Got %d\n",ft_toupper(var5));
    printf(" Expected 10, Got %d\n",ft_toupper(var6));
    printf(" Expected 9, Got %d\n",ft_toupper(var7));
    printf(" Expected 0, Got %d\n",ft_toupper(var8));
    printf(" Expected 32, Got %d\n",ft_toupper(var9));
    printf(" Expected 65, Got %d\n",ft_toupper(num1));
    printf(" Expected 90, Got %d\n",ft_toupper(num2));
    printf("==============================================================\n");
}

// ft_tolower()
void    test_ft_tolower(){
    printf("Testing ft_tolower...\n");
    char   a = 'a', b = 'b', c= 'c', z = 'z';
    char   A = 'A', B = 'B', C= 'C', Z = 'Z';
    char   var1 = '0', var2 = '9', var3 = '!', var4 = '@', var5 = '#', var6 = '\n', var7 = '\t',var8 = '\0',var9 = ' '; 
    int    num1 = 65, num2 = 90;

    printf(" Expected 97, Got %d\n",ft_tolower(a));
    printf(" Expected 98, Got %d\n",ft_tolower(b));
    printf(" Expected 99, Got %d\n",ft_tolower(c));
    printf(" Expected 122, Got %d\n",ft_tolower(z));
    printf(" Expected 97, Got %d\n",ft_tolower(A));
    printf(" Expected 98, Got %d\n",ft_tolower(B));
    printf(" Expected 99, Got %d\n",ft_tolower(C));
    printf(" Expected 122, Got %d\n",ft_tolower(Z));
    printf(" Expected 48, Got %d\n",ft_tolower(var1));
    printf(" Expected 57, Got %d\n",ft_tolower(var2));
    printf(" Expected 33, Got %d\n",ft_tolower(var3));
    printf(" Expected 64, Got %d\n",ft_tolower(var4));
    printf(" Expected 35, Got %d\n",ft_tolower(var5));
    printf(" Expected 10, Got %d\n",ft_tolower(var6));
    printf(" Expected 9, Got %d\n",ft_tolower(var7));
    printf(" Expected 0, Got %d\n",ft_tolower(var8));
    printf(" Expected 32, Got %d\n",ft_tolower(var9));
    printf(" Expected 97, Got %d\n",ft_tolower(num1));
    printf(" Expected 122, Got %d\n",ft_tolower(num2));
    printf("==============================================================\n");
}

void    test_ft_strlen(){
    printf("Testing ft_strlen...\n");

    char str1[] = "";
    char str2[] = "a";
    char *str3 = "hello world";
    char *str4 = NULL;

    printf("Expected 0, Got %d\n", ft_strlen(str1));
    printf("Expected 1, Got %d\n", ft_strlen(str2));
    printf("Expected 11, Got %d\n", ft_strlen(str3));
    printf(" Expected 0, Got %d\n", ft_strlen(str4));
}

int    main(){
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_strlen();
    return (0);
}