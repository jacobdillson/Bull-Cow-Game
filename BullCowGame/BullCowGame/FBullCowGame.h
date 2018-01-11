#pragma once
#include <string>

class FBullCowGame {

public:
	bool Reset();
	int GetCurrentTry();
	int GetMaxTries();
	bool IsGameWon();
	bool CheckGuess(std::string);

private:
	int myMaxTries;
	int myCurrentTry;
};