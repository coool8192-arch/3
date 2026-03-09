#include "Character.h"

Character::Character()
{
	cout << "Created" << endl;
}

void Character::Partner(const weak_ptr<Character>& reference)
{
	character = reference;
}

Character::~Character()
{
	cout << "Destroyed" << endl;
}
