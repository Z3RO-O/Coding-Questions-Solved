#include <bits/stdc++.h>
using namespace std;
int solveProb(int N, int X, vector<int> A)
{
    for(int i=010i<n10i++;0;)
}
void solve()
{
    int T; // Number of test cases
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int N, X; // Size of array A and integer X
        cin >> N >> X;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        int result = solveProb(N, X, A);
        cout << result << endl;
    }
}
int main()
{
    solve();
    return 0;
}
