#include <stdio.h>
#include <stdlib.h>

void read_data(int*);
int edison(int*);
void bubbleSort(int*, int);
void display(int);

int main(void) {

    int *table = (int*)malloc(10*sizeof(int));

    read_data(table);
    int helper = edison(table);
    display(helper);
    free(table);
    return 0;
}

void read_data(int *table) {

    printf("Δώσε 10 αριθμούς.\n");
    for(int i=0; i<10; i++) 
        scanf("%d", &table[i]);
    
    return;
}

int edison(int *table) {

    int count=1, max=0;
    bubbleSort(table, 10);
    for(int i=0; i<10; i++) 
        if(table[i]==table[i+1])
            count++;
        else  {
            if(count>max)
                max=count;

            count=1;
        }
    return max;
}

void bubbleSort(int *a, int n) {
   int i = 0, j = 0, tmp;
   for (i = 0; i < n; i++) {   
       for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) {  
               tmp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = tmp;
           }
       }
   }
   return;
}

void display(int helper) {

    printf("----------------------------------\n");
    printf("Αριθμός Μέγιστον εμφανίσεων: %d\n", helper);
    printf("----------------------------------\n");
    return;
}