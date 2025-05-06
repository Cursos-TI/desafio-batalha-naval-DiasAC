#include <stdio.h>

int main() {
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};  // indicando as variaveis, usando vetor e matriz.
    int tabuleiro[10][10] = {0}; 
    int navio_vertical[3] = {7,8,9};
    int navio_horizontal[3] = {5, 6, 7}; 

    printf("*** Batalha Naval ***\n\n");


    for (int i = 0; i < 3; i++) {                  // impressao dos navios no formato horizontal.
        tabuleiro[4] [navio_horizontal[i]] = 3;
        
    }

    for (int i = 0; i < 3; i++){                 // impressao dos navios no formato vertical.
        tabuleiro[navio_vertical[i]][9] = 3;
    }

    printf("   ");
    for (int i = 0; i < 10; i++) {       // exibiçao da coluna.
        printf(" %c", coluna[i]);
    }
    printf("\n");

    
    for (int i = 0; i < 10; i++) {             // exibiçao do tabuleiro.
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}