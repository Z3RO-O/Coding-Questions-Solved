#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, drink, lime, salt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    drink = (k * l) / nl;
    lime = c * d;
    salt = p / np;
    cout << min(min(drink, lime), salt) / n << endl;
    return 0;
}