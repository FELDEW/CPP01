#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::complain( std::string level )
{
	int i;

	i = 0;
	void (Karen::*levels[5])( void ) = {&Karen::debug,\
	 &Karen::info, &Karen::warning, &Karen::error, &Karen::no_level};
	std::string words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level.compare(words[i]) && i < 4)
		i++;
	(this->*levels[i])();
}

void Karen::debug( void )
{
	std::cout << "Debug message" << std::endl;
}

void Karen::info( void )
{
	std::cout << "Info message" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "Warning message" << std::endl;
}

void Karen::error( void )
{
	std::cout << "Error message" << std::endl;
}

void Karen::no_level( void )
{

}