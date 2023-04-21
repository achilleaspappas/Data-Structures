#include <stdio.h>
#include <stdlib.h>

int read_data (double*);
void pascal(double*, int, double*, double*, double*);
void termination(double*, double*, double*);

int main(void) {

    double max, min, avg, *table = NULL;
    
    int n=read_data(table);
    pascal(table, n, &max, &min, &avg);
    termination(&max, &min, &avg);
    free(table);
    return 0;
}

int read_data (double *table) {
    
    int n=0;
    double opt=0, temp[100];
    do {
        system("clear");
        printf("------------------------------------------- \n");
        printf("Έχεις δώσει %d στοιχεία από 100. \n", n);
        printf("Δώσε αριθμό στοιχείου ή -1 για τερματισμό. \n");  
        printf("------------------------------------------- \n");
        printf("--> "); 
        scanf("%lf", &opt);
        if (opt==-1) 
            break;
        else {    
            temp[n]=opt;
            n++;
        }
    } while (n<100);

    table = (double*)malloc(n*sizeof(double));

    for(int i=0; i<n; i++)
        table[i]=temp[i];

    return n;
}



void pascal(double *table, int n, double *max, double *min, double *avg)  {

    double sum=0;
    *min=table[0];
    *max=table[0];

    for(int i=0; i<n; i++) {
        if( table[i] > *max)  
            *max=table[i];
        else if( table[i] < *min )
            *min=table[i];

        sum+=table[i];
    }

    *avg = sum / (double) n;

    return;
}

void termination(double *max, double *min, double *avg) {

    printf("-----------------------------------------\n");
    printf("Το μέγιστο από τα στοιχεία είναι: %lf \n", *max);
    printf("Το ελάχιστο απο τα στοιχεία είναι: %lf \n", *min);
    printf("Ο μέσος όρος των στοιχέιων είναι: %lf \n", *avg);
    printf("-----------------------------------------\n");
    return;
}