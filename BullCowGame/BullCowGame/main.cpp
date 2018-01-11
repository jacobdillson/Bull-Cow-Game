#include "main.h"

int main()
{
	bool play = true;

	while (play)
	{
		printIntro();
		playGame();
		play = askToPlayAgain();
	}
		
	return 0;
}

void playGame()
{
	for (int i = 1; i <= GUESS_LIMIT; i++)
	{
		cout << "Guess: ";
		string Guess = getGuess();
		cout << "Guess " << i << " was : " << Guess << endl;
	}
}

void printIntro()
{
	cout << "Welcome to the Bull Cow Game!\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
}

string getGuess()
{
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

bool askToPlayAgain()
{
	string Play = "";
	cout << "Would you like to play again? (y/n): ";
	cin >> Play;

	if (Play[0] == 'y') return true;
	else return false;
}