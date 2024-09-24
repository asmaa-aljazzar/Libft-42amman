#include <stdio.h>
#include "libft.h"
#include <wchar.h>
#include <string.h>
#include <fcntl.h>  // Include this for file opening flags


// wchar meaning wide-char
// To print any array in hexadecimal format
/*
 * printf("Hexadecimal: %x\n", value);    // Prints: f
 * printf("Padded Hex:  %02x\n", value);  // Prints: 0f
 */
void    print_array(unsigned char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%02X ", arr[i]); // Print each byte in hexadecimal format
    }
    printf("\n");
}

// ft_split
void free_split_result(char **result) {
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}

// Mandatory LIBC
// ft_isalpha()
void    test_ft_isalpha()
{
    printf("Testing ft_isalpha...\n");

    char low = 'a';
    char upp = 'A';
    char num = '9';
    char spicial = '#';
    char space = ' ';
    char null = '\0';
    printf(" Expected 1, Got %d\n", ft_isalpha(low));
    printf(" Expected 1, Got %d\n", ft_isalpha(upp));
    printf(" Expected 0, Got %d\n", ft_isalpha(num));
    printf(" Expected 0, Got %d\n", ft_isalpha(spicial));
    printf(" Expected 0, Got %d\n", ft_isalpha(space));
    printf(" Expected 0, Got %d\n", ft_isalpha(null));
    printf("==============================================================\n");
}

// ft_isdigit()
void    test_ft_isdigit()
{
    printf("Testing ft_isdigit...\n");

    char low = 'a';
    char upp = 'A';
    char num = '9';
    char spicial = '#';
    char space = ' ';
    char null = '\0';
    printf(" Expected 0, Got %d\n", ft_isdigit(low));
    printf(" Expected 0, Got %d\n", ft_isdigit(upp));
    printf(" Expected 1, Got %d\n", ft_isdigit(num));
    printf(" Expected 0, Got %d\n", ft_isdigit(spicial));
    printf(" Expected 0, Got %d\n", ft_isdigit(space));
    printf(" Expected 0, Got %d\n", ft_isdigit(null));
    printf("==============================================================\n");
}

// ft_isalnum()
void    test_ft_isalnum()
{
    printf("Testing ft_isallnum...\n");

    char low = 'a';
    char upp = 'A';
    char num = '9';
    char spicial = '#';
    char space = ' ';
    char null = '\0';
    printf(" Expected 1, Got %d\n", ft_isalnum(low));
    printf(" Expected 1, Got %d\n", ft_isalnum(upp));
    printf(" Expected 1, Got %d\n", ft_isalnum(num));
    printf(" Expected 0, Got %d\n", ft_isalnum(spicial));
    printf(" Expected 0, Got %d\n", ft_isalnum(space));
    printf(" Expected 0, Got %d\n", ft_isalnum(null));
    printf("==============================================================\n");
}

// ft_isascii()
void    test_ft_isascii()
{
    printf("Testing ft_isascii...\n");

    char a = 'a';
    char Z = 'Z';
    char zero = '0';
    char mark = '!';
    char special1 = '@';
    char special2 = '#';
    char null = '\0';
    char tap = '\t';
    char newline = '\n';
    char back = '\r';
    char space = ' ';
    wchar_t not1 = L'├';
    wchar_t not2 = L'╝';
    wchar_t not3 = L'ñ';
    wchar_t not4 = L'▒';
    wchar_t not5 = L'º';
    wchar_t not6 = L'⌐';
    int num2 = 127;
    int num3 = 130;
    int num4 = 12;

    printf(" Expected 1, Got %d\n", ft_isascii(a));
    printf(" Expected 1, Got %d\n", ft_isascii(Z));
    printf(" Expected 1, Got %d\n", ft_isascii(zero));
    printf(" Expected 1, Got %d\n", ft_isascii(mark));
    printf(" Expected 1, Got %d\n", ft_isascii(special1));
    printf(" Expected 1, Got %d\n", ft_isascii(special2));
    printf(" Expected 1, Got %d\n", ft_isascii(null));
    printf(" Expected 1, Got %d\n", ft_isascii(tap));
    printf(" Expected 1, Got %d\n", ft_isascii(newline));
    printf(" Expected 1, Got %d\n", ft_isascii(back));
    printf(" Expected 1, Got %d\n", ft_isascii(space));
    printf(" Expected 0, Got %d\n", ft_isascii(not1));
    printf(" Expected 0, Got %d\n", ft_isascii(not2));
    printf(" Expected 0, Got %d\n", ft_isascii(not3));
    printf(" Expected 0, Got %d\n", ft_isascii(not4));
    printf(" Expected 0, Got %d\n", ft_isascii(not5));
    printf(" Expected 0, Got %d\n", ft_isascii(not6));
    printf(" Expected 1, Got %d\n", ft_isascii(num2));
    printf(" Expected 0, Got %d\n", ft_isascii(num3));
    printf(" Expected 1, Got %d\n", ft_isascii(num4));
    printf("==============================================================\n");
}

// ft_isprint()
void    test_ft_isprint()
{
    printf("Testing ft_isprint...\n");

    char low = 'a';
    char upp = 'Z';
    char num = '9';
    char zero = '0';
    char spicial1 = '#';
    char spicial2 = '@';
    char mark = '!';
    char space = ' ';
    char non = '\0';
    char non1 = '\t';
    char non2 = '\r';
    char non3 = '\n';

    printf(" Expected 1, Got %d\n", ft_isprint(low));
    printf(" Expected 1, Got %d\n", ft_isprint(upp));
    printf(" Expected 1, Got %d\n", ft_isprint(num));
    printf(" Expected 1, Got %d\n", ft_isprint(zero));
    printf(" Expected 1, Got %d\n", ft_isprint(spicial1));
    printf(" Expected 1, Got %d\n", ft_isprint(spicial2));
    printf(" Expected 1, Got %d\n", ft_isprint(space));
    printf(" Expected 0, Got %d\n", ft_isprint(non));
    printf(" Expected 0, Got %d\n", ft_isprint(non1));
    printf(" Expected 0, Got %d\n", ft_isprint(non2));
    printf(" Expected 0, Got %d\n", ft_isprint(non3));
    printf(" Expected 1, Got %d\n", ft_isprint(mark));
    printf("==============================================================\n");
}

