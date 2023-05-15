#include "doctest.h"
// #include "sources/Team.hpp"
#include "sources/Point.hpp"
// #include "sources/Cowboy.hpp"
// #include "sources/YoungNinja.hpp"
// #include "sources/TrainedNinja.hpp"
// #include "sources/OldNinja.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
using namespace ariel;

TEST_CASE("Point Constuctor")
{
    Point a(32.3, 44);
    for (int i = 0; i < 20; i++)
    {
        CHECK(a.getX() == 32.3);
        CHECK(a.getY() == 44);
    }
}

TEST_CASE("Point distance")
{
    Point a(4, 5), b(2, 5);
    CHECK(a.distance(b) == b.distance(a));
    CHECK(a.distance(b) == 2);
}

TEST_CASE("Point move_towards")
{
    Point a(4, 5), b(2, 5);
    Point c = a.move_towards(a, 1.5, b);
    CHECK(c.getX() == 2.5);
    CHECK(c.getY() == 5);
}
