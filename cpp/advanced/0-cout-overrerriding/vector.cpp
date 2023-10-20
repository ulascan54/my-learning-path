#include "vector.hpp"
#include <iostream>
using std::endl;

vector::vector(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

ostream &operator<<(ostream &os, const vector &v1)
{
    os << "x,y,z -> " << v1.x << v1.y << v1.z << endl;

    return os;
}
