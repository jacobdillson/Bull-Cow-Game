#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{

}

int FBullCowGame::GetCurrentTry() const { return myCurrentTry; }

int FBullCowGame::GetMaxTries() const { return myMaxTries; }

bool FBullCowGame::Reset()
{
	return false;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuess(std::string)
{
	return false;
}
