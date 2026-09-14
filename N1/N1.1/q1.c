#include<stdio.h>
int main() {
    unsigned char R,G,B,M;
    int d0,d1,d2;

    puts("Digite em ordem (R,G,B e M)");
    scanf("%hhu %hhu %hhu %hhu",&R,&G,&B,&M);
    
    d2 = (M >> 2) & 1;
    d1 = (M >> 1) & 1;
    d0 = M & 1;

    R = ( R & 254) | (unsigned char)d2;
    G = ( G & 254) | (unsigned char)d1;
    B = ( B & 254) | (unsigned char)d0;

    printf("\nR: %hhu\n",R);
    printf("\nG: %hhu\n",G);
    printf("\nB: %hhu\n",B);

    return 0;
}