#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k, month[12], count = 0, height = 0;
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        cin >> month[i];
    }
    sort(month, month + 12);
    for (int i = 11; i > -2; i--)
    {
        if (height >= k)
        {
            cout << count << endl;
            break;
        }
        else if (height < k && count == 12)
        {
            cout << -1 << endl;
            break;
        }
        height += month[i];
        count++;
    }

    return 0;
}