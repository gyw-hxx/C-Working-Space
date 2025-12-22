#include <stdio.h>
void swap(int * p1, int * p2);
int main(){
    int a, b;
    int *pointer_1, *pointer_2;
    pointer_1 = & a;
    pointer_2 = & b;
    scanf("%d,%d", &a,&b);
   
    if (pointer_1 < pointer_2){
        swap(pointer_1, pointer_2);
    }
    printf("最大值为： %d, 最小值为： %d",a,b);
    return 0;
}
void swap(int * p1,int * p2){
        int temple;
        temple = * p1;
        * p1 = * p2;
        * p2 = temple;
    }