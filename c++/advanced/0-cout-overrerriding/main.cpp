#include <iostream>
#include "vector.hpp"
using std::cout;
using std::ostream;

int main(int argc, char const *argv[])
{
    vector v1(2, 3, 4);

    cout << v1;

    return 0;
}
