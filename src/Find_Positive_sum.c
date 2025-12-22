#include <stdio.h>
int Find_Postive_sum(int a[10]){
    int i,sum=0;
    for(i=0; i<10; i++){
        if(a[i] > 0)
            sum+=a[i];
    }
    return sum;

}
int main ()
{
   int i,j,a[10],max;
   for(i=0; i<10; i++){
        scanf("%d",&a[i]);
   }
   printf("%d",Find_Postive_sum(a));
   return 0;
   }
  