// ft_toupper()
void    test_ft_toupper()
{
    printf("Testing ft_toupper...\n");

    char a = 'a', b = 'b', c = 'c', z = 'z';
    char A = 'A', B = 'B', C = 'C', Z = 'Z';
    char var1 = '0', var2 = '9', var3 = '!', var4 = '@', var5 = '#', var6 = '\n', var7 = '\t', var8 = '\0', var9 = ' ';
    int num1 = 97, num2 = 122;

    printf(" Expected 65, Got %d\n", ft_toupper(a));
    printf(" Expected 66, Got %d\n", ft_toupper(b));
    printf(" Expected 67, Got %d\n", ft_toupper(c));
    printf(" Expected 90, Got %d\n", ft_toupper(z));
    printf(" Expected 65, Got %d\n", ft_toupper(A));
    printf(" Expected 66, Got %d\n", ft_toupper(B));
    printf(" Expected 67, Got %d\n", ft_toupper(C));
    printf(" Expected 90, Got %d\n", ft_toupper(Z));
    printf(" Expected 48, Got %d\n", ft_toupper(var1));
    printf(" Expected 57, Got %d\n", ft_toupper(var2));
    printf(" Expected 33, Got %d\n", ft_toupper(var3));
    printf(" Expected 64, Got %d\n", ft_toupper(var4));
    printf(" Expected 35, Got %d\n", ft_toupper(var5));
    printf(" Expected 10, Got %d\n", ft_toupper(var6));
    printf(" Expected 9, Got %d\n", ft_toupper(var7));
    printf(" Expected 0, Got %d\n", ft_toupper(var8));
    printf(" Expected 32, Got %d\n", ft_toupper(var9));
    printf(" Expected 65, Got %d\n", ft_toupper(num1));
    printf(" Expected 90, Got %d\n", ft_toupper(num2));
    printf("==============================================================\n");
}

// ft_tolower()
void    test_ft_tolower()
{
    printf("Testing ft_tolower...\n");
    char a = 'a', b = 'b', c = 'c', z = 'z';
    char A = 'A', B = 'B', C = 'C', Z = 'Z';
    char var1 = '0', var2 = '9', var3 = '!', var4 = '@', var5 = '#', var6 = '\n', var7 = '\t', var8 = '\0', var9 = ' ';
    int num1 = 65, num2 = 90;

    printf(" Expected 97, Got %d\n", ft_tolower(a));
    printf(" Expected 98, Got %d\n", ft_tolower(b));
    printf(" Expected 99, Got %d\n", ft_tolower(c));
    printf(" Expected 122, Got %d\n", ft_tolower(z));
    printf(" Expected 97, Got %d\n", ft_tolower(A));
    printf(" Expected 98, Got %d\n", ft_tolower(B));
    printf(" Expected 99, Got %d\n", ft_tolower(C));
    printf(" Expected 122, Got %d\n", ft_tolower(Z));
    printf(" Expected 48, Got %d\n", ft_tolower(var1));
    printf(" Expected 57, Got %d\n", ft_tolower(var2));
    printf(" Expected 33, Got %d\n", ft_tolower(var3));
    printf(" Expected 64, Got %d\n", ft_tolower(var4));
    printf(" Expected 35, Got %d\n", ft_tolower(var5));
    printf(" Expected 10, Got %d\n", ft_tolower(var6));
    printf(" Expected 9, Got %d\n", ft_tolower(var7));
    printf(" Expected 0, Got %d\n", ft_tolower(var8));
    printf(" Expected 32, Got %d\n", ft_tolower(var9));
    printf(" Expected 97, Got %d\n", ft_tolower(num1));
    printf(" Expected 122, Got %d\n", ft_tolower(num2));
    printf("==============================================================\n");
}

void    test_ft_strlen()
{
    printf("Testing ft_strlen...\n");

    char str1[] = "";
    char str2[] = "a";
    char *str3 = "hello world";
    char *str4 = NULL;

    printf("Expected 0, Got %d\n", ft_strlen(str1));
    printf("Expected 1, Got %d\n", ft_strlen(str2));
    printf("Expected 11, Got %d\n", ft_strlen(str3));
    printf(" Expected 0, Got %d\n", ft_strlen(str4));
    printf("==============================================================\n");
}

// ft_memset()
void    test_ft_memset()
{
    printf("Testing ft_memset...\n");
    unsigned char test1[10] = {0};
    printf("Test case 1 - Before: ");
    print_array(test1, 10);
    ft_memset(test1, 0xFF, 10);
    printf("Test case 1 - after: ");
    print_array(test1, 10);

    // Test case 2: Partial setting of array
    unsigned char test2[10] = {0};
    printf("Test case 2 - Before: ");
    print_array(test2, 10);
    ft_memset(test2, 0xAA, 5);
    printf("Test case 2 - After:  ");
    print_array(test2, 10);

    // Test case 3: Setting a string
    char test3[] = "Hello, World!";
    printf("Test case 3 - Before: %s\n", test3);
    ft_memset(test3, '*', 5);
    printf("Test case 3 - After:  %s\n", test3);

    // Test case 4: Empty array, no change expected
    unsigned char test4[0] = {};
    printf("Test case 4 - Before: (empty)\n");
    ft_memset(test4, 0xFF, 0); // Setting 0 length
    printf("Test case 4 - After: (empty)\n");

    // Test case 5: Null pointer case
    printf("Test case 5 - Null pointer: ");
    if (ft_memset(NULL, 0xFF, 10) == NULL)
    {
        printf("Handled NULL pointer correctly\n");
    }
    else
    {
        printf("Error in handling NULL pointer\n");
    }
    printf("==============================================================\n");
}

// ft_bzero()
void    test_ft_bzero()
{
    printf("Testing ft_bzero...\n");
    unsigned char test1[10] = {0};
    printf("Test case 1 - Before: ");
    print_array(test1, 10);
    ft_bzero(test1, 10);
    printf("Test case 1 - after: ");
    print_array(test1, 10);

    // Test case 2: Partial setting of array
    unsigned char test2[10] = {0};
    printf("Test case 2 - Before: ");
    print_array(test2, 10);
    ft_bzero(test2, 5);
    printf("Test case 2 - After:  ");
    print_array(test2, 10);

    // Test case 3: Setting a string
    char test3[] = "Hello, World!";
    printf("Test case 3 - Before: %s\n", test3);
    ft_bzero(test3, 5);
    printf("Test case 3 - After:  %s\n", test3);

    // Test case 4: Empty array, no change expected
    unsigned char test4[0] = {};
    printf("Test case 4 - Before: (empty)\n");
    ft_bzero(test4, 0); // Setting 0 length
    printf("Test case 4 - After: (empty)\n");

    // Test case 5: Null pointer case
    printf("Test case 5 - Null pointer: ");
    ft_bzero(NULL, 5);
    printf("\n==============================================================\n");
}

// ft_memcpy()
void    test_ft_memcpy()
{
    printf("Testing ft_memcpy...\n");
     // Test Case 1: Normal Copy
    {
        char src[] = "Hello, World!";
        char dst[20];

        ft_memcpy(dst, src, ft_strlen(src) + 1); // +1 to include the null terminator
        printf("Test 1 - Normal Copy: %s\n", dst); // Expected output: "Hello, World!"
    }

    // Test Case 2: Zero-length Copy
    {
        char src[] = "Hello, World!";
        char dst[20] = "Initial Value";

        ft_memcpy(dst, src, 0);
        printf("Test 2 - Zero Length: %s\n", dst); // Expected output: "Initial Value"
    }

    // Test Case 3: NULL Pointers for Both src and dst
    {
        char *src = NULL;
        char *dst = NULL;
        ft_memcpy(dst, src, 10);
        if (dst == NULL)
            printf("Test 3 - Both NULL Pointers: Passed %s\n", dst); // Expected output: "Passed"
        else
            printf("Test 3 - Both NULL Pointers: Failed%s\n", dst);
    }

    // Test Case 4: NULL Pointer for dst
    {
        char src[] = "Hello!";
        char *dst = NULL;
        ft_memcpy(dst, src, 6);
        if (dst == NULL)
            printf("Test 4 - NULL dst: Passed%s\n", dst); // Expected output: "Passed"
        else
            printf("Test 4 - NULL dst: Failed%s \n", dst);
    }

    // Test Case 6: Copying Overlapping Memory Regions (undefined behavior)
    {
        char src[] = "Overlapping";
        ft_memcpy(src + 2, src, 5); // Copy 5 characters from src to src+2
        printf("Test 5 - Overlapping Memory: %s\n", src); // Behavior is undefined
    }

    // Test Case 7: Copy a Single Byte
    {
        char src[] = "A";
        char dst[10] = {0};
        ft_memcpy(dst, src, 1);
        printf("Test 6 - Single Byte Copy: %s\n", dst); // Expected output: "A"
    }
    printf("==============================================================\n");
}

