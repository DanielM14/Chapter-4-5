//Prgram: Guessing Game
//Date: 4-10-2018
//Author: Daniel McGlasson

#include <iostream>
#include <random>
#include <time.h>
int main()
{
	int numChoice;
	int secret;


	srand(time(NULL));
	/*generate a secret number between 1 and 10*/
	secret = rand() % 10 + 1;



		std::cout << "Please pick a number between 1-10" << std::endl;
		std::cin >> numChoice;

		if (numChoice == secret)
		{
			std::cout << "Congrats you guessed " << secret << " the correct number" << std::endl;
		}
		else
		{
			std::cout << "You chose... poorly the number was " << secret << "." << std::endl;
		}

	system("pause");
	return 0;
}