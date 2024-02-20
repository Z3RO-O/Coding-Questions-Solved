#include <iostream>
using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            break;
        }
        else
        {
            swap(a[i], a[i - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}