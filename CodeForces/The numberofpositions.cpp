#include <iostream>
using namespace std;

int main()
{
    int n, a, b, count = 0;
    cin >> n >> a >> b;
    for (int i = a + 1; i <= n; i++)
    {
        if (i >= a && b >= n - i)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}