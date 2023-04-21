#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LES 10
#define SIZE 100
#define AVG 50
#define STU 10

void read_data_1(char [][SIZE]);
void read_data_2(char [][SIZE], double []);
void bubble_sort(char [][SIZE], double []);

int main (void) {

    char str[LES][SIZE];
    double arr[AVG];

    for(int i=0; i< LES; i++) 
        *(arr+i)=0;

    read_data_1(str);
    read_data_2(str, arr);
    bubble_sort(str, arr);

    for (int i=0; i<LES; i++) 
            printf("%s", *(str+i));
    return 0;


    return 0;
}

void read_data_1(char str[][SIZE]) {

    for(int i=0; i< LES; i++) {
        printf("Δώσε όνομα μαθήματος (%d/10): ", i);
        fgets(*(str+i), SIZE, stdin);
    }

}

void read_data_2(char str[][SIZE], double arr[]) {

    int j=0;
    double temp=0;
    for(int i=0; i< STU; i++) {
        for(int j=0; j< LES; j++) {
            printf("Δώσε βαθμό για το μάθημα %s: ", *(str+j));
            scanf("%lf", &temp);
            *(arr+j) += temp;
        }
    }
    for(int k=0; k< LES; k++)
        *(arr+k) /= STU;
}

void bubble_sort(char str[][SIZE], double arr[]) {
	
    int i, j, reorder;
    double temp;
    char t[SIZE];
	for(i = 1; i < SIZE; i++) {
		    reorder = 0;
		for(j = SIZE-1; j >= i; j--) {

			if(arr[j] < arr[j-1]) {
				
				temp = arr[j];
                strcpy(t, *(str+i-1));
				arr[j] = arr[j-1];
                strcpy(*(str+i-1), *(str+i));
				arr[j-1] = temp;
                strcpy(*(str+i),t);

				reorder = 1;
            }
            else if (arr[j] == arr[j-1]) {

                if( strcmp( *(str+i-1),*(str+i) ) > 0  ) {

                    strcpy(t, *(str+i-1));
                    temp = arr[j];
                    strcpy(*(str+i-1), *(str+i));
				    arr[j] = arr[j-1];
                    strcpy(*(str+i),t);
				    arr[j-1] = temp;

                    reorder = 1;
                }
            }
	    }
		if(reorder == 0)
			return;
	}
}

       