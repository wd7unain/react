#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value, int size) {
	int isFull(){
	return rear == size - 1;
}
int isEmpty(){
	return ;
}
    if (isFull()) {
        printf("Queue is full.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d enqueued to queue.\n", value);
}

void dequeue() {
    if ( front == -1 || front > rear){
        printf("Queue is empty.\n");
        return;
    }
    printf("%d dequeued from queue.\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1;
    }
}

void displayQueue() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements are: ");
    int i;
    for ( i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int size, choice, value;

    printf("Enter the size of the queue: ");
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Size exceeds maximum limit of %d.\n", MAX_SIZE);
        return 1;
    }

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value, size);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                exit(0);
            default:
                printf("wrong choice try again.\n");
        }
    }

    return 0;
}
