#include<stdio.h>

int main(){
    //Program to print 1-N numbers
    int N,a;
    printf("Enter a positive number: \n");
    scanf("%d", &N);
    printf("Your input is %d\n", N);

    for (a = 1; a<=N; a++)
    {
        printf("%d\n", a);
    }
   return 0; 
}