#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "\0";
}

Zombie::Zombie(std::string name)
{
	setName(name);
}

Zombie::~Zombie( void )
{
	std::cout << this->getName() << " died!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce( void ) const
{
	std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void ) const
{
	return (this->name);
}