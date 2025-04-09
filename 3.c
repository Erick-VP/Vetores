#include <stdio.h>

int main(){

    int i;
    int vetor[10];
    int square[10];

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    
    for(i=0;i<10;i++){
        square[i] = vetor[i] * vetor[i];
    }

    for(i=0;i<10;i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");
    for(i=0;i<10;i++){
        printf("%d ", square[i]);
    }


    return 0;
}