#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Check if queue is full
int isFull() {
    return (rear == MAX - 1);
}

// Check if queue is empty
int isEmpty() {
    return (front == -1 || front > rear);
}

// Enqueue operation
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
        printf("%d enqueued into queue\n", value);
    }
}

// Dequeue operation
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
    } else {
        printf("%d dequeued from queue\n", queue[front++]);
    }
}

// Display queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    return 0;
}