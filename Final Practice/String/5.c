#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int len1 = strlen(a);
    for (int j = 0; b[j] != '\0'; j++, len1++)
    {
        a[len1] = b[j];
    }
    a[len1] = '\0';
    for (int i = 0; i < len1; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}