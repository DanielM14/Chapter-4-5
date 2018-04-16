// Program: Dice Game
// Date: 4-16-2018
// Auther: Daniel McGlasson

#include <iostream>
#include <string>

int main()
{
	std::string userChoice;

	do{
		std::cout << "Would you like to roll a di? >>>" << std::endl;
		std::cin >> userChoice;
			userChoice;
		if (userChoice == "Yes" || userChoice == "yes")
		{
			
		}
		else if (userChoice == "No" || userChoice == "no")
		{
			std::cout << "Go home then kid!!" << std::endl;
		}



	system("pause");
	return 0;
}