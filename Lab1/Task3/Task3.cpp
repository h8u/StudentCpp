#include <pch.h>
#include <iostream>

int main()
{
	int number = 88;
	int enterNumber;
	int i=0;
	bool c;
	std::cout << "Hi. Try to guess a number. " << std::endl;

	do {
		std::cin >> enterNumber;
		i++;
		std::cout << "" << i << " Try: " << enterNumber;
		if (enterNumber > number)
		{
			std::cout << "\nAnswer: No. Less" << std::endl;
			c = 0;
		}
		else if (enterNumber < number)
		{
			std::cout << "\nAnswer: No. Greater." << std::endl;
			c = 0;
		}
		else
		{
			std::cout << "\nAnswer: YES" << std::endl;
			c = 1;
		}
	} while (c == 0);
	return 0;
}