#include "libft.h"
int main(){
    // system("clear");
    // puts("Start of Program...");
    // int i = 0127;
    // printf("(isalpha)The answer (6) is: %d\n", ft_isalpha('6'));
    // printf("(isdigit)The answer (b) is: %d\n", ft_isdigit('b'));
    // printf("(isalnum)The answer (b) is: %d\n", ft_isalnum('b'));
    // printf("(isascii)The answer (b) is: %d\n", ft_isascii('b'));
    // printf("(isprint)The answer (b) is: %d\n", ft_isprint('b'));
    // printf("(strlen)The length of string is (10) equal to: %d\n", ft_strlen("Hello World"));
    // printf("The answer of (atoi('   -2147483648')) is: %d\n", ft_atoi("   -2147483648"));
    // Function ft_toupper
    // printf("The answer of (toupper('a')) is: %c\n", ft_toupper('a'));
    // printf("The answer of (toupper('Z')) is: %c\n", ft_toupper('Z'));
    // printf("The answer of (toupper('7')) is: %c\n", ft_toupper('7'));
    // Function ft_tolower
    // printf("The answer of (tolower('a')) is: %c\n", ft_tolower('a'));
    // printf("The answer of (tolower('Z')) is: %c\n", ft_tolower('Z'));
    // printf("The answer of (tolower('7')) is: %c\n", ft_tolower('7'));
    // void *v_arr;
    // int arr[] = {1,2,3,4,5};
    // v_arr = &arr;
    // int i = -1;
    // printf("Array size: %lu\n", (sizeof(arr)/sizeof(arr[0])));
    // while(++i < (sizeof(arr)/sizeof(arr[0])))
    // {
    //     printf("%d\n", *(arr + i));
    // }

    // memcpy and memmove
//    char str[] = "This is example!";
//    char str1[] = "This is example!";
//    printf("%s\n", str);
//    printf("%s\n", str1);
//    ft_memcpy((str + 3), str, 10);
//    ft_memmove((str1 + 3), str1, 10);
//    printf("%s\n", str);
//    printf("%s\n", str1);
//    // memset
//    char str2[] = "This is example!";
//    ft_memset(str2, -14, 16);
//    printf("%s\n", str2);

    // trim
    char a[] = "acArsenabc";
    char b[] = "abc";
    printf("%s\n", ft_strtrim(a, b));
    return (0);
}