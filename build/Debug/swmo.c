#include <stdio.h>
int main( )
{
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++)
            printf(" "); //打印空格 是5-i 打印前5行
    for(j=1; j<=2*i-1; j++)
        printf("*");  //打印星号 是2*i-1
    printf("\n");
    }
    for(i=4; i>=1; i--){
        for(j=1; j<=5-i; j++)
            printf(" ");
    for(j=1; j<=2*i-1; j++)
        printf("*");
    printf("\n");
    }
    return 0;    
    }

  
