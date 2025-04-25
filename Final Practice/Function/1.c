#include <stdio.h>
void fibonacii(int n)
{
    int fibo, first = 0, second = 1;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            printf("%d ", i);
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
            printf("%d ", fibo);
        }
        
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fibonacii(n);
    return 0;
}
