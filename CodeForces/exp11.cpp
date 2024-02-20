#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "I AM IN BASE CLASS" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "I AM IN DERIVED CLASS" << endl;
    }
};
int main()
{
    Derived obj;
    Base &ref = obj;
    ref.print();
    return 0;
}
