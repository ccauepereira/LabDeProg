#include <stdio.h>

int main()
{
    int n;

    unsigned char pixel;
    unsigned char xmin;
    unsigned char xmax;
    unsigned char x;

    double xlinha;

    scanf("%d", &n);

    if(n <= 0) {
        printf("erro\n");
        return 0;
    }

    scanf("%hhu", &pixel);

    xmin = pixel;
    xmax = pixel;

    for(int i = 1; i < n; i++) {

        scanf("%hhu", &pixel);

        if(pixel < xmin) {
            xmin = pixel;
        }

        if(pixel > xmax) {
            xmax = pixel;
        }
    }

    scanf("%hhu", &x);

    if(xmax == xmin) {
        printf("Normalizacao indefinida.\n");
        return 0;
    }

    xlinha =
        ((double)x - xmin) /
        ((double)xmax - xmin);

    printf("X minimo: %hhu\n", xmin);
    printf("X maximo: %hhu\n", xmax);
    printf("X linha: %.4f\n", xlinha);

    return 0;
}