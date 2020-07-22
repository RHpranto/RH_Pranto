
#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if((num >= 0.0) || (num <= 0.0)){
        printf("Number Is Real/ Natural Number\n");
        }else{
            printf("Number Is Not Real/ Natural Number\n");

        }



  double   squareRoot =  sqrt(num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0\n");
        else
            printf("You entered a negative number.\n");
    } else
        printf("You entered a positive number.\n");


     if((num >= 0.0) && (num <= 0.0)){
        printf("Number Is Real/ Natural Number\n");
        }


    if(squareRoot == num){
            printf("Number Is IrreRational");
        }else {
            printf("Number Is Rational ");
    }


    return 0;
}
