//Program: Age Thing
//Date: 4-10-2018
//Author: Daniel McGlasson

#include <iostream>

int main()
{
	int usersAge;
	
	std::cout << "Please enter your age mate " << std::endl;
	std::cin >> usersAge;

	if (usersAge <= 5)
	{
		std::cout << "Why are you on this computer you need can't even walk" << std::endl;
	}
	if (usersAge >= 6 && usersAge < 12)
	{
		std::cout << "Stop Watching youtube videos" << std::endl;
	}
	if (usersAge >= 13 && usersAge < 20)
	{
		std::cout << "Go to school bum" << std::endl;
	}
	if (usersAge >= 21 && usersAge < 30)
	{
		std::cout << "Get a job you potato" << std::endl;
	}
	if (usersAge >= 31 && usersAge < 40)
	{
		std::cout << "Midlife Crisi?" << std::endl;
	}
	if (usersAge >= 41 && usersAge < 50)
	{
		std::cout << "Getting up there I see" << std::endl;
	}
	if (usersAge >= 51 && usersAge < 60)
	{
		std::cout << "Go collect your retirement check you dino" << std::endl;
	}
	

	system("pause");
	return 0;



}