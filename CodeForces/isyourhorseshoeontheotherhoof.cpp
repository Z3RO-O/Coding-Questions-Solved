#include <iostream>
#include <set>
using namespace std;

int main()
{
    int s[4];

    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
        st.emplace(s[i]);
    }
    cout << 4 - st.size();
    return 0;
}