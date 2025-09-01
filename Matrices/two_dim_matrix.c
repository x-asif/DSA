#include <stdio.h>
int main (){
    int a[20][20], i , j , r, c;
    printf("Enter the row and column of matrix : \n");
    scanf("%d%d",&r,&c);
    printf("Enter the element of matrix :\n");
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The given matrix is :\n");
    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n"); // one row is completed.
          
    }
    printf("program is done .");
    return 0;


}