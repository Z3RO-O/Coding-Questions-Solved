#include <iostream>
using namespace std;
int main()
{
    int n, m, a;
    long long i, j;
    cin >> n >> m >> a;
    i = n / a;
    j = m / a;
    if (n % a != 0)
        i++;
    if (m % a != 0)
        j++;
    cout << i * j << endl;
    return 0;
}