#include <iostream>
#include <set>
using namespace std;

int main()
{
    int k, l, m, n, d, damage = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    set<int> st;
    for (int i = k; i <= d; i += k)
    {
        st.emplace(i);
    }
    for (int i = l; i <= d; i += l)
    {
        st.emplace(i);
    }

    for (int i = m; i <= d; i += m)
    {
        st.emplace(i);
    }
    for (int i = n; i <= d; i += n)
    {
        st.emplace(i);
    }
    damage = st.size();
    cout << damage << endl;
    return 0;
}