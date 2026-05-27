#include <stdio.h>
#include <math.h>

int main(){
    int a , b , c;
    printf("Enter number :");
    scanf("%d%d", &a, &b);
    c = pow(a, b);
    printf("%d to the power of %d is = %d ",a, b, c);
    printf("\nProgram is run successfully.");
        
}