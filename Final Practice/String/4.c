#include <stdio.h>
int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    int count = 0, i = 0;
    while (a[i] != 0)
    {
        if (a[i] == 32)
        {
            count++;
        }
        i++;
    }
    printf("Total words = %d", count+1);

    return 0;
}
