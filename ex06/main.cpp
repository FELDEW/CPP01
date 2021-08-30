#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen karen;
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	i = 0;
	if (argc != 2)
		return (1);
	while (level[i].compare(argv[1]) && i < 4)
		i++;
    switch(i)
    {
        case 0: 
			std::cout << "[ " << level[0] << " ]" << std::endl;
            karen.complain(level[0]);
        case 1:
			std::cout << "[ " << level[1] << " ]" << std::endl;
            karen.complain(level[1]);
        case 2:
			std::cout << "[ " << level[2] << " ]" << std::endl;
            karen.complain(level[2]);
        case 3:
			std::cout << "[ " << level[3] << " ]" << std::endl;
            karen.complain(level[3]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}
