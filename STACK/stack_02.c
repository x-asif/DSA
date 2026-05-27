#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// Node structure for linked list based stack
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} LinkedListStack;

// Function to initialize stack
void initStack(LinkedListStack *s) {
    s->top = NULL;
}

// Function to check if stack is empty
int isEmpty(LinkedListStack *s) {
    return s->top == NULL;
}

// Function to push element
void push(LinkedListStack *s, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
    printf("Pushed %d onto stack\n", value);
}

// Function to pop element
int pop(LinkedListStack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    Node *temp = s->top;
    int value = temp->data;
    s->top = s->top->next;
    free(temp);
    return value;
}

// Function to peek at top element
int peek(LinkedListStack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->top->data;
}

// Function to display stack
void display(LinkedListStack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    Node *current = s->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to get stack size
int getSize(LinkedListStack *s) {
    int count = 0;
    Node *current = s->top;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Function to clear the stack
void clearStack(LinkedListStack *s) {
    while (!isEmpty(s)) {
        pop(s);
    }
    printf("Stack cleared\n");
}

// Main function
int main() {
    LinkedListStack s;
    initStack(&s);
    
    // Perform stack operations
    push(&s, 5);
    push(&s, 15);
    push(&s, 25);
    push(&s, 35);
    push(&s, 45);
    
    display(&s);
    printf("Stack Size: %d\n", getSize(&s));
    
    printf("Top element: %d\n", peek(&s));
    
    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));
    
    printf("Stack Size: %d\n", getSize(&s));
    display(&s);
    
    clearStack(&s);
    display(&s);
    
    return 0;
}