// ft_memmove()
void    test_ft_memmove()
{

// Test Case 1: Non-overlapping regions
    {
        char src[] = "1234567890";
        char dst[20] = {0};
        ft_memmove(dst, src, 10);
        printf("Test 1 - Non-overlapping regions: %s\n", dst);  // Expected output: "1234567890"
    }

    // Test Case 2: Overlapping - Source before destination (backward copy)
    {
        char str[] = "OverlappingTest";
        ft_memmove(str + 5, str, 10);  // Overlapping: src starts at str, dst starts at str+5
        printf("Test 2 - Overlapping (src < dst): %s\n", str);  // Expected output: "OverlOverlTest"
    }

    // Test Case 3: Overlapping - Destination before source (forward copy)
    {
        char str[] = "OverlappingTest";
        ft_memmove(str, str + 5, 10);  // Overlapping: src starts at str+5, dst starts at str
        printf("Test 3 - Overlapping (dst < src): %s\n", str);  // Expected output: "pingTestingTest"
    }

    // Test Case 4: Zero-length move
    {
        char src[] = "ZeroMoveTest";
        char dst[20] = {0};
        ft_memmove(dst, src, 0);  // Zero-length copy
        printf("Test 4 - Zero-length move: %s\n", dst);  // Expected output: ""
    }

    // Test Case 5: NULL source and destination
    {
        if (ft_memmove(NULL, NULL, 5) == NULL)
            printf("Test 5 - NULL src and dst: Passed\n");  // Expected output: Passed
        else
            printf("Test 5 - NULL src and dst: Failed\n");
    }
printf("==============================================================\n");

}

// ft_strlcpy()
void    test_ft_strlcpy()
{
printf("Testing ft_strlcpy...\n");

 char src[] = "Hello, World!";
    char dst[50];  // Large enough buffer
    size_t result;

    // Test 1: dstsize is 0
    {
    result = ft_strlcpy(dst, src, 0);
    printf("Test 1 (dstsize = 0):\n");
    printf("Returned length: %zu\n", result);  // Should return 13 (length of "Hello, World!")
    printf("Destination: %s\n\n", dst);  // Should remain unchanged as no copy occurs
    }

    // Test 2: dstsize is larger than source string
    {
    result = ft_strlcpy(dst, src, sizeof(dst));
    printf("Test 2 (dstsize > src length):\n");
    printf("Returned length: %zu\n", result);  // Should return 13 (length of "Hello, World!")
    printf("Destination: %s\n\n", dst);  // Should contain "Hello, World!"
    }

    // Test 3: dstsize is exactly the length of the source string + 1 (enough space for null terminator)
    {
    result = ft_strlcpy(dst, src, 14);  // 13 chars + 1 null terminator
    printf("Test 3 (dstsize = src length + 1):\n");
    printf("Returned length: %zu\n", result);  // Should return 13
    printf("Destination: %s\n\n", dst);  // Should contain "Hello, World!"
    }

    // Test 4: dstsize is smaller than the source string (truncate)
    {
    result = ft_strlcpy(dst, src, 6);  // Buffer can only hold 5 chars + null terminator
    printf("Test 4 (dstsize < src length):\n");
    printf("Returned length: %zu\n", result);  // Should return 13 (length of "Hello, World!")
    printf("Destination: %s\n\n", dst);  // Should contain "Hello"
    }

    // Test 5: dstsize is 1 (only space for null terminator)
    {
    result = ft_strlcpy(dst, src, 1);
    printf("Test 5 (dstsize = 1):\n");
    printf("Returned length: %zu\n", result);  // Should return 13
    printf("Destination: %s\n\n", dst);  // Should be an empty string, because no characters can be copied
    }
    // Test 6: src is an empty string
    {
    result = ft_strlcpy(dst, "", sizeof(dst));
    printf("Test 6 (src is an empty string):\n");
    printf("Returned length: %zu\n", result);  // Should return 0
    printf("Destination: %s\n\n", dst);  // Should be an empty string
    }
    printf("==============================================================\n");
}

// ft_strlcat()
void    test_ft_strlcat()
{
    printf("Testing ft_strlcat...\n");
    char dst[20];
    const char *src;
    size_t dstsize;

    /* Test case 1: Enough space to concatenate both strings */
    strcpy(dst, "Hello ");
    src = "World";
    dstsize = 20;
    printf("Test 1 (Enough space):\n");
    printf("Result: %lu\n", ft_strlcat(dst, src, dstsize));
    printf("Expected: %s, Result: %s\n\n", "Hello World", dst);

    /* Test case 2: Not enough space to fit src fully */
    strcpy(dst, "Hello ");
    dstsize = 10;
    printf("Test 2 (Limited space):\n");
    printf("Result: %lu\n", ft_strlcat(dst, src, dstsize));
    printf("Expected: %s, Result: %s\n\n", "Hello Wo", dst);

    /* Test case 3: dstsize is too small to concatenate anything */
    strcpy(dst, "Hello ");
    dstsize = 6;
    printf("Test 3 (No space to concatenate):\n");
    printf("Result: %lu\n", ft_strlcat(dst, src, dstsize));
    printf("Expected: %s, Result: %s\n\n", "Hello", dst);

    /* Test case 4: Empty src string */
    strcpy(dst, "Hello");
    src = "";
    dstsize = 20;
    printf("Test 4 (Empty src):\n");
    printf("Result: %lu\n", ft_strlcat(dst, src, dstsize));
    printf("Expected: %s, Result: %s\n\n", "Hello", dst);

    /* Test case 5: Empty dst string */
    strcpy(dst, "");
    src = "Hello";
    dstsize = 20;
    printf("Test 5 (Empty dst):\n");
    printf("Result: %lu\n", ft_strlcat(dst, src, dstsize));
    printf("Expected: %s, Result: %s\n\n", "Hello", dst);
    
    printf("==============================================================\n");
}

