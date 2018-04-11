//Delgados Tacos
//3/29/2018
//Author Daniel McGlasson

#include <iostream>
#include <String>


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
	double tacosOrdered, burritoOrdered, enchiladasOrdered, tostadasOrdered, drinkOrdered, churroOrdered, sumpremeBurrtioOrdered, potatoOlesOrdered, quesadillaOrdered, faijtaOrdered;
	double total;
	

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


	std::cout << "How many tacos would you like? >>> " << std::endl;
	std::cin >> tacosOrdered;

	std::cout << "How many burrtios would you like? >>> " << std::endl;
	std::cin >> burritoOrdered;
	
	std::cout << "How many enchiladas would you like? >>> " << std::endl;
	std::cin >> enchiladasOrdered;

	std::cout << "How many tostadas would you like? >>> " << std::endl;
	std::cin >> tostadasOrdered;

	std::cout << "How many drinks would you like? >>> " << std::endl;
	std::cin >> drinkOrdered;

	std::cout << "How many churros would you like? >>> " << std::endl;
	std::cin >> churroOrdered;

	std::cout << "How many Sumpreme Burritos would you like? >>> " << std::endl;
    std::cin >> sumpremeBurrtioOrdered;

	std::cout << "How many Potatos Oles would you like? >>> " << std::endl;
	std::cin >> potatoOlesOrdered;

	std::cout << "How many Quesadilla would you like? >>> " << std::endl;
	std::cin >> quesadillaOrdered;

	std::cout << "How many Faijtas would you like? >>> " << std::endl;
	std::cin >> faijtaOrdered;


	total = (tacos * tacosOrdered) + (burrtios*burritoOrdered) + (enchiladas*enchiladasOrdered) + (tostadas*tostadasOrdered) + (drink*drinkOrdered) + (churro*churroOrdered) + (sumpremeBurrtio*sumpremeBurrtioOrdered) + (potatosOles*potatoOlesOrdered) + (quesadilla*quesadillaOrdered) + (faijta*faijtaOrdered);
	std::cout << "Your Total is >>> " << total;

		system("pause");
		return 0;
		
}
