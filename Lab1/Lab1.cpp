// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>


int main()
{
	int y;
	int x = rand() % 100 + 1;

	while(y != x){
	std::cout << "Guess the number between 1-100" << std::endl;
	std::cin >> y;
	if (y < x) {
		std::cout << "Higher" << std::endl;
		
	}
	else if (y > x) {
		std::cout << "Lower" << std::endl;
	}

	}
	std::cout << "Yes" << std::endl;
	
	system("pause");

	    return 0;
}

