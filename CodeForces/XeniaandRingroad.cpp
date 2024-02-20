#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, val;
    long long time = 0;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        v.emplace_back(val);
    }
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            time += v[i] - 1;
        }
        else if (v[i - 1] < v[i])
        {
            time += v[i] - v[i - 1];
        }
        else if (v[i - 1] > v[i])
        {
            time += n - v[i - 1] + v[i];
        }
    }
    cout << time << endl;
    return 0;
}