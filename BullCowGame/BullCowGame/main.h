#pragma once

#include <iostream>
#include <string>
#include "FBullCowGame.h"

#pragma region prototypes
void PlayGame();
void PrintIntro();
std::string GetGuess();
bool AskToPlayAgain();
#pragma endregion

#pragma region definition
constexpr int WORD_LENGTH = 9;
constexpr int GUESS_LIMIT = 5;
#pragma endregion