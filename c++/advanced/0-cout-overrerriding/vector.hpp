#include <iostream>

using std::ostream;

class vector
{
public:
    vector(int x, int y, int z);

    friend ostream &
    operator<<(ostream &os, const vector &v1);

private:
    int x, y, z;
};
