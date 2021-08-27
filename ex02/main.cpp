#include <iostream>

int main()
{
	std::string object = "HI THIS IS A BRAIN";
	std::string *stringPTR = &object;
	std::string &stringREF = object;

	std::cout << "Adress by variable: ";
	std::cout << &object << std::endl;
	std::cout << "Adress by pointer: ";
	std::cout << stringPTR << std::endl;
	std::cout << "Adress by reference: ";
	std::cout << &stringREF << std::endl;
	std::cout << "String by pointer: ";
	std::cout << *stringPTR << std::endl;
	std::cout << "String by reference: ";
	std::cout << stringREF << std::endl;
	return (0);
}