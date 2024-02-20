#include <iostream>
using namespace std;

int main()
{
    int n, m, sum, count = 0;
    cin >> n >> m;
    sum = m + n;
    for (int i = 0; i <= sum; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if ((i * i + j) == n && (j * j + i) == m)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}