#include <stdio.h>
#include <stdlib.h>
// hum sbse phle globally ek node ko bnaynge jo ki 
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
// ab hum main function likhenge isse phle insert_begin function ka prototype declare krenge
void insert_begin(int);
int main(){
    insert_begin(9);
    insert_begin(4);
    insert_begin(5);
    struct node *q = head;
    while(q != NULL){
        printf("%d\t", q -> data);
        q = q ->next;  
    } 
}
void insert_begin(int n){
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p -> data = n;
    p -> next = head;
    head = p;
  
}






