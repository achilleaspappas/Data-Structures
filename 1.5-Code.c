#include <stdio.h>
#include <stdlib.h>

void read_data(int*);
int * galileo(int*);
void bubbleSort(int*, int);
void display(int*);

int main(void) {

    int *table=(int*)malloc(100*sizeof(int));

    read_data(table);

    int *ptr=galileo(table);

    display(ptr);

    free(table);

    return 0;
}

void read_data(int *table) {
    
    printf("Δώσε τα στοιχεία του πίνακα");
    for(int i=0; i<5; i++)
        scanf("%d", &table[i]);
    return;
}

int * galileo(int *table) {

    int *ptr=&table[0];
    int count=1, max=0;
    bubbleSort(table, 5);

    for(int i=0; i<4; i++) {
        if(table[i]==table[i+1])
            count++;
        else  { 
            if(count>max) {
                max=count;
                ptr=&table[i+1];
            }

            count=0;
        }
    }

    if (count==1) return NULL;
    else return ptr;
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

void display(int *ptr) {

    printf("-----------------------------------------------------------\n");
    printf("Στην διεύθυνση %p βρίσκεται ο αριθμός %d\n", ptr, *ptr);
    printf("που είχε τις περισσότερες εμφανίσεις\n");
    printf("-----------------------------------------------------------\n");
    return;
}