#include <stdio.h>
#include <string.h>
int main()
{
    char a[200];
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}