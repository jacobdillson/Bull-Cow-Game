#pragma once

#include <iostream>
#include <string>
using namespace std;

#pragma region prototypes
void playGame();
void printIntro();
string getGuess();
bool askToPlayAgain();
#pragma endregion

#pragma region definition
constexpr int WORD_LENGTH = 9;
constexpr int GUESS_LIMIT = 5;
#pragma endregion