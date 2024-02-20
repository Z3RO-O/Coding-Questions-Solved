#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j = 0, f = 0, l = 0;
    string s;
    char first[100], second[100];
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
        first[i] = s[i];
    for (int i = n; i < 2 * n; i++, j++)
        second[j] = s[i];
    sort(first, first + n);
    sort(second, second + n);
    for (int i = 0; i < n; i++)
    {
        if (first[i] > second[i])
            f++;
        if (first[i] < second[i])
            l++;
    }
    if (f == n || l == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}