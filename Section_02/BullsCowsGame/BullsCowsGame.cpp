// BullsCowsGame.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //instancia um novo jogo

int main()
{	
	do
	{
		PrintIntro();
		PlayGame();
		
		
	} while (AskToPlayAgain());
	return 0; //Fecha o jogo.
}

void PrintIntro()
{
	constexpr int WORLD_LENGHT = 5;
	//Introdução ao jogo
	std::cout << "Seja bem-vindo ao jogo Bulls and Cows!\n";
	std::cout << "Tente adivinhar o isograma de " << WORLD_LENGHT;
	std::cout << " letras que estou pensando\n\n";
	return;
}

std::string GetGuess()
{
	std::string Guess = "";
	int CurrentTry = BCGame.GetMyCurrentTry();
	//Solicitar a palavra ao jogador
	std::cout << "Tentativa " << CurrentTry << std::endl;
	std::cout << "Digite a palavra: ";
	std::getline(std::cin, Guess);
	return Guess;
	
}

bool AskToPlayAgain()
{
	std::cout << "Gostaria de jogar novamente?(s/n) ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 's' || Response[0] == 'S');
}

void PlayGame()
{
	//loop com a quantidade de tentativa que o jogador terá
	int MaxTries = BCGame.GetMaxTries();
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "A palavra digitada foi: " << Guess << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