// ft_strchr
void    test_ft_strchr()
{
    printf("Testing ft_strchr...\n");
    const char *test1 = "Hello, World!";
    const char *test2 = "Libft Project";
    const char *test3 = "";
    
    /* Testing with a character that exists in the string */
    printf("Test 1 (Existing char):\n");
    printf("Expected: %s\n", strchr(test1, 'W'));
    printf("Result  : %s\n", ft_strchr(test1, 'W'));
    printf("\n");

    /* Testing with a character that does not exist */
    printf("Test 2 (Non-existing char):\n");
    printf("Expected: %p\n", strchr(test1, 'Z'));
    printf("Result  : %p\n", ft_strchr(test1, 'Z'));
    printf("\n");

    /* Testing with the null terminator */
    printf("Test 3 (Null terminator):\n");
    printf("Expected: %s\n", strchr(test1, '\0'));
    printf("Result  : %s\n", ft_strchr(test1, '\0'));
    printf("\n");

    /* Testing an empty string */
    printf("Test 4 (Empty string):\n");
    printf("Expected: %s\n", strchr(test3, 'a'));
    printf("Result  : %s\n", ft_strchr(test3, 'a'));
    printf("\n");

    /* Testing with a repeated character */
    printf("Test 5 (Repeated character):\n");
    printf("Expected: %s\n", strchr(test2, 't'));
    printf("Result  : %s\n", ft_strchr(test2, 't'));
    printf("\n");
    printf("==============================================================\n");
}

// ft_strrchr
void    test_ft_strrchr() 
{
    printf("Testing ft_strrchr...\n");
    const char *test1 = "Hello, World!";
    const char *test2 = "Libft Project";
    const char *test3 = "";

    /* Testing with a character that exists in the string (appears more than once) */
    printf("Test 1 (Existing char, multiple occurrences):\n");
    printf("Expected: %s\n", strrchr(test1, 'o'));
    printf("Result  : %s\n", ft_strrchr(test1, 'o'));
    printf("\n");

    /* Testing with a character that exists only once in the string */
    printf("Test 2 (Existing char, single occurrence):\n");
    printf("Expected: %s\n", strrchr(test1, 'W'));
    printf("Result  : %s\n", ft_strrchr(test1, 'W'));
    printf("\n");

    /* Testing with a character that does not exist */
    printf("Test 3 (Non-existing char):\n");
    printf("Expected: %p\n", strrchr(test1, 'Z'));
    printf("Result  : %p\n", ft_strrchr(test1, 'Z'));
    printf("\n");

    /* Testing with the null terminator */
    printf("Test 4 (Null terminator):\n");
    printf("Expected: %s\n", strrchr(test1, '\0'));
    printf("Result  : %s\n", ft_strrchr(test1, '\0'));
    printf("\n");

    /* Testing an empty string */
    printf("Test 5 (Empty string):\n");
    printf("Expected: %s\n", strrchr(test3, 'a'));
    printf("Result  : %s\n", ft_strrchr(test3, 'a'));
    printf("\n");

    /* Testing with a repeated character in another string */
    printf("Test 6 (Repeated character in another string):\n");
    printf("Expected: %s\n", strrchr(test2, 't'));
    printf("Result  : %s\n", ft_strrchr(test2, 't'));
    printf("\n");

    printf("==============================================================\n");
}

// ft_strncmp
void    test_ft_strncmp()
{
    printf("Testing ft_strncmp...\n");

    const char *test1 = "Hello, World!";
    const char *test2 = "Hello";
    const char *test3 = "apple";
    const char *test4 = "banana";
    const char *test5 = "";
    
    /* Testing with equal strings, comparing fewer characters */
    printf("Test 1 (Equal strings, compare fewer chars):\n");
    printf("Expected: %d\n", strncmp(test1, "Hello, World!", 5));
    printf("Result  : %d\n", ft_strncmp(test1, "Hello, World!", 5));
    printf("\n");

    /* Testing with equal strings, comparing entire length */
    printf("Test 2 (Equal strings, compare full length):\n");
    printf("Expected: %d\n", strncmp(test1, "Hello, World!", 13));
    printf("Result  : %d\n", ft_strncmp(test1, "Hello, World!", 13));
    printf("\n");

    /* Testing with unequal strings, single difference within n */
    printf("Test 3 (Unequal strings, difference within n):\n");
    printf("Expected: %d\n", strncmp(test2, "HelLo", 5));
    printf("Result  : %d\n", ft_strncmp(test2, "HelLo", 5));
    printf("\n");

    /* Testing with unequal strings, first string smaller */
    printf("Test 4 (First string smaller):\n");
    printf("Expected: %d\n", strncmp(test3, test4, 5));
    printf("Result  : %d\n", ft_strncmp(test3, test4, 5));
    printf("\n");

    /* Testing with unequal strings, first string larger */
    printf("Test 5 (First string larger):\n");
    printf("Expected: %d\n", strncmp(test4, test3, 5));
    printf("Result  : %d\n", ft_strncmp(test4, test3, 5));
    printf("\n");

    /* Testing with an empty string */
    printf("Test 6 (Empty string vs non-empty string):\n");
    printf("Expected: %d\n", strncmp(test5, test2, 5));
    printf("Result  : %d\n", ft_strncmp(test5, test2, 5));
    printf("\n");

    /* Testing with n = 0 */
    printf("Test 7 (n = 0, should return 0):\n");
    printf("Expected: %d\n", strncmp(test2, test3, 0));
    printf("Result  : %d\n", ft_strncmp(test2, test3, 0));
    printf("\n");

    printf("==============================================================\n");

}

// ft_memcmp
void    test_ft_memcmp()
{
    printf("Testing ft_memcmp...\n");

    // Test case 1: Equal strings, compare full length
    printf("Test 1 (Equal strings, compare full length):\n");
    printf("Expected: %d\n", memcmp("Hello", "Hello", 5));
    printf("Result  : %d\n", ft_memcmp("Hello", "Hello", 5));
    printf("\n");

    // Test case 2: Unequal strings, difference at the first byte
    printf("Test 2 (Unequal strings, difference at first byte):\n");
    printf("Expected: %d\n", memcmp("Hello", "Jello", 5));
    printf("Result  : %d\n", ft_memcmp("Hello", "Jello", 5));
    printf("\n");

    // Test case 3: Unequal strings, difference in the middle
    printf("Test 3 (Unequal strings, difference in the middle):\n");
    printf("Expected: %d\n", memcmp("Hello", "HelLo", 5));
    printf("Result  : %d\n", ft_memcmp("Hello", "HelLo", 5));
    printf("\n");

    // Test case 4: Unequal strings, n is smaller than length
    printf("Test 4 (Unequal strings, n is smaller than length):\n");
    printf("Expected: %d\n", memcmp("Hello", "HelLo", 3));
    printf("Result  : %d\n", ft_memcmp("Hello", "HelLo", 3));
    printf("\n");

    // Test case 5: Unequal strings, n is larger than length
    printf("Test 5 (Unequal strings, n is larger than length):\n");
    printf("Expected: %d\n", memcmp("Hello", "Helloo", 6));
    printf("Result  : %d\n", ft_memcmp("Hello", "Helloo", 6));
    printf("\n");

    // Test case 6: Empty strings comparison
    printf("Test 6 (Empty strings comparison):\n");
    printf("Expected: %d\n", memcmp("", "", 5));
    printf("Result  : %d\n", ft_memcmp("", "", 5));
    printf("\n");

    // Test case 7: Empty string compared to non-empty string
    printf("Test 7 (Empty string vs non-empty string):\n");
    printf("Expected: %d\n", memcmp("", "Hello", 5));
    printf("Result  : %d\n", ft_memcmp("", "Hello", 5));
    printf("\n");

    // Test case 8: Binary data comparison (same data)
    unsigned char bin1[] = {0x01, 0x02, 0x03, 0x04};
    unsigned char bin2[] = {0x01, 0x02, 0x03, 0x04};
    printf("Test 8 (Binary data comparison, same data):\n");
    printf("Expected: %d\n", memcmp(bin1, bin2, 4));
    printf("Result  : %d\n", ft_memcmp(bin1, bin2, 4));
    printf("\n");

    // Test case 9: Binary data comparison (different data)
    unsigned char bin3[] = {0x01, 0x02, 0x03, 0x05};
    printf("Test 9 (Binary data comparison, different data):\n");
    printf("Expected: %d\n", memcmp(bin1, bin3, 4));
    printf("Result  : %d\n", ft_memcmp(bin1, bin3, 4));
    printf("\n");

    // Test case 10: n = 0, should return 0
    printf("Test 10 (n = 0, should return 0):\n");
    printf("Expected: %d\n", memcmp("Hello", "World", 0));
    printf("Result  : %d\n", ft_memcmp("Hello", "World", 0));
    printf("\n");

    printf("==============================================================\n");
}

