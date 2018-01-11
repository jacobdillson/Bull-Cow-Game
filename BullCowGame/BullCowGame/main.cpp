#include <iostream>
#include <string>

using namespace std;

#pragma region prototypes
void printIntro();
string getGuess();
#pragma endregion


int main()
{
	printIntro();

	string Guess = getGuess();
	// repeat the guess back to the player
	cout << "You guessed: " << Guess << endl;

	return 0;
}

void printIntro()
{
	constexpr int WORD_LENGTH = 9;

	cout << "Welcome to the Bull Cow Game!\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << "Guess: ";
}

string getGuess()
{
	// get a guess from the player
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}