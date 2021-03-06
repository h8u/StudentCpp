
#include "pch.h"
#include <iostream>

bool isExceeded(int numToCalculateFactorial, int& stepNumber);

int main()
{
	int numToCalculateFactorial;
	int stepNumber = 0;
	std::cout << "Type the number to calculate factorial: ";
	std::cin >> numToCalculateFactorial;
    std::cout << "Number to compare:";
	
	if (isExceeded(numToCalculateFactorial, stepNumber) == true)
	{
		std::cout << "Did the factorial exceed the value? YES \n";
		std::cout << "The step number is " << stepNumber;
	}
	else
	{
		std::cout << "Did the factorial exceed the value? NO";
	}
}

bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int numToCompare;
	std::cin >> numToCompare;
	int fact = 1;
	for (int j = 1; j <= numToCalculateFactorial; j++)
	{
		fact *= j;
		if (fact > numToCompare) return true;
		stepNumber++;
	}
	return false;

}