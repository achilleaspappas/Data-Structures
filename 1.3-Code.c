#include <stdio.h>
#include <stdlib.h>

void read_data(int*);
void insertionSort(int*, int);

int main(void) {

    int *pop=(int*)malloc(100*sizeof(int));
    read_data(pop);

    for(int i=0; i<100; i++)   
        printf("%d ", pop[i]);

    free(pop);
    return 0; 
}

void read_data(int *pop) {

    for(int i=0; i<100; i++) {
        scanf("%d", &pop[i]);
        insertionSort(pop, i+1);
    }
    return;
}

void insertionSort(int *pop, int n) { 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = pop[i]; 
        j = i - 1; 
        while (j >= 0 && pop[j] > key) { 
            pop[j + 1] = pop[j]; 
            j = j - 1; 
        } 
        pop[j + 1] = key; 
    } 
} 