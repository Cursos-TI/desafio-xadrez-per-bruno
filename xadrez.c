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
    

    return 0;
}