// ft_memchr
void    test_ft_memchr()
{
    printf("Testing ft_memchr...\n");

    const char *str1 = "Hello, World!";
    const char *str2 = "Libft Project";
    const char *empty = "";

    // Test case 1: Find character 'o'
    printf("Test 1 (Find 'o'):\n");
    printf("Expected: %s\n", (char *)memchr(str1, 'o', strlen(str1)));
    printf("Result  : %s\n", (char *)ft_memchr(str1, 'o', strlen(str1)));
    printf("\n");

    // Test case 2: Find character at the start ('L')
    printf("Test 2 (Find 'L'):\n");
    printf("Expected: %s\n", (char *)memchr(str2, 'L', strlen(str2)));
    printf("Result  : %s\n", (char *)ft_memchr(str2, 'L', strlen(str2)));
    printf("\n");

    // Test case 3: Find character at the end ('!')
    printf("Test 3 (Find '!'):\n");
    printf("Expected: %s\n", (char *)memchr(str1, '!', strlen(str1)));
    printf("Result  : %s\n", (char *)ft_memchr(str1, '!', strlen(str1)));
    printf("\n");

    // Test case 4: Non-existing character ('x')
    printf("Test 4 (Non-existing 'x'):\n");
    printf("Expected: %p\n", memchr(str1, 'x', strlen(str1)));
    printf("Result  : %p\n", ft_memchr(str1, 'x', strlen(str1)));
    printf("\n");

    // Test case 5: Null terminator ('\0')
    printf("Test 5 (Null terminator '\\0'):\n");
    printf("Expected: %s\n", (char *)memchr(str1, '\0', strlen(str1) + 1));
    printf("Result  : %s\n", (char *)ft_memchr(str1, '\0', strlen(str1) + 1));
    printf("\n");

    // Test case 6: Empty string (search for 'a')
    printf("Test 6 (Empty string):\n");
    printf("Expected: %p\n", memchr(empty, 'a', 5));
    printf("Result  : %p\n", ft_memchr(empty, 'a', 5));
    printf("\n");

    // Test case 7: Searching for a character with n = 0 (should return NULL)
    printf("Test 7 (Search with n = 0):\n");
    printf("Expected: %p\n", memchr(str1, 'o', 0));
    printf("Result  : %p\n", ft_memchr(str1, 'o', 0));
    printf("\n");

    // Test case 8: Searching for a character within binary data
    unsigned char binary_data[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    printf("Test 8 (Binary data, find 0x03):\n");
    printf("Expected: %p\n", memchr(binary_data, 0x03, 5));
    printf("Result  : %p\n", ft_memchr(binary_data, 0x03, 5));
    printf("\n");

    printf("==============================================================\n");
}

// ft_atoi
void    test_ft_atoi()
{
    printf("Testing ft_atoi...\n");

    // Test case 1: Simple positive number
    printf("Test 1 (\"42\"):\n");
    printf("Expected: %d\n", atoi("42"));
    printf("Result  : %d\n", ft_atoi("42"));
    printf("\n");

    // Test case 2: Simple negative number
    printf("Test 2 (\"-42\"):\n");
    printf("Expected: %d\n", atoi("-42"));
    printf("Result  : %d\n", ft_atoi("-42"));
    printf("\n");

    // Test case 3: Number with leading spaces
    printf("Test 3 (\"   123\"):\n");
    printf("Expected: %d\n", atoi("   123"));
    printf("Result  : %d\n", ft_atoi("   123"));
    printf("\n");

    // Test case 4: Number with leading + sign
    printf("Test 4 (\"+123\"):\n");
    printf("Expected: %d\n", atoi("+123"));
    printf("Result  : %d\n", ft_atoi("+123"));
    printf("\n");

    // Test case 5: Number with leading - sign and spaces
    printf("Test 5 (\"   -123\"):\n");
    printf("Expected: %d\n", atoi("   -123"));
    printf("Result  : %d\n", ft_atoi("   -123"));
    printf("\n");

    // Test case 6: Zero input
    printf("Test 6 (\"0\"):\n");
    printf("Expected: %d\n", atoi("0"));
    printf("Result  : %d\n", ft_atoi("0"));
    printf("\n");

    // Test case 7: String starting with a non-numeric character
    printf("Test 7 (\"abc123\"):\n");
    printf("Expected: %d\n", atoi("abc123"));
    printf("Result  : %d\n", ft_atoi("abc123"));
    printf("\n");

    // Test case 8: String with numbers followed by letters
    printf("Test 8 (\"123abc\"):\n");
    printf("Expected: %d\n", atoi("123abc"));
    printf("Result  : %d\n", ft_atoi("123abc"));
    printf("\n");

    // Test case 9: Empty string
    printf("Test 9 (\"\"):\n");
    printf("Expected: %d\n", atoi(""));
    printf("Result  : %d\n", ft_atoi(""));
    printf("\n");

    // Test case 10: String with just spaces
    printf("Test 10 (\"   \"):\n");
    printf("Expected: %d\n", atoi("   "));
    printf("Result  : %d\n", ft_atoi("   "));
    printf("\n");

    // Test case 11: Maximum integer value
    printf("Test 11 (\"2147483647\"):\n");
    printf("Expected: %d\n", atoi("2147483647"));
    printf("Result  : %d\n", ft_atoi("2147483647"));
    printf("\n");

    // Test case 12: Minimum integer value
    printf("Test 12 (\"-2147483648\"):\n");
    printf("Expected: %d\n", atoi("-2147483648"));
    printf("Result  : %d\n", ft_atoi("-2147483648"));
    printf("\n");

    printf("==============================================================\n");

}
// ft_calloc()
void    test_ft_calloc()
{
 printf("Testing ft_calloc...\n");

    // Test case 1: Allocate memory for 5 integers
    printf("Test 1 (5 integers):\n");
    int *arr1 = (int *)ft_calloc(5, sizeof(int));
    if (arr1) {
        for (int i = 0; i < 5; i++) {
            printf("arr1[%d] = %d\n", i, arr1[i]);  // Expect all zeros
        }
        free(arr1);
    } else {
        printf("Memory allocation failed!\n");
    }
    printf("\n");

    // Test case 2: Allocate zero memory
    printf("Test 2 (0 size allocation):\n");
    int *arr2 = (int *)ft_calloc(0, sizeof(int));
    if (arr2 == NULL) {
        printf("Expected: NULL\n");
        printf("Result  : NULL\n");
    } else {
        printf("Result is not NULL (unexpected behavior)!\n");
        free(arr2);
    }
    printf("\n");

    // Test case 3: Allocate memory for 1000 characters
    printf("Test 3 (1000 characters):\n");
    char *arr3 = (char *)ft_calloc(1000, sizeof(char));
    if (arr3) {
        int all_zero = 1;
        for (int i = 0; i < 1000; i++) {
            if (arr3[i] != 0) {
                all_zero = 0;
                break;
            }
        }
        if (all_zero) {
            printf("Memory is correctly initialized to zero.\n");
        } else {
            printf("Memory is not initialized correctly!\n");
        }
        free(arr3);
    } else {
        printf("Memory allocation failed!\n");
    }
    printf("\n");

    // Test case 4: Allocate memory for a large block
    printf("Test 4 (large allocation):\n");
    size_t large_size = 1000000;
    int *arr4 = (int *)ft_calloc(large_size, sizeof(int));
    if (arr4) {
        printf("Large memory allocation successful.\n");
        free(arr4);
    } else {
        printf("Large memory allocation failed!\n");
    }
    printf("\n");

    // Test case 5: Allocate memory for a struct
    struct test_struct {
        int a;
        double b;
    };

    printf("Test 5 (struct allocation):\n");
    struct test_struct *arr5 = (struct test_struct *)ft_calloc(5, sizeof(struct test_struct));
    if (arr5) {
        for (int i = 0; i < 5; i++) {
            printf("arr5[%d].a = %d, arr5[%d].b = %f\n", i, arr5[i].a, i, arr5[i].b);  // Expect all zeros
        }
        free(arr5);
    } else {
        printf("Memory allocation failed!\n");
    }
    printf("\n");

    // Test case 6: Null comparison to calloc
    printf("Test 6 (comparison with calloc):\n");
    int *arr6 = (int *)ft_calloc(5, sizeof(int));
    int *arr7 = (int *)calloc(5, sizeof(int));

    if (arr6 && arr7) {
        if (memcmp(arr6, arr7, 5 * sizeof(int)) == 0) {
            printf("ft_calloc works similarly to calloc.\n");
        } else {
            printf("ft_calloc does not work like calloc!\n");
        }
        free(arr6);
        free(arr7);
    } else {
        printf("Memory allocation failed!\n");
    }
    printf("\n");

    printf("==============================================================\n");
}
// ft_strdup()
void    test_ft_strdup()
{
 printf("Testing ft_strdup...\n");

    // Test 1: Duplicating a simple string
    char *str1 = "Hello, World!";
    char *dup1 = ft_strdup(str1);
    printf("Test 1 (Simple string):\n");
    printf("Original: \"%s\"\n", str1);
    printf("Duplicate: \"%s\"\n", dup1);
    printf("Result: %s\n", (strcmp(str1, dup1) == 0) ? "Passed" : "Failed");
    free(dup1);
    printf("\n");

    // Test 2: Duplicating an empty string
    char *str2 = "";
    char *dup2 = ft_strdup(str2);
    printf("Test 2 (Empty string):\n");
    printf("Original: \"%s\"\n", str2);
    printf("Duplicate: \"%s\"\n", dup2);
    printf("Result: %s\n", (strcmp(str2, dup2) == 0) ? "Passed" : "Failed");
    free(dup2);
    printf("\n");

    // Test 3: Duplicating a string with spaces
    char *str3 = "   Hello   ";
    char *dup3 = ft_strdup(str3);
    printf("Test 3 (String with spaces):\n");
    printf("Original: \"%s\"\n", str3);
    printf("Duplicate: \"%s\"\n", dup3);
    printf("Result: %s\n", (strcmp(str3, dup3) == 0) ? "Passed" : "Failed");
    free(dup3);
    printf("\n");

    // Test 4: Duplicating a string with special characters
    char *str4 = "C@d3! $tr1ng!";
    char *dup4 = ft_strdup(str4);
    printf("Test 4 (Special characters):\n");
    printf("Original: \"%s\"\n", str4);
    printf("Duplicate: \"%s\"\n", dup4);
    printf("Result: %s\n", (strcmp(str4, dup4) == 0) ? "Passed" : "Failed");
    free(dup4);
    printf("\n");

    // Test 5: Duplicating a long string
    char *str5 = "This is a very long string to test ft_strdup. Let's see if it can handle larger strings properly!";
    char *dup5 = ft_strdup(str5);
    printf("Test 5 (Long string):\n");
    printf("Original: \"%s\"\n", str5);
    printf("Duplicate: \"%s\"\n", dup5);
    printf("Result: %s\n", (strcmp(str5, dup5) == 0) ? "Passed" : "Failed");
    free(dup5);
    printf("\n");

    // Test 6: Duplicating a large block of memory (performance check)
    char large_str[10000];
    memset(large_str, 'A', 9999);
    large_str[9999] = '\0';
    char *dup6 = ft_strdup(large_str);
    printf("Test 6 (Large block of memory):\n");
    printf("Result: %s\n", (strcmp(large_str, dup6) == 0) ? "Passed" : "Failed");
    free(dup6);
    printf("\n");

    printf("==============================================================\n");

}

// Additional 
// ft_substr()
void    test_ft_substr()
{
    printf("Testing ft_substr...\n");

    // Test 1: Substring with valid start and length
    char *str1 = "Hello, World!";
    char *sub1 = ft_substr(str1, 7, 5); // Expected output: "World"
    printf("Test 1 (Valid start and length):\n");
    printf("Original: \"%s\"\n", str1);
    printf("Substring: \"%s\"\n", sub1);
    printf("Result: %s\n", (strcmp(sub1, "World") == 0) ? "Passed" : "Failed");
    free(sub1);
    printf("\n");

    // Test 2: Substring with start at 0
    char *str2 = "Hello, World!";
    char *sub2 = ft_substr(str2, 0, 5); // Expected output: "Hello"
    printf("Test 2 (Start at 0):\n");
    printf("Original: \"%s\"\n", str2);
    printf("Substring: \"%s\"\n", sub2);
    printf("Result: %s\n", (strcmp(sub2, "Hello") == 0) ? "Passed" : "Failed");
    free(sub2);
    printf("\n");

    // Test 3: Substring with length exceeding available characters
    char *str3 = "Hello, World!";
    char *sub3 = ft_substr(str3, 7, 50); // Expected output: "World!"
    printf("Test 3 (Length exceeding available characters):\n");
    printf("Original: \"%s\"\n", str3);
    printf("Substring: \"%s\"\n", sub3);
    printf("Result: %s\n", (strcmp(sub3, "World!") == 0) ? "Passed" : "Failed");
    free(sub3);
    printf("\n");

    // Test 4: Substring when start is out of bounds
    char *str4 = "Hello, World!";
    char *sub4 = ft_substr(str4, 50, 5); // Expected output: ""
    printf("Test 4 (Start out of bounds):\n");
    printf("Original: \"%s\"\n", str4);
    printf("Substring: \"%s\"\n", sub4);
    printf("Result: %s\n", (strcmp(sub4, "") == 0) ? "Passed" : "Failed");
    free(sub4);
    printf("\n");

    // Test 5: Substring of an empty string
    char *str5 = "";
    char *sub5 = ft_substr(str5, 0, 5); // Expected output: ""
    printf("Test 5 (Empty string):\n");
    printf("Original: \"%s\"\n", str5);
    printf("Substring: \"%s\"\n", sub5);
    printf("Result: %s\n", (strcmp(sub5, "") == 0) ? "Passed" : "Failed");
    free(sub5);
    printf("\n");

    // Test 6: Substring of a string with special characters
    char *str6 = "C@d3! $tr1ng!";
    char *sub6 = ft_substr(str6, 2, 5); // Expected output: "d3! $"
    printf("Test 6 (Special characters):\n");
    printf("Original: \"%s\"\n", str6);
    printf("Substring: \"%s\"\n", sub6);
    printf("Result: %s\n", (strcmp(sub6, "d3! $") == 0) ? "Passed" : "Failed");
    free(sub6);
    printf("\n");

    // Test 7: Substring with a start at the last character
    char *str7 = "Hello, World!";
    char *sub7 = ft_substr(str7, 11, 5); // Start at index 11 to get "d!"
    printf("Test 7 (Start at the second-to-last character):\n");
    printf("Original: \"%s\"\n", str7);
    printf("Substring: \"%s\"\n", sub7);
    printf("Result: %s\n", (strcmp(sub7, "d!") == 0) ? "Passed" : "Failed");
    free(sub7);
    printf("\n");


    printf("==============================================================\n");
}

// ft_strjoin()
void    test_ft_strjoin()
{
    printf("Testing ft_strjoin...\n");

    // Test 1: Join two non-null strings
    char *str1 = "Hello, ";
    char *str2 = "World!";
    char *result1 = ft_strjoin(str1, str2); // Expected output: "Hello, World!"
    printf("Test 1 (Two non-null strings):\n");
    printf("String 1: \"%s\"\n", str1);
    printf("String 2: \"%s\"\n", str2);
    printf("Result: \"%s\"\n", result1);
    printf("Result: %s\n", (strcmp(result1, "Hello, World!") == 0) ? "Passed" : "Failed");
    free(result1);
    printf("\n");

    // Test 2: Join one non-null string with NULL
    char *str3 = "Only non-null";
    char *result2 = ft_strjoin(str3, NULL); // Expected output: "Only non-null"
    printf("Test 2 (Non-null string and NULL):\n");
    printf("String: \"%s\"\n", str3);
    printf("Result: \"%s\"\n", result2);
    printf("Result: %s\n", (strcmp(result2, "Only non-null") == 0) ? "Passed" : "Failed");
    free(result2);
    printf("\n");

    // Test 3: Join NULL with one non-null string
    char *str4 = NULL;
    char *str5 = "Only non-null";
    char *result3 = ft_strjoin(str4, str5); // Expected output: "Only non-null"
    printf("Test 3 (NULL and non-null string):\n");
    printf("String: \"%s\"\n", str5);
    printf("Result: \"%s\"\n", result3);
    printf("Result: %s\n", (strcmp(result3, "Only non-null") == 0) ? "Passed" : "Failed");
    free(result3);
    printf("\n");

    // Test 4: Join two empty strings
    char *str6 = "";
    char *str7 = "";
    char *result4 = ft_strjoin(str6, str7); // Expected output: ""
    printf("Test 4 (Two empty strings):\n");
    printf("String 1: \"%s\"\n", str6);
    printf("String 2: \"%s\"\n", str7);
    printf("Result: \"%s\"\n", result4);
    printf("Result: %s\n", (strcmp(result4, "") == 0) ? "Passed" : "Failed");
    free(result4);
    printf("\n");

    // Test 5: Join a non-empty string with an empty string
    char *str8 = "Non-empty";
    char *str9 = "";
    char *result5 = ft_strjoin(str8, str9); // Expected output: "Non-empty"
    printf("Test 5 (Non-empty string and empty string):\n");
    printf("String: \"%s\"\n", str8);
    printf("Result: \"%s\"\n", result5);
    printf("Result: %s\n", (strcmp(result5, "Non-empty") == 0) ? "Passed" : "Failed");
    free(result5);
    printf("\n");

    // Test 6: Join two strings with special characters
    char *str10 = "Sp3cial";
    char *str11 = "#Chars!";
    char *result6 = ft_strjoin(str10, str11); // Expected output: "Sp3cial#Chars!"
    printf("Test 6 (Special characters):\n");
    printf("String 1: \"%s\"\n", str10);
    printf("String 2: \"%s\"\n", str11);
    printf("Result: \"%s\"\n", result6);
    printf("Result: %s\n", (strcmp(result6, "Sp3cial#Chars!") == 0) ? "Passed" : "Failed");
    free(result6);
    printf("\n");

    // Test 7: Join two large strings
    char *str12 = "A";
    char *str13 = "B";
    char *result7 = ft_strjoin(str12, str13); // Expected output: "AB"
    printf("Test 7 (Large strings):\n");
    printf("String 1: \"%s\"\n", str12);
    printf("String 2: \"%s\"\n", str13);
    printf("Result: \"%s\"\n", result7);
    printf("Result: %s\n", (strcmp(result7, "AB") == 0) ? "Passed" : "Failed");
    free(result7);
    printf("\n");

    printf("==============================================================\n");
}

// ft_strtrim()
void    test_ft_strtrim()
{
    printf("Testing ft_strtrim...\n");

    char *result;
    const char *s1;
    const char *set;

    /* Test case 1: Trim from both ends */
    s1 = "   Hello World   ";
    set = " ";
    printf("Test 1 (Trim spaces from both ends):\n");
    result = ft_strtrim(s1, set);
    printf("Result: %s\n", result);
    printf("Expected: %s, Result: %s\n\n", "Hello World", result);
    free(result);  // Free memory if allocated dynamically

    /* Test case 2: Trim characters not in the set */
    s1 = "---Hello World---";
    set = "-";
    printf("Test 2 (Trim '-' from both ends):\n");
    result = ft_strtrim(s1, set);
    printf("Result: %s\n", result);
    printf("Expected: %s, Result: %s\n\n", "Hello World", result);
    free(result);

    /* Test case 3: String with no trim characters */
    s1 = "Hello World";
    set = " ";
    printf("Test 3 (No characters to trim):\n");
    result = ft_strtrim(s1, set);
    printf("Result: %s\n", result);
    printf("Expected: %s, Result: %s\n\n", "Hello World", result);
    free(result);

    /* Test case 4: Empty string */
    s1 = "";
    set = " ";
    printf("Test 4 (Empty s1):\n");
    result = ft_strtrim(s1, set);
    printf("Result: %s\n", result);
    printf("Expected: %s, Result: %s\n\n", "", result);
    free(result);

    /* Test case 5: Empty set */
    s1 = "  Hello World  ";
    set = "";
    printf("Test 5 (Empty set):\n");
    result = ft_strtrim(s1, set);
    printf("Result: %s\n", result);
    printf("Expected: %s, Result: %s\n\n", "  Hello World  ", result);
    free(result);

    /* Test case 6: Trim multiple different characters */
    s1 = "xyzHello Worldxyz";
    set = "xyz";
    printf("Test 6 (Trim 'xyz' from both ends):\n");
    result = ft_strtrim(s1, set);
    printf("Result: %s\n", result);
    printf("Expected: %s, Result: %s\n\n", "Hello World", result);
    free(result);

    printf("==============================================================\n");
}

// ft_split()
void test_ft_split()
{
   printf("Testing ft_split...\n");

// Test 1: Basic split with a single delimiter
char *str1 = "Hello,World!";
char **result1 = ft_split(str1, ','); // Expected output: ["Hello", "World!"]
printf("Test 1 (Basic split):\n");
for (int i = 0; result1[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result1[i]);
}
free_split_result(result1);
printf("\n");

// Test 2: Split with multiple delimiters
char *str2 = "a,b,c,d";
char **result2 = ft_split(str2, ','); // Expected output: ["a", "b", "c", "d"]
printf("Test 2 (Multiple delimiters):\n");
for (int i = 0; result2[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result2[i]);
}
free_split_result(result2);
printf("\n");

// Test 3: Split with consecutive delimiters
char *str3 = "Hello,,World!";
char **result3 = ft_split(str3, ','); // Expected output: ["Hello", "", "World!"]
printf("Test 3 (Consecutive delimiters):\n");
for (int i = 0; result3[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result3[i]);
}
free_split_result(result3);
printf("\n");

// Test 4: Split with a delimiter at the start
char *str4 = ",Hello,World!";
char **result4 = ft_split(str4, ','); // Expected output: ["", "Hello", "World!"]
printf("Test 4 (Delimiter at start):\n");
for (int i = 0; result4[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result4[i]);
}
free_split_result(result4);
printf("\n");

// Test 5: Split with a delimiter at the end
char *str5 = "Hello,World!,";
char **result5 = ft_split(str5, ','); // Expected output: ["Hello", "World!", ""]
printf("Test 5 (Delimiter at end):\n");
for (int i = 0; result5[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result5[i]);
}
free_split_result(result5);
printf("\n");

// Test 6: Split empty string
char *str6 = "";
char **result6 = ft_split(str6, ','); // Expected output: [""]
printf("Test 6 (Empty string):\n");
for (int i = 0; result6[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result6[i]);
}
free_split_result(result6);
printf("\n");

// Test 7: Split a string with spaces
char *str7 = "   Hello World!   ";
char **result7 = ft_split(str7, ' '); // Expected output: ["", "", "", "Hello", "World!", "", "", "", ""]
printf("Test 7 (String with spaces):\n");
for (int i = 0; result7[i] != NULL; i++) {
    printf("Result[%d]: \"%s\"\n", i, result7[i]);
}
free_split_result(result7);
printf("\n");

printf("==============================================================\n");
}

// ft_putchar_fd()
// TODO study fd and meanings...
void test_ft_putchar_fd()
{
printf("Testing ft_putchar_fd...\n");

    // Test case 1: Write to standard output (stdout)
    printf("Test case 1: Writing 'A' to stdout\n");
    ft_putchar_fd('A', STDOUT_FILENO);  // Should print 'A' to the terminal
    printf("\n");

    // Test case 2: Write to standard error (stderr)
    printf("Test case 2: Writing 'B' to stderr\n");
    ft_putchar_fd('B', STDERR_FILENO);  // Should print 'B' to the terminal's stderr
    printf("\n");

    // Test case 3: Write to a file
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Failed to open file");
        return;
    }
    printf("Test case 3: Writing 'C' to a file 'test_output.txt'\n");
    ft_putchar_fd('C', fd);  // Should write 'C' to the file
    close(fd);
    printf("\n");

    // Test case 4: Invalid file descriptor
    printf("Test case 4: Writing 'D' to an invalid file descriptor\n");
    ft_putchar_fd('D', -1);  // Should not crash, but likely produce an error
    printf("\n");
    
    printf("==============================================================\n");
}

