#include <stdio.h>
int main(){
    int j,c;
    char n[2][5]={"8980","9198"};
    for(j=3; j>=0; j--){
        c = n[0][j] + n[1][j] - 2 * '0';
        n[0][j]=c % 10 + '0';
    }
    for(j=0; j<=1; j++)
    puts(n[j]);
    return 0;
}