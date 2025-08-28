#include <stdio.h>
int facto(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n*facto(n-1) ;
    }
}
int main ()
{
    int i , n;
    printf("Enter the number : ");
    scanf("%d", &i);
    n = facto(i);
    printf("The factorial of the number %d is : %d", i , n);
    return 0;
}