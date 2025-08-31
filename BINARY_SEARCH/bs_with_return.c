int binary_search(int*a, int n, int l, int r, int k)
{
    if(l >= r){
        return 0;
    }
    else
    {
        int mid = (l+r)/2;
        if(a[mid] == k){
            return mid +1;
        }
        else if(a[mid] < k)
        {
            r = mid -1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
#include <stdio.h>
int main ()
{
    int a[100] , l, r, n, m , k;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the searching element:\n");
    scanf("%d", &k);
    printf("Enter the array elements: \n");
    for(int i = 0; i < n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array is given: \n");
    for(int i = 0; i<n ; i++){
        printf("%d \t",a[i]);
    }
    printf("\n");
    r = n-1;
    l = 0;
    m = binary_search(a, n , l , r ,  k );
    if(m==0)
    {
        printf("\n");
        printf("\nElement is not found . \n");

    }
    else 
    {
        printf("Element is found.");
    }
    printf("\nProgram is done");
    return 0;


}