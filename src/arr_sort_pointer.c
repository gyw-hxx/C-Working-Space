#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(int x[],int n){
    int i,j,k,t;
    for(i=0; i<n-1; i++){
        k=i; //假设最大值的索引为k
        for(j=i+1; j<n; j++){ //内层循环,寻找最大值
            if(x[j] > x[k]) //如果找到在最大值,则代替k的索引
                k=j;
            }  
                if(k!=i){     //如果索引不是最大值的,就交换位置
                    t=x[i];
                    x[i]=x[k];
                    x[k]=t;
                }
    }
}       
int main() {
    int N,i,*p,*a;
    scanf("%d",&N);
    a = (int*)malloc(N * sizeof(int)); //动态分配数组内存,堆空间大更安全
    if (a==NULL){
        printf("内存分配失败\n");
        return 1;
    }
    for(i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    printf("原始的值为:");
    for(i=0; i<N; i++){
       printf("%d ",*(a+i));
    }
    printf("\n");
    sort(a,N);
    printf("从大到小排序的值为:");
    for(p=a; p<(a+N); p++){
       printf("%d ",*p);
    }
    printf("\n"); //释放内存
    free(a);
    return 0;
}
