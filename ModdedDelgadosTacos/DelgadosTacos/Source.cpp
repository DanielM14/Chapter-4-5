//Delgados Tacos
//3/29/2018
//Author Daniel McGlasson

#include <iostream>
#include <string>
void printMenu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "               MENU               " << std::endl;
	std::cout << "Tacos                         0.99" << std::endl;
	std::cout << "Burrtios                      1.99" << std::endl;
	std::cout << "Enchiladas                    1.99" << std::endl;
	std::cout << "Tostadas                      1.50" << std::endl;
	std::cout << "Drink                         0.99" << std::endl;
	std::cout << "Churro                        1.25" << std::endl;
	std::cout << "Sumpreme Burrtio              4.50" << std::endl;
	std::cout << "Potatos Oles                  1.99" << std::endl;
	std::cout << "Quesadilla                    1.00" << std::endl;
	std::cout << "Faijta                        3.00" << std::endl;
	std::cout << "**********************************"
}

int main()
{
	double tacos = 0.99;
	double burrtios = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double sumpremeBurrtio = 4.50;
	double potatosOles = 1.99;
	double quesadilla = 1.00;
	double faijta = 3.00;
	double taxRate = 0.7;
	double tacosNumber = 0, burritoNumber = 0, enchiladasNumber = 0, tostadasNumber = 0 , drinkNumber = 0, churroNumber = 0, sumpremeBurrtioNumber = 0, potatoOlesNumber = 0, quesadillaNumber = 0, faijtaNumber = 0;
	double total;
	std::string userChoice;
	
	std::cout << "************Welcome to Delgados Tacos***************\n\n\n\n\n\n" << std::endl;
	std::cout << " _____________________________________________ " << std::endl;
	std::cout << " |                                           | " << std::endl;
	std::cout << " |      _____________________                | " << std::endl;
	std::cout << " |      |                   |                | " << std::endl;
	std::cout << " |      |                   |                | " << std::endl;
	std::cout << " |      |                   |                |" << std::endl;
	std::cout << " |      ---------------------                | " << std::endl;
	std::cout << " |                                           ------------ " << std::endl;
	std::cout << " |         Delgados Tacos                               | " << std::endl;
	std::cout << " |                                                      | " << std::endl;
	std::cout << " |                                                      | " << std::endl;
	std::cout << " |                                                      | " << std::endl;
	std::cout << " -------({ $ })---------------------------({ $ })-------- " << std::endl;
	printMenu();
	do{
		std::cout << "Welcome to Delgados Tacos what item(s) woudld you like? >>>" << std::endl;
		std::cin >> userChoice;

		if (userChoice == "tacos" || userChoice == "Tacos")
		{
			std::cout << "How many tacos do you want? " << std::endl;
			std::cin >> tacosNumber;
		}
		else if (userChoice == "burritos" || userChoice == "Burritos")
		{
			std::cout << "How many burritos do you want?" << std::endl;
			std::cin >> burritoNumber;
		}
		else if (userChoice == "enchiladas" || userChoice == "Enchiladas")
		{
			std::cout << "How many echiladas do you want?" << std::endl;
			std::cin >> enchiladasNumber;
		}
		else if (userChoice == "tostadas" || userChoice == "Tostadas")
		{
			std::cout << "How many tostadas would you like" << std::endl;
			std::cin >> tostadasNumber;
		}
		else if (userChoice == "drink" || userChoice == "Drink")
		{
			std::cout << "How many drink's would you like?" << std::endl;
			std::cin >> drinkNumber;
		}
		else if (userChoice == "churro" || userChoice == "Churro")
		{
			std::cout << "How many churro's do you want?" << std::endl;
			std::cin >> churroNumber;
		}
		else if (userChoice == "sumpreme burrtio" || userChoice == "Sumpreme Burrtio")
		{
			std::cout << "How many sumpreme burrtios do you want?" << std::endl;
			std::cin >> sumpremeBurrtioNumber;
		}
		else if (userChoice == "potato oles" || userChoice == "Potato Oles")
		{
			std::cout << "How many potato oles would you like?" << std::endl;
			std::cin >> potatoOlesNumber;
		}
		else if (userChoice == "quesodilla" || userChoice == "Quesodilla")
		{
			std::cout << "How many quesodillas would you like?" << std::endl;
			std::cin >> quesadillaNumber;
		}
		else if (userChoice == "fajita" || userChoice == "Fajita")
		{
			std::cout << "How many fajitas would you like?" << std::endl;
			std::cin >> faijtaNumber;
		}
	}
		
		
	

	



		
}
