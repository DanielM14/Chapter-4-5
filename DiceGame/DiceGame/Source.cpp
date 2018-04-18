// Program: Dice Game
// Date: 4-16-2018
// Auther: Daniel McGlasson

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

int main()
{
	int rand();
	double rollDieOne, rollDieTwo, totalDiceNumber;
	std::string userChoice;
	

	do{
		std::cout << "Would you like to roll some dice? >>>" << std::endl;
		std::cin >> userChoice;
		rollDieOne = rand() % 6 + 1;
		rollDieTwo = rand() % 6 + 1;
		if (userChoice == "Yes" || userChoice == "yes")
		{			
			totalDiceNumber = rollDieOne + rollDieTwo;
			std::cout << "The number of the first die is " << rollDieOne << std::endl;
			std::cout << "The number of the second die is " << rollDieTwo << std::endl;
			std::cout << "Your Total Number is " << totalDiceNumber << std::endl;
		}
		else if (userChoice == "No" || userChoice == "no")
		{
			std::cout << "THEN BE GONE BOI" << std::endl;
		}
	} while (userChoice != "yes");

	system("pause");
	return 0;
}