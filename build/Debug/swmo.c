#include <stdio.h>
int main( )
{
    int a[5][5], i, j, n=1;
    for ( i=0; i<5; i++)
        for ( j=0; j<5; j++)
            a[i][j]=n++ ;
    printf("The result is : \n");
    for ( i=0; i<5; i++){
    for ( j=0; j<=i; j++)
        printf (" %4d", a[i][j]);
    printf("\n");
    printf("\n");
    }
    return 0;
}