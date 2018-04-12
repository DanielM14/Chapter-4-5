//Program: Pizza
//Date: 4-12-2018
//Author: Daniel McGlasson

#include <iostream>
#include <string>

int main()
{
	int userTop; //user choding type of pizza
	double pizzaSmall = 7.99, pizzaMedium = 8.99, pizzaLarge = 9.99;
	int pizzaSize; //Size of pizza
	double total;

	std::cout << "Welcome to this pizza joint!" << std::endl;

	std::cout << "What size of pizza do you want >>>" << std::endl;
	std::cin >> pizzaSize;

	if (pizzaSize == 1)
	{
		std::cout << "You choose a small pizza price is " << pizzaSmall << " what toppings?" << std::endl;
		std::cin >> userTop;
		if (userTop == 1)
		{
			//pepperoni
		}
		if (userTop == 2)
		{
			//Bacon
		}
		if (userTop == 3)
		{
			//Cheese
		}
		else
		{
			//You Choose Nothing
		}
		total = pizzaSmall;
	}
	if (pizzaSize == 2)
	{
		std::cout << "You choose a medium pizza price is " << pizzaMedium << " what toppings?" << std::endl;
		std::cin >> userTop;
		if (userTop == 1)
		{
			//pepperoni
		}
		if (userTop == 2)
		{
			//Bacon
		}
		if (userTop == 3)
		{
			//Cheese
		}
		else
		{
			//You Choose Nothing
		}
		total = pizzaMedium;
	}
	if (pizzaSize == 3)
	{
		std::cout << "You choose a large pizza price is " << pizzaLarge << " what toppings?" << std::endl;
		std::cin >> userTop;
		if (userTop == 1)
		{
			//pepperoni
		}
		if (userTop == 2)
		{
			//Bacon
		}
		if (userTop == 3)
		{
			//Cheese
		}
		else
		{
			//You Choose Nothing
		}
		total = pizzaLarge;
	}
	

	std::cout << "Your total for the pizza is " << total << std::endl;

	system("pause");
	return 0;
}