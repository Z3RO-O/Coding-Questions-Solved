#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int T, N, K;
    cin >> T;
    vector<set<int>> A;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> K;
            for (int j = 0; j < K; j++)
            {
                int x;
                cin >> x;
                A[i].insert(x);
            }
        }
        int t = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N-1; j++)
            {
                bool present = true;
                for (int k = 1; k <= 5; k++)
                {
                    present = A[i].count(k) || A[j].count(k);
                }
                if (present)
                {
                    cout << "YES" << endl;
                    t = 0;
                    break;
                }
            }
        }
        if (t == 1)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}