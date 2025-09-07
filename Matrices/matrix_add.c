#include <stdio.h>
int main (){
    int a[12][34], b[45][89], sum[45][88], i , j , r, c;
    printf("Enter the row and column of the matrices:\n");
    scanf("%d%d", &r, &c);
    printf("Enter the values of the matrix A\n");
    for(i=0; i< r; i++)
    {
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of the matrix B\n");
    for(i=0; i < r; i++)
    {
        for(j=0; j<c; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i< r; i++)
    {
        for(j=0; j<c; j++){
           sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of the matrices A and B is C = \n");
    for(i=0; i< r; i++)
    {
        for(j=0; j<c; j++){
           printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}