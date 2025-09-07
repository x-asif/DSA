#include <stdio.h>
int main(){
    int a[10][10] , i, j, r, c;
    printf("Enter the row and column of the matrix:\n");
    scanf("%d%d", r, c);
    printf("Enter the elements of the matrix :\n");
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++){
           printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the base address of the matrix:\n");
    scanf("%d", )
    int k = &a[10][10];


}