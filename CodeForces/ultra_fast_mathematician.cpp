#include <iostream>
using namespace std;

int main()
{
    string n1, n2, ans = "";
    cin >> n1;
    cin >> n2;
    for (int i = 0; i < n1.size(); i++)
    {
        if (n1[i] != n2[i])
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    }
    cout << ans << endl;
    return 0;
}