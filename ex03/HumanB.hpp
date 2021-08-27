#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack( void );
	private:
		void setName(std::string name);
		std::string name;
		Weapon *weapon;
};

#endif