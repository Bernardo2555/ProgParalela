#include <omp.h>
#include <stdio.h>

int MAX=5;

void main(){
    int vet1[] = {1,2,3,4,5};
    int vet2[] = {6,7,8,9, 10};
    int soma[MAX];
    int i;

    for (i=0; i<MAX; i++){
        soma[i] = vet1[i] + vet2[i];
    }

    for (i=0; i<MAX; i++){
        printf("Valor das somas dos vetores: %d \n", soma[i]);
    }
}
