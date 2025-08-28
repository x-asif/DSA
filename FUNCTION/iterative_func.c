#include <stdio.h>
void facto(int n ){
    int i , fact=1;
    for(i = n; i > 1 ; i--)
    {
        fact = fact*i;
    }
    printf("the factorial of %d is : %d", n , fact);

}
int main(){
    int k;
    printf("Enter the number :");
    scanf("%d", &k);
    facto(k);
    return 0;
}