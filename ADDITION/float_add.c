#include <stdio.h>
void add(float, float);
int main (){
    float x, y;
    printf("two number x and y : \n");
    scanf("%f%f", &x , &y);
    add(x, y);
    printf("\n");
    printf("Program is done");
    return 0;
}
void add(float a, float b){
    float c = a + b;
    printf("the sum of two numbers %.2f and %.2f is %.2f", a, b, c);
}