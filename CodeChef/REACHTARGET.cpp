#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, need;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        need = X - Y;
        cout << need << endl;
    }
    return 0;
}