// ft_putstr_fd()
void test_ft_putstr_fd()
{
     printf("Testing ft_putstr_fd...\n");

    // Test case 1: Writing to stdout
    printf("Test case 1: Writing 'Hello, World!' to stdout\n");
    ft_putstr_fd("Hello, World!", STDOUT_FILENO);  // Should print to the console
    printf("\n");

    // Test case 2: Writing to stderr
    printf("Test case 2: Writing 'Error!' to stderr\n");
    ft_putstr_fd("Error!", STDERR_FILENO);  // Should print to stderr
    printf("\n");

    // Test case 3: Writing to a file
    printf("Test case 3: Writing 'File test' to 'test_output2.txt'\n");
    int fd = open("test_output2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        printf("Error opening file for Test case 3\n");
    }
    else
    {
        ft_putstr_fd("File test", fd);  // Should write to test_output.txt
        close(fd);
        printf("Check 'test_output2.txt' for the result\n");
    }

    // Test case 4: Null string
    printf("Test case 4: Passing NULL string (No output expected)\n");
    ft_putstr_fd(NULL, STDOUT_FILENO);  // Should not print anything or crash
    printf("If no output or errors, the test passed.\n");

    // Test case 5: Writing to an invalid file descriptor
    printf("Test case 5: Writing to an invalid file descriptor\n");
    ft_putstr_fd("This should not print", -1);  // Invalid file descriptor
    printf("No crash means the test passed.\n");

    printf("\n==============================================================\n");
}

