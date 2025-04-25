#include <stdio.h>
#include<string.h>
int main()
{
  char a[100];
  fgets(a, sizeof(a), stdin);
  int len = 0, i = 0;
  while (a[i] != 0)
  {
    len++;
    i++;
  }
  printf("Size of String = %d", len);

  return 0;
}