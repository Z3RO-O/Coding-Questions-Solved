#include <iostream>
using namespace std;

int main()
{
    int n, a[1000], k = 0;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    for (int pages = 0;;)
    {
        pages += a[k];
        if (pages >= n)
        {
            break;
        }
        k++;
        if (k == 7)
        {
            k = 0;
        }
    }
    cout << k+1 << endl;
    return 0;
}