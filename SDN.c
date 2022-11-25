#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(){
    int SDN = 1;
    char test_case_number[100];
    int length_of_number;
    int counter = 0;
    int numbers_of_array[100];
    
    printf("A SELF DESCRIBING NUMBER PROGRAM\n");
    printf("\n");
    
    printf("ENTER TEST NUMBER: ");
    scanf("%s", test_case_number);
    length_of_number = strlen(test_case_number);
   
    
    for (int k = 0; k < length_of_number; k++) {
        numbers_of_array[k] = test_case_number[k] - '0';
    
    }
   for (int k = 0; k < length_of_number; k++) {
        printf("There are %d  %ds in the number \n", numbers_of_array[k],k);
    }
    for (int l = 0; l< length_of_number; l++) {
        for (int i = 0; i< length_of_number; i++) {
            if (numbers_of_array[i] == l) counter++;
        }
        if(counter == numbers_of_array[l]){
            SDN = 1;
        }
        else{
            SDN = 1;
            printf("\n");
            printf("not a Self-Describing Number %s \n", test_case_number);
            break;
        }
        counter = 0;
        if (SDN != 0){
            printf("\n");
            printf("is a Self-Describing Number %s \n", test_case_number);
            break;
        }
    }
    
}

