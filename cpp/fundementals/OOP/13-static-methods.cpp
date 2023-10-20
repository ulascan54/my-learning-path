#include <iostream>
using namespace std;
class Math
{
public:
    static void cube(int x)
    {
        cout << x * x * x << endl;
    }
    static void square(int x)
    {
        cout << x * x << endl;
    }
};
int main()
{
    Math::cube(3);
    Math::square(3);

    return 0;
}
