#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Check if stack is full
int isFull() {
    return (top == MAX - 1);
}

// Check if stack is empty
int isEmpty() {
    return (top == -1);
}

// Push operation
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;   // ++top means increment first
        printf("%d pushed into stack\n", value);
    }
}

// Pop operation
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top--]); // use then decrement
    }
}

// Display stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    return 0;
}