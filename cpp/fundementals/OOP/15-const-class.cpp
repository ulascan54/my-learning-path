#include <iostream>
using namespace std;

class Test
{
private:
    int a;

public:
    Test(int a)
    {
        this->a = a;
    }
    void test()
    {
        cout << "test metodu" << endl;
    }

    int getValue() const // bu method değer değiştiremez aynı zamanca const olmayan methodları çağıramaz
    {
        // test();-> const olmadığı için çalışmaz.
        //  this->a = 20; -> yapılamaz
        return this->a;
    }
};

void test(const Test &test)
{
    cout << test.getValue() << endl; // const olmayan methodları çağırmaaz
}

int main()
{
    Test test1(10);
    cout << test1.getValue() << endl;
    test(test1);
    return 0;
}
