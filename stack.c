#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void init_stack(Stack *s) {
    s->top = -1;
}
int is_full(Stack *s) {
    return s->top == MAX_SIZE - 1;
}
int is_empty(Stack *s) {
    return s->top == -1;
}
void push(Stack *s, int value) {    if (is_full(s)) {
        printf("Stack overflow! Cannot push %d\n", value);
        return;
    }
    s->data[++s->top] = value;
}
int pop(Stack *s) {    if (is_empty(s)) {
        printf("Stack underflow! Cannot pop from an empty stack.\n");
        return -1; // Return -1 to indicate stack is empty
    }
    return s->data[s->top--];
}
int peek(Stack *s) {    if (is_empty(s)) {
        printf("Stack is empty! Cannot peek.\n");
        return -1; // Return -1 to indicate stack is empty
    }
    return s->data[s->top];
}


