#include <stdio.h>
void ascend(int length, int a[length])
{
  int i = 0, j = 0;
  for (i = 0; i < length; i++)
  {
    for (j = 0; j < length - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

void descend(int length, int a[length])
{
  int i = 0, j = 0;
  for (i = 0; i < length; i++)
  {
    for (j = 0; j < length - i - 1; j++)
    {
      if (a[j] < a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
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
  ascend(n, a);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  descend(n, a);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}