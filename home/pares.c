/* Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.*/

#include<stdio.h>

int main(){

    int i,vetor[10],count=0;

    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i] % 2 == 0){
            count++;
        }

    }
    printf("Quantidade de números pares : %d ",count);

    return 0;
}