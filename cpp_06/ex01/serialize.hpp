#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>

typedef struct Data
{
	std::string	str;
}				t_data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
