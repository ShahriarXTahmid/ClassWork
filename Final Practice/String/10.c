#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[1000];
    fgets(a, sizeof(a), stdin);
    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = tolower(a[i]);
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] = toupper(a[i]);
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}