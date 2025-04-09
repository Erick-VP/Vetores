#include <stdio.h>

int main() {
    int i, x, y;
    int vetor[8];

    for(i=0;i<8;i++){
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d", vetor[x] + vetor[y]);
    return 0;
}