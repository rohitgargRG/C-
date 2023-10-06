#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>  // for sleep

#define QUEUE_SIZE 12

typedef struct {
    int arr[QUEUE_SIZE];
    int front, rear;
} CircularQueue;

void initQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

void enqueue(CircularQueue *q, int data) {
    if ((q->rear + 1) % QUEUE_SIZE == q->front) {
        fprintf(stderr, "Queue is full.\n");
        return;
    }
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    q->arr[q->rear] = data;
    if (q->front == -1)
        q->front = q->rear;
}

int dequeue(CircularQueue *q) {
    if (q->front == -1) {
        fprintf(stderr, "Queue is empty.\n");
        return -1;
    }
    int data = q->arr[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else
        q->front = (q->front + 1) % QUEUE_SIZE;
    return data;
}

int getFront(CircularQueue *q) {
    if (q->front == -1) {
        fprintf(stderr, "Queue is empty.\n");
        return -1;
    }
    return q->arr[q->front];
}

bool isEmpty(CircularQueue *q) {
    return q->front == -1;
}

void displayClock(int hour, int minute) {
    printf("Time: %d : %d\n", hour, minute);
}

int main() {
    CircularQueue hourQueue;
    initQueue(&hourQueue);

    for (int i = 1; i <= 12; ++i)
        enqueue(&hourQueue, i);

    int minute = 0;

    while (1) {
        int hour = getFront(&hourQueue);
        dequeue(&hourQueue);
        enqueue(&hourQueue, hour);
        minute = (minute + 1) % 60;
        displayClock(hour, minute);

        if (minute == 0) {
            hour = dequeue(&hourQueue);
            enqueue(&hourQueue, hour);
        }

        sleep(3);
    }

    return 0;
}