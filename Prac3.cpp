#include <stdio.h>

int main() {
    char queue[10] = {' ', 'A', 'B', 'C', 'D', 'E'};
    int front, rear, ch;
    front = 1;
    rear = 5;

    do {
        printf("Menu:\n");
        printf("1.Enqueue F\n");
        printf("2.Dequeue two letters\n");
        printf("3.Enqueue G\n");
        printf("4.Enqueue H\n");
        printf("5.Dequeue four letters\n");
        printf("6.Enqueue I\n");
        printf("7.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch) {
            case 1:
                if (rear == 9) {
                    printf("Queue is full.\n");
                } else {
                    rear++;
                    queue[rear] = 'F';
                    printf("Updated queue is: ");
                    for (int i = 0; i < 10; i++) {
                        printf("%c ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                if (front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    for (int i = 0; i <= 1; i++) {
                        printf("Removed letter is %c\n", queue[front]);
                        front++;
                    }
                }
                break;
            case 3:
                if (rear == 9) {
                    printf("Queue is full.\n");
                } else {
                    rear++;
                    queue[rear] = 'G';
                    printf("Updated queue is: ");
                    for (int i = 0; i < 10; i++) {
                        printf("%c ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 4:
                if (rear == 9) {
                    printf("Queue is full.\n");
                } else {
                    rear++;
                    queue[rear] = 'H';
                    printf("Updated queue is: ");
                    for (int i = 0; i < 10; i++) {
                        printf("%c ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            case 5:
                if (front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    for (int i = 0; i <= 3; i++) {
                        printf("Removed letter is %c\n", queue[front]);
                        front++;
                    }
                }
                break;
            case 6:
                if (rear == 9) {
                    printf("Queue is full.\n");
                } else {
                    rear++;
                    queue[rear] = 'I';
                    printf("Updated queue is: ");
                    for (int i = 0; i < 10; i++) {
                        printf("%c ", queue[i]);
                    }
                    printf("\n");
                }
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (ch < 7);

    return 0;
}
