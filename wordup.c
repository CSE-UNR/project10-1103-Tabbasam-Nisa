//Nisa Tabbasam
//5/6/25
//project 10

#include <stdio.h>
#define MAX_GUESSES 6
#define WORD_LEN 5


void readWord(char word);
void toLowerCase(char str);
int isLetter(char c);
int isValidInput(char guess);
int checkWin(char mystery, char guess);
void displayCorrect(char mystery, char guess, char display, char correct);
void displayHistory(char displays [WORD_LEN + 1], char correct [WORD_LEN + 1], int count); 





char mystery[WORD_LEN + 1];
char guesses[MAX_GUESSES] [WORD_LEN + 1];
char display[MAX_GUESSES] [WORD_LEN + 1];
char pointers[MAX_GUESSES] [WORD_LEN + 1];

readWord(mystery);
int guessCount = 0;
int won = 0;



int main () {

while (guessCount < MAX_GUESSES && !won) {
	char guess [WORD_LEN + 2] 
	getGuess(guess);
	int i;
	for (i = 0; i < WORD_LEN: i++) {
		guesses[count][i];
	}
	guesses[count][i] = '\0';
	correctFeedback(mystery, guess, displays[count], correct[count]};
	won = checkWin(mystery, guess);
	printf("\n%s\n", displays[count]);
	printf("%s\n" correct[count]);
	printf("\n----------------\n");
	count++

}

	if (won) {
	printf("Goodjob! You are correct! \n")
	} else {
	printf("Sorry the word was: %s\n", mystery);
}
	return 0; 
}

void readWord(char mystery[]) {
 	FILE *fptr = fopen("word.txt", "r");
 	if (fptr == NULL) {
 		printf("Error: could not open word.txt\n");
 		word[0] = '\0';
 		return 0;
 	}
 	fscanf(fptr, "%s", word);
 	word[WORD_LEN] = '\0';
 	fclose(fptr); 
 	toLowerCase(word);
 }
 
 void toLowerCase(char str[]) {
 	int i = 0;
 	while (str[i] != '\0') {
 		if (str[i] >= 'A' && str[i] <= 'Z') {
 			str[i] + 32
 	for (int i = 0; str[i]; i++) {
 	}
 }
 
 int isLetter(char c) {
 	return (>= 'A' && c <= 'Z') || (c >= 'a' && <= 'z');
 }
 
 is inValidInput(char guess []) {
 	int i = 0;
 	while (guess[i] != '\0') i++;
 	if (i != WORD_LEN) return 0;
 } 
 
 	for(i = 0; i < WORD_LEN; i++) {
 		if(isLetter(guess[i])) {
 		break;
 		}
 	}
 	return i == WORD_LEN;
 }
 
 void getInput(char guess[])
 		while (1) {
 		printf("Enter your 5 letter guess: ");
 		fgets(guess, WORD_LEN + 2, stdin);
 	
 		int i = 0
 		while(guess[i] != '\n' && guess[i] != '\0') {
 		i++;
 	}
 	guess[i] = '\n';
 	toLowerCase(guess);
 	
 	
 	if(isValidInput(guess)) {
 		break;
 	} else {
 		printf("Invalid Input. Please try again.\n");
 		}
 	}
 }
 int checkWin(char mystery, char guess {
 int i;
 	for(i = 0 ; i < WORD_LEN; i++) {
 		if(mystery[i] !=[i]) {
 		break;
 		}
 	}
	return i == WORD_LEN;
}

void displayCorrect(char mystery, char guess, char display, char correct) {
	int used[WORD_LEN] = {0};
	int i, j
	
	for (i = 0; i < WORD_LEN, i++) {
		if(guess[i] == mystery[i]) {
		display[i] = (guess[i] >= 'a' && guess[i] <= 'z') ? guess[i] - 32 : guess[i];
		used[i] = 1;
	} else { 
	display[i] = guess[i];
	}
	correct[i] = ' ';
 }
	
	for(i = 0; i < WORD_LEN; i++) {
		if(guess[i] != mystery[i]) {
			for(j = 0; j < WORD_LEN; j++) {
				if(!used[j] && guess[i] == mystery[i]) {
					correct[i] = '^';
					used[j] = 1;
					break;
				}
			}
		}
	}
}

	display WORD_LEN = '\0';
	correct WORD_LEN = '\0';
}
void showHistory(char dsiplays [WORD_LEN + 1], char correct [WORD_LEN + 1], int count) {
	int i;
	printf("\n---------- Guess History ---------\n");
	for(i = 0; i < count; i++) {
		printf("%s\n" displays[i]);
		printf("%s\n" correct[i]);
	}
	printf("--------------------------------------");
}



	
	



 	
 	
 	
 
 	
 	
 
