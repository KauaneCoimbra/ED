#include <stdio.h>



int main(){

   int v[10],n,i;

  
   
   for(i=0;i<10;i++){
      scanf("%d",&v[i]);

   }
   printf("Valor de X: ");
   scanf("%d",&n);

   for(i=0;i<10;i++){
      if(v[i] % n ==0 ){
         printf("%d \n",v[i]);
      }

   }
   return 0;
}



