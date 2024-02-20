#include <iostream>
using namespace std;

int main()
{
    int n, a[100], max_index, min_index, max = 0, min = 101;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
            max_index = i;
        }
        if (min >= a[i])
        {
            min = a[i];
            min_index = i;
        }
    }
    cout << max_index + (n - 1 - min_index) - (min_index < max_index ? 1 : 0) << endl;
    return 0;
}