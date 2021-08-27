#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->setName(name);
}

HumanB::~HumanB()
{
	this->weapon = NULL;
}

void HumanB::attack( void )
{
	if (this->weapon == NULL)
		std::cout << this->name << " attacks with his hands" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setName( std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}