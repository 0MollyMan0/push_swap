#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int         value;
    struct node *next;
}              Node;

typedef struct stack
{
    struct node *top;
}              Stack;

void    initStack(Stack *stack)
{
    stack->top = NULL;
}

int main(void)
{
    Stack *stack;

    stack = malloc(sizeof(Stack));
    initStack(stack);
    if (stack->top == NULL)
        printf("%s", "stack is init\n");
    free(stack);
    return 0;
}
