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
    printf("Old Array = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    n = n + 1;
    int x, pos;
    printf("Enter new element and position : ");
    scanf("%d %d", &x, &pos);
    for (int i = n - 1; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d xz", a[i]);
    }
    return 0;
}