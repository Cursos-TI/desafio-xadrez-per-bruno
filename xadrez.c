#include <stdio.h>

//Bispo
void moverBispo(int bispo) {
    if (bispo > 0) {
        for (int bispo1 = 0; bispo1 < 1; bispo1++) {
            printf("Cima\n");
            for (int bispo2 = 0; bispo2 < 1; bispo2++) {
                printf("Direita\n");
            }
        }
        moverBispo(bispo - 1);
    }
}

//Torre
void moverTorre(int torre) {
    if (torre > 0) {
        printf("Direita\n");
        moverTorre(torre - 1);
    }
}

//Rainha
void moverRainha(int rainha) {
    if (rainha > 0) {
        printf("Esquerda\n");
        moverRainha(rainha - 1);
    }
}
 
//Cavalo
void moverCavalo() {
    int movimentos = 2;
    for (int i = 0; i <= movimentos; i++) {
        if (i == 2) {
            for (int j = 0; j < 2; j++) {
                if (j == 1) {
                    printf("Direita\n");
                    break;
                }
            }
        } else {
            printf("Cima\n");
        }
    }
}

int main() {
   
    // Bispo
    printf("\nBispo:\n");
    moverBispo(5);

    // Torre
    printf("\nTorre:\n");
    moverTorre(5);

    // Rainha
    printf("\nRainha:\n");
    moverRainha(8);

    // Cavalo
    printf("\nCavalo:\n");
    moverCavalo();

    return 0;
}
