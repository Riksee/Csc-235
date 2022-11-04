#include<stdio.h>
#include<math.h>

int main(){
    //Program to solve a quadratic equation
    float a,b,c,rt1,rt2;
//To assign values to a,b,c
    printf("Enter the value of a of your quadratic equation: \n");
    scanf("%f", &a);
    printf("Enter the value of b of your quadratic equation: \n");
    scanf("%f", &b);
    printf("Enter the value of c of your quadratic equation: \n");
    scanf("%f", &c);

    rt1= (-b + sqrt(b*b-4*a*c))/ (2*a);
    rt2= (-b - sqrt(b*b-4*a*c))/ (2*a);
    //Formular derived from Mathematical formular for solving quadratic equations

    printf("The roots of your quadratic equation are %f and %f", rt1,rt2);
    //%f is used for float

    return 0;

}