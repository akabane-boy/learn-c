#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void print_not_proper(void);
void print_proper(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

int main(void)
{
	int c, d;

	printf("Enter parentheses and/or braces: ");
	for(;;) {
		c = getchar();
		switch (c) {
			case '(':	push(c); break;
			case '{':	push(c); break;
			case ')':	d = pop();
					if (d != '(') {
						print_not_proper();
						exit(EXIT_SUCCESS);
					}
					break;
			case '}':	d = pop();
					if (d != '{') {
						print_not_proper();
						exit(EXIT_SUCCESS);
					}
					break;
			case '\n':	if (!is_empty()) {
						print_not_proper();
						exit(EXIT_SUCCESS);
					}
					print_proper();
					exit(EXIT_SUCCESS);
					break;
			default:	printf("This is not parentheses/braces.\n");
					exit(EXIT_SUCCESS);
		}
	}
	
	return 0;
}

void print_not_proper(void)
{
	printf("Parentheses/braces are NOT nested properly\n");
}

void print_proper(void)
{
	printf("Parentheses/braces are nested properly\n");
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full()) {
		printf("Stack overflow\n");
		exit(EXIT_SUCCESS);
	} else
		contents[top++] = i;
}

int pop(void)
{
	if (is_empty()) {
		print_not_proper();
		exit(EXIT_SUCCESS);
	}
	
	else
		return contents[--top];
}
