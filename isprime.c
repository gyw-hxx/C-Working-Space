#include <stdio.h>
void IsPrime(int m);


int main (){
    int m;
    printf("请输入一个数：");
    scanf("%d",&m);
    IsPrime(m);
    return 0;
}

void IsPrime(int m){
    int i,j,is_prime;
    is_prime = 1;
    if (m <= 1){
    printf("%d不是质数",m);
    return;
    }
    for (i = 2; i*i<= m; i++){
        if (m % i == 0){
        is_prime = 0;
        break;
        }
    }
    if (is_prime == 1)
        printf("%d是质数",m);
        else{
            printf("%d不是质数",m);
        }
}