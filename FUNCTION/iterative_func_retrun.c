#include <stdio.h>
int facto(int n)
{
    int fact = 1;
    for(int i = n; i > 1 ; i--)
    {
        fact = fact*i;

    }
    return fact;

}
int main ()
{
    int k, l ;
    printf("Enter the number :");
    scanf("%d", &k);
    l = facto(k);
    printf("Factorial of the number %d is : %d ",k , l);
    return 0;

}