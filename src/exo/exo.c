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

Node	*createNode(int value)
{
	Node *node = malloc(sizeof(Node));
	if (!node)
		return (NULL);
    node->value = value;
	node->next = NULL;
	return (node);
}

void    push(Stack **stack, int value)
{
	Node *node;
	Node *tmp;

	node = createNode(value);
	if (!(*stack)->top)
	{
		(*stack)->top = node;
		return ;
	}
	tmp = (*stack)->top;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
}

int	pop(Stack **stack)
{
	int res;
	Node *tmp;

	res = (*stack)->top->value;
	tmp = (*stack)->top;
	(*stack)->top = (*stack)->top->next;
	free(tmp);
	return (res);
}

int main(int ac, char **av)
{
    Stack *stack;
	Node	*tmp;
    int		i = 1;

    stack = malloc(sizeof(Stack));
    initStack(stack);
    if (stack->top == NULL)
        printf("%s", "stack is init\n");
	
	//test push//
    while (i < ac)
    {
		push(&stack, atoi(av[i]));	
		i++;
    }
	tmp = stack->top;
	printf("%s", "stack apres push:\n");
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("valeur du top de stack = %d\n", stack->top->value);
	//-----------//

	//test pop//
	pop(&stack);
	tmp = stack->top;
	printf("%s", "\nstack apres pop:\n");
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("valeur du top de stack = %d\n", stack->top->value);
	//-----------//
    free(stack);
    return 0;
}
