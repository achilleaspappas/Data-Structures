#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct book {
    char *title; 
	char *authors;
	int *code;
	double *prc;
};

int main(void) {
    struct book *ptr;
    ptr=(struct book*)malloc(sizeof(struct book));
    ptr->title=(char*)malloc(SIZE * sizeof(char));
    ptr->authors=(char*)malloc(SIZE * sizeof(char));
    ptr->code=(int*)malloc(sizeof(int));
    ptr->prc=(double*)malloc(sizeof(double));
        printf("Δώσε τίτλο βιβλίου: ");
            fgets(ptr->title, 100, stdin);
        printf("Δώσε συγγραφέα βιβλίου: ");
            fgets(ptr->authors, 100, stdin);
        printf("Δώσε κωδικό βιβλίου: ");
            scanf("%d", &ptr->code);
        printf("Δώσε τιμή βιβλίου: ");
            scanf("%lf", &ptr->prc);
        printf("%s\n", ptr->title);
        printf("%s\n", ptr->authors);
        printf("%d\n", ptr->code);
        printf("%lf\n", ptr->prc);
    free(ptr->title);
    free(ptr->authors);
    free(ptr->code);
    free(ptr->prc);
    free(ptr);
    return 0;
}