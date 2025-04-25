#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Printing 2D Array = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
  
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int sum = 0;
        while (j < n)
        {
            sum = sum + a[i][j];
            j++;
        }
        printf("sum for row %d = %d\n", i, sum);
    }
 
    for (int j = 0; j < n; j++)
    {
        int i = 0;
        int sum = 0;
        while (i < n)
        {
            sum = sum + a[i][j];
            i++;
        }
        printf("sum for col %d = %d\n", j, sum);
    }

    return 0;
}