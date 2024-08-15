#include <stdio.h>

#define MAXSIZE 8
int stack[MAXSIZE];
int top = -1;

/* Function to check if the stack is full */
int isfull() {
    return top == MAXSIZE - 1;
}

/* Function to insert (push) an element into the stack */
void push(int data) {
    if (!isfull()) {
        stack[++top] = data;
        printf("%d pushed onto stack\n", data);
    } else {
        printf("Stack is full, cannot push %d\n", data);
    }
}

/* Main function to take input and push onto stack */
int main() {
    int n, data;

    printf("Enter the number of elements to push into the stack: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        push(data);
    }

    return 0;
}
