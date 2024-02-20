#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    set<int> st;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        st.emplace(s[i]);
    }
    if (st.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}