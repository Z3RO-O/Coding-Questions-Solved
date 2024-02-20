#include <iostream>
using namespace std;

int main()
{
    int n, temp, k = 0, a[100];
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            a[k] = i;
            k++;
        }
        for (int j = 0; j < k - 1; j+=2)
        {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}