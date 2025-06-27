/*
 * Asks user to guess a hidden number
 * My implementation
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
	int random_number, user_guess;
	char user_decision;
	int num_of_trial = 0;
	bool game_on = true, user_chose = false;

	/* Select random number */
	printf("Guess the secret number between 1 and 100.\n");
	while (game_on) {
		user_chose = false;
		num_of_trial = 0;

		srand((unsigned) time(NULL));
		random_number = (rand() % 100) + 1;
		printf("\nA new number has been chosen.\n");

		while (random_number != user_guess) {
			printf("Enter guess: ");
			scanf("%d", &user_guess);
			num_of_trial++;
			if (user_guess > random_number) {
				printf("Too high; try again.\n\n");
			} else if (user_guess < random_number) {
				printf("Too low; try again.\n\n");
			} 
		}
		printf("You won in %d guesses!\n", num_of_trial);
		while (!user_chose) {
			printf("Play again? (Y/N): ");
			scanf(" %c", &user_decision);
			if (user_decision == 'n' || user_decision == 'N') {
				game_on = false;
				user_chose = true;
			} else if (user_decision == 'y' || user_decision == 'Y') {
				user_chose = true;
			} else {
				user_chose = false;
			}
		}
	}
}	
