#include <stdio.h>
int sumarray(int a[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int a[100], n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = sumarray(a, n);
    printf("sum = %d", sum);

    return 0;
}