#include <stdio.h>

int main(){
    int i;
    int contador = 0;
    int vetor[10];

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    
    for(i=0;i<10;i++){
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
            contador++;}
        ;
    }

    printf("\n%d", contador);




    return 0;
}