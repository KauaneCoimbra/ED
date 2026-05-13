#include<stdio.h>
/*Faça um programa para ler 10 números DIFERENTES a
serem armazenados em um vetor. Os dados deverão ser
armazenados no vetor na ordem que forem sendo lidos,  ̃
sendo que caso o usuário digite um número que já foi
digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado
pelo usuário deve ser pesquisado no vetor, verificando se
ele existe entre os números que já foram fornecidos.
Exibir na tela o vetor final que foi digitado*/
int main(){

    int i,j;
    int v[10];
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
        for(j = 0; j < i; j++){
            if(v[i] == v[j]){
                printf("Numero ja digitado, digite outro numero: ");
                scanf("%d",&v[i]);
                j--;
            }
        }
    }
    printf("Vetor final: ");
    for(i = 0; i < 10; i++){
        printf("%d ",v[i]);
    }
    printf("\n");


    return 0;

}