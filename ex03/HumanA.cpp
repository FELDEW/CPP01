#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weaponREF(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weaponREF.getType() << std::endl;
}
