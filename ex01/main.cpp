#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie *horde;
	std::string name;
	int N;

	N = std::atoi(argv[1]);
	name = argv[2];
	horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
			horde[i].announce();
	delete [] horde;
	return (0);
}