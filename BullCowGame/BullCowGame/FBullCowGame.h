#pragma once
#include <string>

class FBullCowGame {

public:

	FBullCowGame();
	
	int GetCurrentTry() const;
	int GetMaxTries() const;
	bool IsGameWon() const;

	bool Reset();
	bool CheckGuess(std::string);

private:
	int myMaxTries;
	int myCurrentTry;
};