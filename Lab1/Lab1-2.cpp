#include <pch.h>
#include <iostream>

int main()
{
	int  day, month, year;
	char name[255];
	int g,h;
	int f = 2018;

	std::cout << "Enter your name: " << std::endl;;
	std::cin >> name;
	std::cout << "Enter the day of your birthday: " << std::endl;
	std::cin >> day;
	std::cout << "Enter the month of your birthday: " << std::endl;
	std::cin >> month;
	std::cout << "Enter the year of your birthday: " << std::endl;
	std::cin >> year;

	if (month <= 10 && day <= 4)
	{
		g = (2018-year);
		std::cout << "Hello, " << name << "! You are " << g << " Old" << std::endl;
	}
	else
	{
		h = (2017-year);
		std::cout << "Hello, " << name << "! You are " << f << " Old" << std::endl;
	
	}


	
	return 0;
}