// ft_putendl_fd()
void test_ft_putendl_fd()
{
    printf("Testing ft_putendl_fd...\n");

    // Test case 1: Writing to stdout
    printf("Test case 1: Writing 'Hello, World!' to stdout\n");
    ft_putendl_fd("Hello, World!", STDOUT_FILENO);  // Should print to the console with a newline

    // Test case 2: Writing to stderr
    printf("Test case 2: Writing 'Error!' to stderr\n");
    ft_putendl_fd("Error!", STDERR_FILENO);  // Should print to stderr with a newline

    // Test case 3: Writing to a file
    printf("Test case 3: Writing 'File test' to 'test_output.txt'\n");
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        printf("Error opening file for Test case 3\n");
    }
    else
    {
        ft_putendl_fd("File test", fd);  // Should write to test_output.txt with a newline
        close(fd);
        printf("Check 'test_output.txt' for the result\n");
    }

    // Test case 4: Null string
    printf("Test case 4: Passing NULL string (nothing should be printed)\n");
    ft_putendl_fd(NULL, STDOUT_FILENO);  // Should not print anything

    // Test case 5: Writing to an invalid file descriptor
    printf("Test case 5: Writing to an invalid file descriptor\n");
    ft_putendl_fd("This should not print", -1);  // Invalid file descriptor
    printf("No crash means the test passed.\n");

    printf("\n==============================================================\n");
}

int    main()
{
    // mandatory
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_strlen();
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_strlcpy();
    test_ft_strlcat();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strncmp();
    test_ft_memcmp();
    test_ft_memchr();
    test_ft_atoi();
    test_ft_calloc();
    test_ft_strdup();
    test_ft_substr();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_split();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    return (0);
}