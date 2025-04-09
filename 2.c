#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int valor[6] = {0};
    
    for(i=0;i<6;i++){
        scanf("%d", &valor[i]);
    }

    for(i=0;i<6;i++){
        printf("%d ", valor[i]);
    }



    return 0;
}