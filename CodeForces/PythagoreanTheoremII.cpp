#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    double sum;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; i * i + j * j <= n * n; j++)
        {
            sum = i * i + j * j;
            if (int(sqrt(sum)) * int(sqrt(sum)) == sum)
                count++;
        }
    }
    cout << count;
    return 0;
}