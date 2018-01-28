#pragma once
#include <string>

class FBullCowGame 
{
public:
	void Reset();
	int GetMaxTries();
	int SetMaxTries();
	int GetMyCurrentTry();
	int SetMyCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);
		

private:
	int MyCurrentTry = 1;
	int MyMaxTry = 5;
};
