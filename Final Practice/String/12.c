#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int i, f=0;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for(i=0; a[i]!='\0' && b[i]!='\0'; i++){
        if(a[i]!=b[i]){
            f=1;
            break;
        }
    }
    

    return 0;
}