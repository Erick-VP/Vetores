#include <stdio.h>
#include <stdlib.h>

int main() {

    int A[6] = {1,0,5,-2,-5,7};
    int variavel, i;
    variavel = A[0] + A[1] + A[5];

    A[4] = 100;

    for(i=0; i < 6; i++){
        printf("\n");
        printf("%d", A[i]);
    }

    return 0;
}