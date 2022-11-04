#include <stdio.h>

int main() {
//Program to accept only 10 students' names
    int a,b= 10;
    char students[50];

    printf("Names of 10 students\n");

//For loop to set iteration limits
for(a=1; a<=b; a++){
    printf("Enter student's name: ");
    scanf("%[^\n]%*c", students);
     //(%[^\n]%*c) to accept all characters including spaces
    printf("Student's names are %s\n", students);
    }
return 0;
}



