#include <stdio.h>
#include <string.h>
int main()
{
    char a[20000];
    fgets(a, sizeof(a), stdin);
    int alpha = 0, digit = 0, ch = 0;
    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            alpha++;
        }
        else if ((a[i] >= 48 && a[i] <= 57))
        {
            digit++;
        }
        else
        {
            ch++;
        }
    }
    printf("Letters = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d\n", ch);

    return 0;
}