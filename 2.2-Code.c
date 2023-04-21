#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
#define STD 10

void bubble_sort(char [][SIZE]);
void read_data(char [][SIZE]);

int main (void) {

    char str[STD][SIZE];
    read_data(str);
    bubble_sort(str);

    for (int i=0; i<STD; i++) 
            printf("%s", *(str+i));
    return 0;
}

void read_data(char str[][SIZE]) {

    for(int i=0; i<STD; i++) {
        printf("Δώσε όνομα φοιτητή: ");
        fgets(*(str+i), SIZE, stdin);
    }
}

void bubble_sort(char str[][SIZE]) {

    int i, j, reorder;
    char temp[SIZE];
	for(i = 1; i < SIZE; i++) {
	    reorder = 0;
        for(j = SIZE-1; j >= i; j--) {
			if( strcmp( *(str+i-1),*(str+i) ) > 0  ) {
			    strcpy(temp, *(str+i-1));
                strcpy(*(str+i-1), *(str+i));
                strcpy(*(str+i),temp);
				reorder = 1;
			}
		}
		if(reorder == 0)
			return;
	}
}

/*
    char temp[SIZE];
	for(int i = 1; i < STD; i++)
	{
        if( strcmp( *(str+i),*(str+i+1) ) < 0  ) {
            strcpy(temp, *(str+i-1));
            strcpy(*(str+i-1), *(str+i));
            strcpy(*(str+i),temp);
		}
	}
}*/