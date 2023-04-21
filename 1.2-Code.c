#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_data(char*, char*);
int tesla(char*, char*);

int main(void) {

    char *str1=NULL, *str2=NULL;
    read_data(str1, str2);
    int var = tesla(str1, str2);

    if(var) printf("Περιέχεται\n");
    else printf("Δεν περιέχεται.\n");

    free(str1);
    free(str2);
    return 0;
}

void read_data(char *str1, char *str2) {

    char temp1[100], temp2[100];

    printf("------------------------------------------- \n");
    printf("Δώσε το πρώτο αλφαριθμιτικό.\n");  
    printf("------------------------------------------- \n");
    printf("--> "); 
    scanf("%s", temp1);
    int n1 = strlen(temp1);

    printf("------------------------------------------- \n");
    printf("Δώσε το δεύτερο αλφαριθμιτικό.\n");  
    printf("------------------------------------------- \n");
    printf("--> "); 
    scanf("%s", temp2);
    int n2 = strlen(temp2);

    str1 = (char*)malloc((n1+1)*sizeof(char));
    str2 = (char*)malloc((n2+1)*sizeof(char));
    strcpy(str1,temp1);
    strcpy(str2,temp2);
        
    return;
}

int tesla(char *str1, char *str2) {
    
    int helper = strlen(str1)-strlen(str2);
    int j=0;

    for (int i=helper; i<strlen(str1); i++) {
        if ( str1[i] != str2[j] )
            return 0;
        else j++;
    } 
    return 1;
}
