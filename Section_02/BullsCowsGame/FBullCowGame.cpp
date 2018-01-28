#include "stdafx.h"
#include "FBullCowGame.h"

void FBullCowGame::Reset()
{
	return;
}

int FBullCowGame::GetMaxTries()
{
	return MyMaxTry;
}

int FBullCowGame::SetMaxTries()
{
	return 0;
}

int FBullCowGame::GetMyCurrentTry()
{
	return MyCurrentTry;
}

int FBullCowGame::SetMyCurrentTry()
{
	return 0;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
