// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>



int main()
{
	int y = 0; // guess
	int i = 0; // amount of guess
	int j = 8;
	srand(time(NULL));
    int x = rand() % 100 + 1;
	
		while (y != x) {
			std::cout << "Guess the number between 1-100" << std::endl;
			std::cin >> y;
			i = i + 1;
			if (y < x) {
				std::cout << "Higher" << std::endl;
				std::cout << "Guesses remaining " << j - i << std::endl;
			}
			else  {
				std::cout << "Lower" << std::endl;
				std::cout << "Guesses remaining " << j - i << std::endl;
			}
			if (i >= j)
			{
				std::cout << "out of Guesses" << std::endl;
				system("pause");
				return 0;
			}

		}

		if (y == x) 
		{
			std::cout << "Yes" << std::endl;
		}
		
	
	
	system("pause");

	return 0;
}

