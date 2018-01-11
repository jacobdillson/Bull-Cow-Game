#include "main.h"

int main()
{
	bool bPlayAgain = true;

	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();

	} while (bPlayAgain);
		
	return 0;
}

void PlayGame()
{
	FBullCowGame BCGame;
	
	for (int i = 1; i <= GUESS_LIMIT; i++)
	{
		std::cout << "Guess: ";
		std::string guess = GetGuess();
		std::cout << "Guess " << i << " was : " << guess << std::endl;
	}
}

void PrintIntro()
{
	std::cout << "Welcome to the Bull Cow Game!\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
}

std::string GetGuess()
{
	std::string guess = "";
	std::getline(std::cin, guess);
	return guess;
}

bool AskToPlayAgain()
{
	std::string play = "";
	std::cout << "Would you like to play again? (y/n): ";
	std::getline(std::cin, play);

	return tolower(play[0]) == 'y';
}