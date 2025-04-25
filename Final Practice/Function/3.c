#include <stdio.h>
int maximum(int n, int a[n])
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int minimum(int n, int a[n])
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max, min;
    max = maximum(n, a);
    min = minimum(n, a);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}