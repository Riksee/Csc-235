#include<stdio.h>
#include<string.h>

int main(){
    //Program to reverse a statement
    char statement[50];
    int lena,lenb;

    printf("Enter a statement: ");
    scanf("%[^\n]*c", statement);

//To find out the length of the statement
    lena= strlen(statement);

//For loop to iterate through every character in the statement for reversal
    for (lenb = lena-1; lenb>=0; lenb--)
    {
        printf("%c", statement[lenb]);
        //%c is to print a character
    }
    return 0;
}
