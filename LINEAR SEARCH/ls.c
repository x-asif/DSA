#include <stdio.h>
int main ()
{
    int numbers[100] , searching_elements , temp = 0 , size_of_array ;
    printf("Enter the size of the array : ");
    scanf("%d", &size_of_array);
    printf("Enter the numbers i.e. elements :\n");
    for(int i = 0 ; i < size_of_array ; i++ )
    {
        scanf("%d",&numbers[i]);
    }
    printf("List of the elements entered is :");
    for(int i = 0 ; i < size_of_array ; i++ )
    {
        printf(" %d ", numbers[i]);
    }
    printf("\nEnter the element which is to be searched : ");
    scanf("%d",&searching_elements);
    for(int i = 0 ; i < size_of_array ; i++ )
    {
        if(numbers[i] == searching_elements )
        {
            temp = 1;
            break;
        }   

    }
    if (temp == 1)
    {
        printf("element is found.\n");
    }
    else 
    {
        printf("element is not found.\n");

    }
    printf("Program is done.\n");
    return 0;
}