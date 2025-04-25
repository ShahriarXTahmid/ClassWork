#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        printf("%c ", a[i]);
    }

    return 0;
}