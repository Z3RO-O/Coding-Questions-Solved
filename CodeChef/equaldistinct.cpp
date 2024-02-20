#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, N, A[100000];
    cin >> T;
    while (T--)
    {
        cin >> N;
        int c = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        for (int i = 1; i < N; i++)
        {
            if (A[i] == A[i - 1])
            {
                c++;
            }
        }
        if (N % 2 != 0 && c == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}