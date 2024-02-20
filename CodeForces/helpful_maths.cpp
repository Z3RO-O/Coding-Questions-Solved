#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int a[100], k = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        if (s[i] == '1')
        {
            a[k] = 1;
            k++;
        }
        else if (s[i] == '2')
        {
            a[k] = 2;
            k++;
        }
        else
        {
            a[k] = 3;
            k++;
        }
    }
    sort(a, a + k);
    for (int i = 0; i < k - 1; i++)
    {
        cout << a[i] << "+";
    }
    cout << a[k - 1];
    return 0;
}