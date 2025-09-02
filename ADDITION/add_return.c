#include <stdio.h>
float add(float, float);
int main (){
    float a, b;
    printf("Enter the values of a and b :\n");
    scanf("%f%f", &a, &b);
    float c = add(a, b);
    printf("The addition of %.2f and %.2f is %.2f", a, b, c);
    printf("\n");
    printf("The program is done.");
    return 0;

}
float add(float x , float y){
    float z = x + y;
    return z;
}