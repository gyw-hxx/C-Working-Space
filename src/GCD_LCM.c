#include <stdio.h>
int GCD(int x, int y){
    int r,temp;
    if(x < y){
        temp = x;
        x = y;
        y = temp;
    }
    

    while(y){
        r = x % y;
        x = y;
        y = r;
    }
    return(x);
}

int LCM(int x, int y){
    int min;
    min = (x * y) / GCD(x,y);
    return min;
}

int main(){
    int x,y,max,min;
    scanf("%d %d",&x,&y);
    max = GCD(x,y);
    min = LCM(x,y);
    printf("最大公约数为%d,最小公倍数为%d",max,min);
    return 0;
}