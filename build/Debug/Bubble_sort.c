#include <stdio.h>
#define N 5
int main(){
    int i,j,temp;
    int arr[N]={10,1,7,2,200};
    for (i = 0; i < N-1; i++){
        for (j = 0; j < N-1-i; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
