//Prgram: oor Prize
//Date: 4-10-2018
//Author: Daniel McGlasson

#include <iostream>

int main()
{
	int doorChoice;
	std::cout << "Please pick a door 1, 2 or 3" << std::endl;
	std::cin >> doorChoice;

	if (doorChoice == 1)
	{
		std::cout << "The prize behind door " << doorChoice << "is an Aliagtor";
	}
	if (doorChoice == 2)
	{
		std::cout << "The prize behind door " << doorChoice << " Huffy Bike";
	}
	if (doorChoice == 3)
	{
		std::cout << "The prize behind door " << doorChoice << " is a Hug";
	}
	else
	{
		std::cout << "Why did you type " << doorChoice << " that is not an option" << std::endl;
	}
	system("pause");
	return 0;
}