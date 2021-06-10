#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer
{
    private:
        std::string _name;
        std::string _title;
    public:
        Sorcerer(void);
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src);
        ~Sorcerer(void);

	Sorcerer & operator=(Sorcerer const & rhs);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif