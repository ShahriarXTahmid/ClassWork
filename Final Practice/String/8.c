#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);

    strncpy(b, a + 7, 5);
    printf("%s", b);

    return 0;
}