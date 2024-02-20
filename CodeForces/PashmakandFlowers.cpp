#include <iostream>
#include <map>
using namespace std;
int main()
{
    long long n, val, max = 0, min = 0, combo = 1;
    cin >> n;
    map<long, long> b;
    for (long i = 0; i < n; i++)
    {
        cin >> val;
        b[val]++;
    }
    auto it = b.begin();
    min = (*it).first;
    combo *= (*it).second;
    it = b.end();
    it--;
    max = (*it).first;
    if (max == min)
    {
        cout << (max - min) << " " << (n - 1) * n / 2; //(n - 1) * n / 2 is the sum of n-1 elements as for n numbers there will be n-1 pairs of flowers
    }
    else
    {
        cout << (max - min) << " " << combo * (*it).second;
    }
    return 0;
}