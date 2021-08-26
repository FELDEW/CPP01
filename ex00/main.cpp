#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie *zombie;
	std::string name;
	
	for (int i = 1; i < argc; i++)
	{
		name = argv[i];
		if (i % 2)
		{
			std::cout << "NeChetnii patsan: ";
			zombie = newZombie(name);
			zombie->announce();
			delete zombie;
		}
		else
		{
			std::cout << "Chetnii patsan: ";
			randomChump(name);
		}
	}
	return (0);
}