#include <stdio.h>
#include <string.h>

#define numeroJogadores 11

struct jogador{
    int forca;
    char posicao;
    char nome[31];
};

struct time{
    char nome[31];
    struct jogador jogadores[numeroJogadores];
};

float forcaPoderada(struct time time){
    float forca = 0;
    for(int i = 0; i < numeroJogadores; i++){
    switch(time.jogadores[i].posicao){
        case 'G': forca += 8*time.jogadores[i].forca; break;
        case 'L': forca += 10*time.jogadores[i].forca; break;
        case 'Z': forca += 5*time.jogadores[i].forca; break;
        case 'V': forca += 8*time.jogadores[i].forca; break;
        case 'M': forca += 11*time.jogadores[i].forca; break;
        case 'A': forca += 12*time.jogadores[i].forca; break;
    }
    }
    return forca / 100;
}

int main(){
    struct time times[2];

    // ESPACO DOS CARACTERES
    
    for(int i = 0; i < 2; i++){
    scanf(" %30[^\n] ", times[i].nome);
    
    for(int j = 0; j < numeroJogadores; j++){
    scanf(" %30[^;];%c;%d", times[i].jogadores[j].nome, &times[i].jogadores[j].posicao, &times[i].jogadores[j].forca);
    }
    }

    float forcaTimeA = forcaPoderada(times[0]);
    float forcaTimeB = forcaPoderada(times[1]);

    printf("%s: %.2f de forca\n", times[0].nome, forcaTimeA);
    printf("%s: %.2f de forca\n", times[1].nome, forcaTimeB);

    if(forcaTimeA > forcaTimeB){
        printf("%s eh mais forte\n", times[0].nome);
    }else if(forcaTimeB > forcaTimeA){
        printf("%s eh mais forte\n", times[1].nome);
    }else{
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}
