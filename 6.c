#include <stdio.h>

int main(){
    int i;
    int menor = 0;
    int maior = 0;
    int vetor[10];

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<10;i++){
        if (vetor[i] < vetor[i+1])
        {
            menor = vetor[i];
        }

        if (vetor[i] > vetor[i + 1])
        {
            maior = vetor[i];
        }
        
    }

printf("menor: %d \n", menor);
printf("maior: %d", maior);


}