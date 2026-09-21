#include <stdio.h>

int main() {
    unsigned char xlinha = 0;
    unsigned char xmin = 255;
    unsigned char xmax = 0;
    unsigned char x_pixel;
    unsigned char x;
    int n;

    scanf("%d", &n);

    printf("Digite o pixel de X:\n");
    scanf("%hhu", &x_pixel);

    xmin = x_pixel;
    xmax = x_pixel;

    for (int i = 1; i < n; i++) {
        scanf("%hhu", &x_pixel);
        if (x_pixel < xmin) {
            xmin = x_pixel;
        }

        if (x_pixel > xmax) {
            xmax = x_pixel;
        }

        scanf("%hhu", &x);

        if (x >= xmax) {
            xlinha = 1;
        } else {
            xlinha = 0;
        }

        printf("X maximo: %hhu\n", xmax);
        printf("X minimo: %hhu\n", xmin);
        printf("X linha: %hhu\n", xlinha);
    }

    return 0;
}