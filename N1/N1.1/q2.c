#include<stdio.h>
int main(){
    int n;
    float y;
    float x_anterior,x_atual,x_proximo;

    scanf("%d",&n);
    if(n<3){
        puts("erro");
    }else{
        scanf("%f %f",&x_anterior,&x_atual);

        for(int i = 2; i<=n-1; i++){
        scanf("%f",&x_proximo);

        y = (x_anterior + x_atual + x_proximo)/3.0f;

        printf("Y: %.2f\n",y);
        
        x_anterior = x_atual;
        x_atual = x_proximo;
        }
    }
    return 0;

}