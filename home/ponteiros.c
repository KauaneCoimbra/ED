#include<stdio.h>

int main (){
    int v[5]={0,1,2,3,4};

    for(int i=0;i<5;i++){
        printf("&v[%d]= %p , v[%d]= %d\n",i,&v[i],i,v[i]);
    }

    printf("&v[5]= %p , v[5]= %d\n",&v[5],v[5]);

    return 0;
}