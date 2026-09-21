#include <stdio.h>

int main()
{
    unsigned char R, G, B, M;

    scanf("%hhu %hhu %hhu %hhu", &R, &G, &B, &M);

    R = (R & 254u) | ((M >> 2) & 1u);
    G = (G & 254u) | ((M >> 1) & 1u);
    B = (B & 254u) | (M & 1u);

    printf("R: %hhu\n", R);
    printf("G: %hhu\n", G);
    printf("B: %hhu\n", B);

    return 0;
}