#include <stdio.h>
int main(){
    int i,j,row=0,column=0,max;
    int a[4][3]={1,2,3,-1,-2,40,20,60,20,14,16,20};
    max=a[0][0];  //先认定a[0][0]是最大的
    for(i=0;i<=3;i++)
    for(j=0;j<=2;j++)
    if(a[i][j]>max){   //如果某元素比最大值还大,就取代max的值
        max=a[i][j];
        row=i;
        column=j;
    }
    printf("max=%d,max_row=%d,max_column=%d",a[i][j],row,column);
    return 0;
}