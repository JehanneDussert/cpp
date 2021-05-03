#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class Human
{
    private:
    public:
        Human(void);
        ~Human(void);
        Brain const     brain;
        std::string     identify(void) const;
        const Brain     &getBrain(void);
};

#endif