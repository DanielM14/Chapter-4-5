//Program: Random Number with Score
//Date: 4-10-2018
//Author: Daniel McGlasson

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int numberChoice;
	int secret;
	int count = 1;

	do{
		std::cout << "Please pick a number between 1 - 100" << std::endl;
		std::cin >> numberChoice;
		if (numberChoice > secret)
		{
			std::cout << "The number you chose is to high!, guess agian loser" << std::endl;
			count = count + 1;
			//count++//
		}
		else if (numberChoice < secret)
		{
			std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
			count = count + 1;
		}
	} while (numberChoice != secret);
	std::cout << "Congrats! " << std::endl;
	
	system("pause");
	return 0;
}