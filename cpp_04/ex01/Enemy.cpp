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

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

void Enemy::takeDamage(int n)
{
	n > this->_hp ? this->_hp = 0 : this->_hp -= n;

	return ;
}

Enemy	&Enemy::operator=(Enemy const &rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();

	return *this;
}

int Enemy::getHP() const
{
	return this->_hp;
}

std::string Enemy::getType() const
{
	return this->_type;
}

/*std::ostream    &operator<<(std::ostream &o, Enemy const &rhs)
{
	return o;
}*/
