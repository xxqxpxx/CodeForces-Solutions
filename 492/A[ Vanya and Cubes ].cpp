#include <bits/stdc++.h>
#define len(i) i.length()
using namespace std;
int main()
{
    int ar[100001],i,n;

    ar[0]=0;
    ar[1]=1;
    cin>>n;
    for (i=1;n>0;i++)
    {
        ar[i]=ar[i-1]+i;
        n-=ar[i];
    }
    if(n<0)
        cout<<i-2<<endl;
    else cout<<i-1<<endl;

    return 0;
}
