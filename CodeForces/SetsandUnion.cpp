#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    unordered_set<int> unionSet;
    unordered_set<int> intersectSet;

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;

        unordered_set<int> currentSet;

        for (int j = 0; j < k; ++j)
        {
            int num;
            cin >> num;
            currentSet.insert(num);
        }
        if (n == 1)
            break;
        if (i == 0)
            unionSet = currentSet, intersectSet = currentSet;
        else
        {
            for (int num : currentSet)
                unionSet.insert(num);
            unordered_set<int> newIntersectSet;
            for (int num : intersectSet)
            {
                if (currentSet.find(num) != currentSet.end())
                    newIntersectSet.insert(num);
            }
            intersectSet = newIntersectSet;
        }
    }
    int attainable = unionSet.size() - intersectSet.size() - 1;
    if (n == 1)
        cout << 0 << endl;
    else
        cout << attainable << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
