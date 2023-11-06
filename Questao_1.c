#include <stdio.h>

int main(){
int conjunto[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &conjunto[i]);
    }
    for(int i = 0; i < 10; i++){
        if(i > 0){
            printf(" ");
        }
        printf("%d", conjunto[i]);
    }
        printf("\n");
    
    int tamanhoDoConjunto = 10;
    while(tamanhoDoConjunto > 1){
        
    // NOVO CONJUNTO
    for(int i = 0; i < tamanhoDoConjunto - 1; i++){
        conjunto[i] = conjunto[i] + conjunto[i + 1];
    }
        tamanhoDoConjunto--;
        
    for(int i = 0; i < tamanhoDoConjunto; i++){
        printf("%d", conjunto[i]);
        if(i < tamanhoDoConjunto - 1){
            printf(" ");
        }
        }
        printf("\n");
    }
    
    return 0;
}
