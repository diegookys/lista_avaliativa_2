#include <stdio.h>

int main(){
    int conjunto[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &conjunto[i]);
    }
    
    // CONJUNTO PRE-FEITO
    for(int i = 0; i < 10; i++){
        if(i > 0){
            printf(" ");
        }
        printf("%d", conjunto[i]);
    }
        printf("\n");
    
    int tamanhoConjunto = 10;
    while(tamanhoConjunto > 1){
        
    // NOVO CONJUNTO
    for(int i = 0; i < tamanhoConjunto - 1; i++){
        conjunto[i] = conjunto[i] + conjunto[i + 1];
    }
        tamanhoConjunto--;
        
    for(int i = 0; i < tamanhoConjunto; i++){
        printf("%d", conjunto[i]);
        if(i < tamanhoConjunto - 1){
            printf(" ");
        }
        }
        printf("\n");
    }
    
    return 0;
}
