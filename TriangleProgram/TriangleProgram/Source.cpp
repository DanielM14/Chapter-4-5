//Prgram: Triangle
//Date: 4-13-2018
//Author: Daniel McGlasson

#include <iostream>
#include <string>
#include <math.h>
int main()
{
	//Designing right triangle pyhtagorean theorem.
	//We need 2 user inputs and user needs to input which side they want ot solve.
	double sideA, sideB, sideC, triangleHeight, trianglePerimeter;
	std::string userInputSide, userInputTriangleShape;
	int triangleArea, triangleBase;

	std::cout << "What triangle do you want to solve for? Right, Isosceles, or Equilateral?" << std::endl;
	std::cin >> userInputTriangleShape;

	if (userInputTriangleShape == "Right" || userInputTriangleShape == "right")
	{
		std::cout << "Which side of the right triangle do you want to solve? A, B, C >>> " << std::endl;
		std::cin >> userInputSide;
		if (userInputSide == "C" || userInputSide == "c")
		{
			std::cout << "You chose side " << userInputSide << ", what is the distance side A. >>>" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side B? >>>" << std::endl;
			std::cin >> sideB;


			sideC = sqrt((sideA * 2) + (sideB * 2));

			std::cout << "The distance for side C is " << sideC << "." << std::endl;

		}
		else if (userInputSide == "B" || userInputSide == "b")
		{
			std::cout << "You chose side " << userInputSide << ", what is the distance side A. >>>" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side C? >>>" << std::endl;
			std::cin >> sideC;


			sideB = sqrt((sideA * 3) + (sideC * 2));

			std::cout << "The distance for side B is " << sideC << "." << std::endl;

		}
		else if (userInputSide == "A" || userInputSide == "a")
		{
			std::cout << "You chose side " << userInputSide << ", what is the distance side A. >>>" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side B? >>>" << std::endl;
			std::cin >> sideB;


			sideA = sqrt((sideB * 2) - (sideC * 2));

			std::cout << "The distance for side A is " << sideA << "." << std::endl;

		}
	}
	else if (userInputTriangleShape == "Isosceles" || userInputTriangleShape == "isosceles")
	{
		std::cout << "You will now solve for the height of a Isoseles Triangle" << std::endl;
		std::cout << "What is the area of the triangle? >>> " << std::endl;
		std::cin >> triangleArea;
		std::cout << "What is the base of the triangle? >>> " << std::endl;
		std::cin >> triangleBase;
		
		triangleHeight = 2 * (triangleArea / triangleBase);

		std::cout << "Your height of your triangle is " << triangleHeight << "." << std::endl;
	}
	else if (userInputTriangleShape == "Equilateral" || userInputTriangleShape == "equilateral")
	{
		std::cout << "What is the area of the equilateral triangle?" << std::endl;
		std::cin >> triangleArea;

		trianglePerimeter = (3 * triangleArea);

		std::cout << "The perimeter of the equilateral triangle is " << trianglePerimeter << "." << std::endl;
	}
	system("pause");
	return 0;
}