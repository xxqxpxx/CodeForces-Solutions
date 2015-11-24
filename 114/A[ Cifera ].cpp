#include <bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long num, x,t;
    cin>>num>>x;
    t=num;
    for (int i=0;t<=x;++i,t*= num)
    {
        //cout<<t<<endl;
        if (t == x)
        {
            cout<<"YES\n"<<i<<endl;
            return 0;
        }
    }
    cout<<"NO\n"<<endl;
    return 0;
}