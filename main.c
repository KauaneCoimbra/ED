#include <stdio.h>

void func(int *,int *);
int main (){

    int x,y;
    printf("X=");
    scanf("%d",&x);
    scanf("%d",&y);

    func(&x,&y);

    printf("x= %d,y= %d\n",x,y);
    

     
    
    return 0;

}
void func(int *px, int *py){
    px=py;
    *py=(*py)*(*px);
    *px= *px+2;
}