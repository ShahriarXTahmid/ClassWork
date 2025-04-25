#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        b[i] = a[i];
    }

    printf("Copied string = \n");
    for (int i = 0; i < len; i++)
    {
        printf("%c", b[i]);
    }

    return 0;
}