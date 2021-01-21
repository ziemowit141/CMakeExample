#include <iostream>
#include <addition.hpp>

void addition()
{
	int var, var2 = 0;
	std::cout << "Enter numbers to be added: " << std::endl;

	std::cin >> var;
	std::cin >> var2;

	std::cout << var + var2 << std::endl;
}	
