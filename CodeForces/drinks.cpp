#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double volume_frac = 0, p[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        volume_frac += p[i] / 100.0;
    }
    cout << setprecision(14);
    cout << (volume_frac / n) * 100 << endl;
    return 0;
}