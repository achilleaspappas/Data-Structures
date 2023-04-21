#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p;
    p=(int*)malloc(3*sizeof(int));
    printf("Δώσε 3 αριθμούς: ");
    for(int i=0; i<3; i++)
        scanf("%d", &p[i]);
    if(p[2]>=p[1] && p[2]>=p[0])
        printf("Ο μεγαλύτερος αριθμός είναι: %d\n", p[2]);
    else if(p[1]>=p[2] && p[1]>=p[0])
        printf("Ο μεγαλύτερος αριθμός είναι: %d\n", p[1]);
    else printf("Ο μεγαλύτερος αριθμός είναι: %d\n", p[0]);
    free(p);
    return 0;
}