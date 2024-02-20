#include <iostream>

using namespace std;

template <typename T>

struct func
{

    void x()
    {
        cout << "hi" << endl;
    }
    void y()
    {
        cout << "hello" << endl;
    }
};

template <>
void func<int>::x()
{
    cout << "hello world" << endl;
}

int main()
{
    func<int> t;
    t.x();
    t.y();
}