#include "replace.hpp"

string ft_replace(std::string str, const std::string& beg, const std::string& end)
{
    size_t pos = 0;

    while ((pos = str.find(beg, pos)) != std::string::npos)
	{
        str.replace(pos, beg.length(), end);
        pos += end.length();
    }
    return str;
}

void	ft_read_and_replace(string FILENAME, string s1, string s2)
{
	string		word;
	string		line;
	string		new_filename;
	ifstream	file(FILENAME.c_str());  //Ouverture d'un fichier en lecture

	if (file)
	{
		new_filename = FILENAME + ".replace";
		ofstream new_file(new_filename.c_str());
		while (getline(file, line))
		{
			new_file << ft_replace(line, s1, s2);
			new_file << '\n';
		}
		new_file.close();
	}
	else if (!file)
		cout << "Error : unable end open the file.\n";
	file.close();
	return ;
}

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error : wrong number of arguments.\n";
	else if (!strcmp(av[1], "\0") || !strcmp(av[2], "\0"))
	 	cout << "Error : empty string.\n";
	else
	 	ft_read_and_replace(av[1], av[2], av[3]);
	return 0;
}
