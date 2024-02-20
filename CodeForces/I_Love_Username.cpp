#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], amazing = 0, best, worst;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            best = worst = a[i];
        }
        else
        {
            if (a[i] > best)
            {
                amazing++;
                best = a[i];
            }
            else if (a[i] < worst)
            {
                amazing++;
                worst = a[i];
            }
        }
    }
    cout << amazing << endl;
    return 0;
}