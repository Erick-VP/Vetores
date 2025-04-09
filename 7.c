#include <stdio.h>

int main(){

    int i;
    int maior = 0;
    int posicao = 0;
    int vetor[10];

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<10;i++){
        if (vetor[i] < vetor[i + 1])
        {
            maior = vetor[i + 1];
        }
        if (maior <= vetor[i])
        {
            posicao = i + 1;
        }
        
    }

    for(i=0;i<10;i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\n%d", maior);
    printf("\n%d", posicao);



    return 0;
}