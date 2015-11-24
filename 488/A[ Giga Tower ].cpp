#include <bits/stdc++.h>
using namespace std;
bool lucky (long long i)
{
    while (i)
    {
        if(abs(i%10) == 8)
            return 1;
        i/=10;
    }
    return 0;
}
int main()
{
    //cout<<lucky(-1);
    long long i;
    cin>>i;
    short counter=1;
    i++;
    for (;!lucky(i);++i,++counter);
    cout<<counter<<endl;

    return 0;
}