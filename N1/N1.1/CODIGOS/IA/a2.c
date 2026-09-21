#include <stdio.h>

int main()
{
    int n;
    double anterior, atual, proximo;
    double y;

    scanf("%d", &n);

    if(n < 3) {
        printf("erro\n");
        return 0;
    }

    scanf("%lf %lf", &anterior, &atual);

    for(int i = 2; i <= n - 1; i++) {

        scanf("%lf", &proximo);

        y = (anterior + atual + proximo) / 3.0;

        printf("%.2f\n", y);

        anterior = atual;
        atual = proximo;
    }

    return 0;
}