    #include <bits/stdc++.h>
    using namespace std;

    #define main int main()
    #define T     \
        int t;    \
        cin >> t; \
        while (t--)
    #define all(v) (v).begin(), (v).end()
    #define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
    #define for0 for (i = 0; i < n; i++)
    #define for1 for (j = 1; j <= n; j++)
    #define vi vector<int>
    #define si set<int>
    #define usi unordered_set<int>
    #define vs vector<string>
    #define pii pair<int, int>
    #define mii map<int, int>
    #define mci map<char, int>
    #define msi map<string, int>
    #define pb push_back
    #define eb emplace_back
    #define ull unsigned long long
    #define ll long long
    #define U unsigned int

    const int I9 = 1e9;
    const int I7 = 1e7;
    const int I5 = 1e5;
    /* direction array */
    /*int dx4[] = {1, -1, 0, 0};
    int dy4[] = {0, 0, 1, -1};
    int dx6[] = {0, 0, 1, -1, 0, 0};
    int dy6[] = {1, -1, 0, 0, 0, 0};
    int dz6[] = {0, 0, 0, 0, 1, -1};
    int dx8[] = {1, -1, 0, 0, -1, 1, -1, 1};
    int dy8[] = {0, 0, 1, -1, 1, 1, -1, -1};
    int dkx8[] = {-1, 1, -1, 1, -2, -2, 2, 2};
    int dky8[] = {2, 2, -2, -2, 1, -1, 1, -1};*/
    /* direction array */

    // Toh Chaliye Shuru karte...
    int sum_d(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    main
    {
        fast;
        int n, x, y, n1, n2, curr, sum;
        string s, a, b;
        T
        {
            cin >> n;
            s = to_string(n), a = "", b = "";
            sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                curr = s[i] - '0';
                if (sum > 0)
                    x = curr / 2;
                else
                    x = (curr + 1) / 2;
                y = curr - x;
                a += '0' + x;
                b += '0' + y;
                sum += x - y;
            }
            cout << stoi(a) << " " << stoi(b) << endl;
        }
        return 0;
    }