#include <stdio.h>

//Bispo
int main() {
printf("\nBispo:\n");
for (int bispo = 0; bispo < 5; bispo++) {
    printf("Cima\n");
    printf("Direita\n");
}

//Torre
printf("\nTorre:\n");
int torre = 0;
    while (torre < 5) {
        printf("Direita\n");
        torre++;
    }

//Rainha
printf("\nRainha:\n");
int rainha = 0;
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);
    
//Cavalo
printf("\nCavalo:\n");
for (int cavalo1 = 0; cavalo1 < 2; cavalo1++) {
    printf("Baixo\n");
    
    int cavalo2 = 0;
    while (cavalo2 < cavalo1) {
        printf("Esquerda\n");
        cavalo2++;
    }
}

    return 0;
}
