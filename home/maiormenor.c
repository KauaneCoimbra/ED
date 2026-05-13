/*Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor.
*/

#include<stdio.h>

int main(){

   int i,vetor[10],maior=0,menor;

   for(i=0;i<10;i++){

      scanf("%d",&vetor[i]);

      if (i<1){
         menor=vetor[i];
      }
      if(vetor[i]>maior){
        maior=vetor[i];
      }
      if(vetor[i]<menor){
        menor=vetor[i];
      }

   }
   printf("Vetor :\n");
   for(i=0;i<10;i++){

      printf(" %d",vetor[i]);
    
   }
   printf("\n");
   printf("maior : %d\n",maior);
   printf("menor : %d",menor);
   printf("\n");

   return 0;

}