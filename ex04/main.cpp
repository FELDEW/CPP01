#include <iostream>
#include <fstream>
#include <string>

int	error(const char *msg)
{
	std::cout << msg << std::endl;
	return(1);
}

int main(int argc, char *argv[])
{
	std::string out_name;
	std::string buff_str;
	std::string line;
	std::string str1;
	size_t		pos;

	if (argc != 4)
		return (error("Wrong number of params!"));
	str1 = argv[2];
	std::ifstream in(argv[1]);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			buff_str.append(line);
			buff_str.append("\n");
		}
		buff_str.erase(buff_str.rfind("\n"), 1);
		in.close();
		out_name = argv[1];
		out_name.append(".replace");
		std::ofstream out(out_name);
		pos = 0;
		while ((pos = buff_str.find(str1, pos)) != std::string::npos)
		{
			buff_str.erase(pos, str1.length());
			buff_str.insert(pos, argv[3]);
			pos++;
		}
		out << buff_str;
	}
	else
		return (error("File does not exist or permission denied!"));
	return (0);
}