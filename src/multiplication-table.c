#include <stdio.h>
int main(){
    int i,j,level;
    scanf("%d",&level);
    for (i=1;i<=level;i++){
        for (j=1;j<=i;j++){
            printf("%d*%d=%-4d",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
} 