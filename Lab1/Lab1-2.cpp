#include <pch.h>
#include <iostream>

int main()
{
	int  day, month, year;
	char name[255];
	int f;
	
	std::cout << "Enter your name: " << std::endl;;
	std::cin >> name;
    std::cout << "Enter the day of your birthday: " << std::endl;
	std::cin >> day;
	std::cout << "Enter the month of your birthday: " << std::endl;
	std::cin >> month;
	std::cout << "Enter the year of your birthday: " << std::endl;
	std::cin >> year;
    
	if (month <= 10 && day <= 4) {
		(f = 2018);
	}
    else
	   {
		(f = 2017);
	      }
	
	int g = (f - year);
	std::cout << "Hello, " << name << "! You are " << g << " Old" << std::endl;; 
	return 0;
}