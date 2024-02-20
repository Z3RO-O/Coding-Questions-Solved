#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, mx = -1, ind,tm;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % m != 0)
        {
            tm = (a[i] / m) + 1;
        }
        else{
            tm = a[i] / m;
        }
        //cout<<"Tm= "<<tm<<endl;
        ////cout<<"Mx = "<<mx<<endl;
        if (tm >= mx)
        {
            mx = tm;
            ind = i;
        }
    }
    cout << ind +1<< endl;
    return 0;
}