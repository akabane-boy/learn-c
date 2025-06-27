/* RPN calculator using a stack. */

/* #include directives */
#include <stdio.h>

/* #define */
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/*
 * ASCII:	'*': 42
 *		'+': 43
 *		'-': 45
 *		'/': 47
 *		'=': 61
 */

void push_or_compute(int c);
void push(int c);
void pop_and_compute(int c);
void show_result(void);

int main(void)
{
	int c;

	/* while loop - gets a character and give it to a function */
	for (;;;) {
		/* gets a character */
		scanf("%d ", &c);

		/* push or compute */
		if (push_or_compute(int c)) exit(EXIT_SUCCESS);
	}

	return 0;
}

void push_or_compute(int c)
{
	if (0 <= c && c <= 9) {
		push(c);
	} else if (c == 42 || c == 43 || c == 45 || c == 47) {
		pop_and_compute(c);
	} else if (c == 61) {
		show_result();
		return 1;
	}

	return 0;
}

void push(int c)
{
	if (top == STACK_SIZE) {
		printf("Expression is too complex.\n");
		exit(EXIT_SUCCESS);
	} else {
		contents[top++] = c;
	}
}

void show_result(void)
{
	/* print result */
}

void pop_and_compute(int c)
{
	/* need to implement stack underflow */
}
