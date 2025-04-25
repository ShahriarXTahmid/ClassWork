#include <stdio.h>
int main()
{
    int n, j = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            arr[j] = i;
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}