#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a1, a2, a3, A, B, C;
    cin >> a1 >> a2 >> a3;
    A = sqrt((a1 * a2) / a3);
    B = sqrt((a2 * a3) / a1);
    C = sqrt((a1 * a3) / a2);
    cout << (A + B + C) * 4 << endl;
    return 0;
}