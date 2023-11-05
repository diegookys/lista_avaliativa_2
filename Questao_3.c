#include <stdio.h>

void somaMatrizes(int matrizA[4][4], int matrizB[4][4]){
int matrizResultado[4][4];
    
for(int i = 0; i < 4; i++){for(int j = 0; j < 4; j++){
        matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
    }
    }
    
    // PRINTF DA MATRIZ
    for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
        printf("%4d", matrizResultado[i][j]);
    }
    printf("\n");
    }
}

void subtraiMatrizes(int matrizA[4][4], int matrizB[4][4]){
    int matrizResultado[4][4];
    
    for(int i = 0; i < 4; i++){for(int j = 0; j < 4; j++){
        matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
    }
    }
    
    // PRINTF DA 2 PARTE
    for(int i = 0; i < 4; i++){for(int j = 0; j < 4; j++){
        printf("%4d", matrizResultado[i][j]);
    }
    printf("\n");
    }
}

void multiplicaMatrizes(int matrizA[4][4], int matrizB[4][4]) {
    int matrizResultado[4][4];
    
    for(int i = 0; i < 4; i++){for(int j = 0; j < 4; j++){
        matrizResultado[i][j] = 0;
        for(int k = 0; k < 4; k++){
        matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
    }
    }
    }
    
    // 3 PARTE
    for(int i = 0; i < 4; i++){for (int j = 0; j < 4; j++){
        printf("%4d", matrizResultado[i][j]);
    }
    printf("\n");
    }
}

int main(){
    int matrizA[4][4], matrizB[4][4];
    char operacao[5];
    
    // MATRIZ A & B
    for (int i = 0; i < 4; i++){for(int j = 0; j < 4; j++){
        scanf("%d", &matrizA[i][j]);
    }
    }
    
    for(int i = 0; i < 4; i++){for(int j = 0; j < 4; j++){
        scanf("%d", &matrizB[i][j]);
    }
    }
    
    scanf("%s", operacao);
    
    // CALCULO DA OPERACAO
    if(strcmp(operacao, "soma") == 0){
        somaMatrizes(matrizA, matrizB);
    }else if(strcmp(operacao, "sub") == 0){
        subtraiMatrizes(matrizA, matrizB);
    }else if(strcmp(operacao, "mult") == 0){
        multiplicaMatrizes(matrizA, matrizB);
    }
    
    return 0;
}
