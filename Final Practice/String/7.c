#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    fgets(a, sizeof(a), stdin);
    char ch;
    int count = 0, len = strlen(a);
    scanf("%c", &ch);
    for (int i = 0; i < len; i++)
    {
        if (a[i] == ch)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}