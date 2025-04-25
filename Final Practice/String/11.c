#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int count[256] = {0};
    int max = 0;
    char result;

    fgets(a, sizeof(a), stdin);
    int i = 0;
    while (a[i] != '\0')
    {
        count[(int)a[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = (char)i;
        }
    }
    printf("%c\n%d", result, max);

    return 0;
}
