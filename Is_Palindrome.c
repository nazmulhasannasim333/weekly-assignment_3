#include <stdio.h>

int is_palindrome(char str[])
{
    int length = strlen(str);
    int is_palindrome = 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }
    return is_palindrome;
}

int main()
{
    char str[1001];
    scanf("%s", str);
    int result = is_palindrome(str);
    if (result)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}