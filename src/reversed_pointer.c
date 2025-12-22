#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char *p;
    scanf("%s",str);
    p = str+strlen(str)-1; 
    while (p>=str)
    {
        printf("%c", *p); 
        p--;               
    }
    printf("\n");
    return 0;
}