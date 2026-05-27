#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Function to initialize stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to push element
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->items[++s->top] = value;
    printf("Pushed %d onto stack\n", value);
}

// Function to pop element
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    return s->items[s->top--];
}

// Function to peek at top element
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->items[s->top];
}

// Function to display stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Main function
int main() {
    Stack s;
    initStack(&s);
    
    // Perform stack operations
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    
    display(&s);
    
    printf("Top element: %d\n", peek(&s));
    
    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));
    
    display(&s);
    
    return 0;
}
