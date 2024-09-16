#include <stdio.h>
#include "libft.h"
#include <wchar.h>
#include <string.h>

// wchar meaning wide-char
// To print any array in hexadecimal format
/*
 * printf("Hexadecimal: %x\n", value);    // Prints: f
 * printf("Padded Hex:  %02x\n", value);  // Prints: 0f
 */
void print_array(unsigned char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%02X ", arr[i]); // Print each byte in hexadecimal format
    }
    printf("\n");
}


// ft_isalpha()
void test_ft_isalpha()
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
void test_ft_isdigit()
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
void test_ft_isalnum()
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
void test_ft_isascii()
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
void test_ft_isprint()
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
void test_ft_toupper()
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
void test_ft_tolower()
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

void test_ft_strlen()
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
void test_ft_memset()
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
void test_ft_bzero()
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
void test_ft_memcpy()
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
void test_ft_memmove()
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
void test_ft_strlcpy()
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
void test_ft_strlcat()
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
void test_ft_strchr()
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
void test_ft_strrchr() 
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
void test_ft_strncmp()
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
void test_ft_memcmp()
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
void test_ft_memchr()
{

}

int main()
{
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
    return (0);
}