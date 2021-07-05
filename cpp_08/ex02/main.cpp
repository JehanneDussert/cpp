#include "Mutantstack.hpp"
#include <list>

int main(void)
{
    MutantStack<int>			mstack;
    MutantStack<std::string>	m1;
    MutantStack<std::string>	m2;
	std::list<int>				my_list;

	std::cout << "-- Mutant stack of int --\n";
	std::cout << "*Push some elements: ";
	std::cout << "\e[0;32mDone !\e[0m\n\n";
    mstack.push(5);
    mstack.push(17);
	my_list.push_back(5);
	my_list.push_back(17);


	std::cout << "\t\tmstack\t\t|\t\tmy_list\n";
    std::cout << "Top\t|\e[0;32m" << mstack.top() << "\t\t\t|\t" << my_list.back() << "\e[0m\n";
	mstack.pop();
	my_list.pop_back();
    std::cout << "Pop\t|\e[0;32m" << "Done !" << "\t\t\t|\t" << "Done !" << "\e[0m\n";
    std::cout << "Size\t|\e[0;32m" << mstack.size() << "\t\t\t|\t" << my_list.size() << "\e[0m\n";

    std::cout << "Cont.\t|";

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
	my_list.push_back(3);
	my_list.push_back(5);
	my_list.push_back(737);
	my_list.push_back(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::list<int>::iterator list_it = my_list.begin();
    std::list<int>::iterator list_ite = my_list.end();
    ++it;
    --it;
    while (it != ite)
    {
		std::cout << "\e[0;32m" << *it << " ";
        ++it;
    }
	std::cout << "\t\t|\t";
    while (list_it != list_ite)
    {
		std::cout << *list_it << " ";
		++list_it;
    }
	std::cout << "\e[0m\n";

	std::cout << "\n\n-- Copy of Mutant stack of int --\n";
    std::stack<int> s(mstack);
	std::cout << "*Reference to the top element in the Mutant stack [should return last push i.e. 0]: ";
    std::cout << "\e[0;32m" << s.top() << "\e[0m\n";

	std::cout << "\n\n-- Mutant stack of string --\n";
	std::cout << "*Reference to the top element in the Mutant stack:\n";
	m1.push("Hello World !");
    std::cout << "First push:\t\e[0;32m" << m1.top() << "\e[0m\n";
	m1.push("This is 42");
    std::cout << "Second push:\t\e[0;32m" << m1.top() << "\e[0m\n";
    MutantStack<std::string>::iterator m1_it = m1.begin();
    MutantStack<std::string>::iterator m1_ite = m1.end();

	std::cout << "\n\n-- m2 becomes m1 --\n";
	m2 = m1;

	std::cout << "\t\tm1\t\t|\t\tm2\n";
    std::cout << "Top\t|\e[0;32m" << m1.top() << "\t\t|\t" << m2.top() << "\e[0m\n";
	MutantStack<std::string>::iterator m2_it = m2.begin();
    MutantStack<std::string>::iterator m2_ite = m2.end();
    std::cout << "Size\t|\e[0;32m" << m1.size() << "\t\t\t|\t" << m2.size() << "\e[0m\n";
    std::cout << "Cont.\t|";

	while (m1_it != m1_ite)
    {
        std::cout << "\e[0;32m"  << *m1_it;
        ++m1_it;
    }
	std::cout << "|\t";
	while (m2_it != m2_ite)
    {
        std::cout << *m2_it;
        ++m2_it;
    }

    return 0;
}