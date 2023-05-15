#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "Point.hpp"
using namespace std;
using namespace ariel;

class Character
{
private:
    string name;
    Point location;
    int HP;

public:
    Character(string name, Point location, int HP);
    bool isAlive();
    double distance(Character *other);
    void hit(int damage);
    string getName();
    Point getLocation();
    void print();

    // for cowboys
    void shoot(Character *other);
    bool hasboolets();
    void reload();

    // for ninjas
    void move(Character *other);
    void slash(Character *other);
}

#endif // CHARACTER_HPP