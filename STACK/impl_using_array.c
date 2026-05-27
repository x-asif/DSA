#include <stdio.h>
#define X 10
int odd_num[X];
int top = -1;
void push(int n){
if(top == X-1){
    printf("The strings is overflow!");
}
else 
{
    top ++;
    odd_num[top] = n;
}
}
void pop(){
    int item;
    if (top == -1){
        printf("underflow");
    }
    else
    {
        item = odd_num[top];
        top--;
        printf("%d", item);
        printf("\n");
    }
}
void peek(){
    if (top == -1){
        printf("underflow");
    }
    else
    {
        printf("%d", odd_num[top]);
    }
}
void display(){
    if (top == -1){
        printf("there is no element in the stack");    
    }
    else 
    {
        int i = top;
        while( i != -1){
            printf("%d ",odd_num[i]);
            i--;
        }
        printf("\n");
    }
}
int main (){
    push(1000);
    pop();
    push(3);
    display();
}

  