#include <iostream>
#include <map>
using namespace std;

int unique(int y)
{
    map<int, int> m;
    while (y > 0)
    {
        m.insert({y % 10, 0});
        y /= 10;
    }
    return m.size();
}
int main()
{
    int year, l;
    cin >> year;
    bool beauty = false;
    year += 1;
    while (beauty == false)
    {
        l = unique(year);
        if (l == 4)
        {
            break;
        }
        year++;
    }
    cout << year << endl;
    return 0;
}