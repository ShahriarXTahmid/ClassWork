#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Old array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    n = n - 1;
    int pos;
    printf("Enter the position to delete = ");
    scanf("%d", &pos);
    for (int i = n - 1; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}