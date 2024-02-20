#include<iostream>
using namespace std;

int main()
{
    string s,ans = "";
    cin>>s;
    int l = s.size();
    for (int i = 0; i < l;)
    {
        if (s[i]=='.')
        {
            ans+='0';
            i++;
        }
        else
        {
            if (s[i+1]=='-')
            {
                ans+='2';
                i+=2;   
            }
            else
            {
                ans += '1';
                i += 2;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}