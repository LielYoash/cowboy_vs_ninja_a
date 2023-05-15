#include "Character.hpp"
using namespace std;
using namespace ariel;

Character::Character(string name, Point location, int HP)
{
    this->name = name;
    this->location = location;
    this->HP = HP;
}

bool Character::isAlive()
{
    return this->HP > 0;
}

double Character::distance(Character *other)
{
    return this->location.distance(other->location);
}

void Character::hit(int damage)
{
    this->HP -= damage;
}

string Character::getName()
{
    return this->name;
}

Point Character::getLocation()
{
    return this->location;
}

void Character::print()
{
    cout << "name: " << this->name << endl;
    cout << "location: ";
    this->location.print();
    cout << "HP: " << this->HP << endl;
}

