#include <stdio.h>
#include <string.h>
void CheckPalindrome(int len, char a[len])
{
    char b[len];
    int j=0;
    for (int i = len - 1; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    if (strcmp(a, b) == 0)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not Palindrome!");
    }
}
int main()
{
    char a[100];
    scanf("%s",a);
    int len = strlen(a);
    CheckPalindrome(len, a);

    return 0;
}