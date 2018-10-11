// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "Lab1.h"



int main()
{
	char play_yes_no;
	std::cout << "Would you like to play a guessing game?" << std::endl;
	std::cout << "Yes - Y" << std::endl;
	std::cout << "No - N" << std::endl;
	std::cin >> play_yes_no;
	if (play_yes_no == 'y')
	{
		Play();
	}
	
	
		
		
		
	
	system("pause");

	return 0;
}

int Play()
{
	int Guesses = 0; // amount of guess
	int AllowedGuesses = 8;

	int Guess = 0; // guess
	srand(time(NULL));
	int RandomNumber = rand() % 100 + 1;

	while (Guess != RandomNumber) {
		std::cout << "Guess the number between 1-100" << std::endl;
		std::cin >> Guess;
		Guesses = Guesses + 1;
		if (Guess < RandomNumber) {
			std::cout << "Higher" << std::endl;
			std::cout << "Guesses remaining " << AllowedGuesses - Guesses << std::endl;
		}
		else {
			std::cout << "Lower" << std::endl;
			std::cout << "Guesses remaining " << AllowedGuesses - Guesses << std::endl;
		}
		if (Guesses >= AllowedGuesses)
		{
			std::cout << "out of Guesses" << std::endl;
			system("pause");
			return 0;
		}

	}
	
	std::cout << "Yes" << std::endl;
	
	return 0;
}