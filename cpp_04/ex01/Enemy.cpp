#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;

	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{
	return ;
}

void Enemy::takeDamage(int n)
{
	n > this->hp ? this->hp = 0 : this->hp -= n;

	return ;
}

Enemy	&Enemy::operator=(Enemy const &rhs)
{
	(void)rhs;

	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, Enemy const &rhs)
{
	return o;
}*/
