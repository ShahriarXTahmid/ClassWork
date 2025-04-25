#include <stdio.h>
int main()
{
    int n, pos = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int num;
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            pos = i;
        }
    }
    printf("Position = %d in the array\n", pos);

    return 0;
}