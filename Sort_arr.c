#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inv(int x[], int n){
    int temp,i,j,m=(n-1)/2;
    for(i=0; i<m; i++){
        j = n-1-i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
}
int main() {
    int i,j;
    int a[5]={1,2,3,4,5};
    printf("The original arry is:");
    for(i=0; i<5; i++)
    printf("%d ",a[i]);
    printf("\n");
    inv(a,5);
    printf("The arry has been inverted:%d ",a[i]);
    for(i=0; i<5; i++)
    printf("%d ",a[i]);
    return 0;
}
