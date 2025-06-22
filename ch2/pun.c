#include <stdio.h> // header files
		   // included into the program before it's compiled

/*
 * 1. Preprocessing:
 * 	by preprocessor, => #include <>
 * 2. Compiling:
 * 	translates it into machine instructions(object code)
 * 3. Linking
 * 	linker adds additional codes from library
 */

int main(void)
{
	printf("To C, or not to C: That is the question.\n");
	return 0;
}

/*
 * General Form of a Simple Program
 *
 * directives
 *
 * int main(void)
 * {
 * 	declarations
 * 	statements
 * }
