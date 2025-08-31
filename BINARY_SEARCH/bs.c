#include <stdio.h>
void bs(int[] , int n , int r , int l , int k)
{
    while(l <= r){
    int mid = (l+r)/2;
    for (int i = 0 ; i < n; i++)
    {
        if ( a[mid] == k)
        {
            printf("the element is found at %d " , mid);
            break;
        }
        else if (a[mid] < k ){
            l = mid + 1;
        }
        else
        {
            r = mid-1;
        }

    }
}

}
int main ()
{
    int a[100] , k , l = 0 , r , n;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    r = n-1;
    printf("Enter the elements of the array:\n");
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    printf("The array is : \n");
    for(int i=0; i < n ; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("Enter the search element: \n");
    scanf("%d",&k);

    bs(a, n, r , l, k );
    printf("The program is done.");
    return 0;
}