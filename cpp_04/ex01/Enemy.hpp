#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class	Enemy
{
	private:
		Enemy(void);
	protected:
		//[...]
	public:
		int hp;
		std::string type;
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &src);
		virtual ~Enemy();
		//std::string [...] getType() const;
		int getHP() const;
		virtual void takeDamage(int);
		Enemy &operator=(Enemy const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, Enemy const &rhs);

#endif
