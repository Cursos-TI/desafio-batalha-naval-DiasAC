#include <stdio.h>

int main(){

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};  // Array(vetor) para indicar a coluna com letras.
    int tabuleiro[10][10] = {0}; // matriz do tabuleiro no tamanho de 10x10.
    int navio_vertical[3] = {7,8,9}; // variavel indicando o uso dos indices na vertical.
    int navio_horizontal[3] = {5, 6, 7}; // variavel indicando o uso dos indices na horizontal.
    int habilidade_cone[5][5];
    int habilidade_cruz[5][5];
    int habilidade_octaedro[5][5];


    printf("*** Batalha Naval ***\n\n");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (i = 2 && j ==2){
            habilidade_cruz[i][j] = 1;
            } else {
            habilidade_cruz[i][j] = 0;
            }
        }    
            
    }


    for (int i = 0; i < 3; i++){    // uso do loop for para imprimir o navio no formato diagonal primario.
        tabuleiro[i][i] = 3;
   
    }
   
    for (int i = 0; i < 3; i++){   // uso do loop for para imprimir o navio no formato diagonal secundario.
        tabuleiro[i][9 - i] = 3;
    }

    for (int i = 0; i < 3; i++) {                  // uso do loop for para imprimir o navio no formato horizontal
        tabuleiro[4] [navio_horizontal[i]] = 3;
        
    }

    for (int i = 0; i < 3; i++){                 // uso do loop for para imprimir o navio no formato vertical
        tabuleiro[navio_vertical[i]][9] = 3;
    }

    printf("   ");
    for (int i = 0; i < 10; i++) {       // uso do loop for para exibir a coluna.
        printf(" %c", coluna[i]);
    }
    printf("\n");

    
    for (int i = 0; i < 10; i++) {             // uso do loop aninhado para exibiçao do tabuleiro.
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}