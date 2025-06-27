/******************************************************************************
 ******************************* DON'T COMPILE ********************************
 ******************************************************************************/

/*
 * A data structure. An abstract concept. STACK
 * A stack, like an array, can store multiple data items of the same type.
 * operations on a stack: 
 * 1. push(add it to "stack top"), 
 * 2. pop (remove it from the same end).
 * Can't modify an item that is not at the top of the stack
 * 
 * contents: array in C
 * top: position of the stack top
 */
#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100

/*
 * External variables
 * Since all function use these variables
 */ 

int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0; /* returning the expression */
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}


