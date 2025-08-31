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
    int* a , l, r, n, m , k;
    printf("Enter the array size:\n");
    scanf("%d", &n);
    printf("Enter the searching element:\n");
    scanf("%d", &k);
    printf("Enter the array elements:");
    for(int i = 0; i < n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array is given:");
    for(int i = 0; i<n ; i++){
        printf("%d",a[i]);
    }
    r = n-1;
    l = 0;
    m = binary_search(a, n , l , r ,  k );
    if(m==0)
    {
        printf("Element is not found .");

    }
    else 
    {
        printf("Element is found.");
    }
    return 0;


}