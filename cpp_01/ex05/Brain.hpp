#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain
{
    private:
    public:
        int number_of_neurons;
        int IQ;
        Brain(void);
        ~Brain(void);
        std::string    identify(void) const;
};

#endif