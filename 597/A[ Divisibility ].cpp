#include <bits/stdc++.h>

using namespace std;

long long f(long long a,long long b)
{
    return a/b;
}

int main()
{
    long long a,b,k;
    cin>>k>>a>>b;
    if(a<0&&b<0)
    {
        swap(a,b);
        a=-a;
        b=-b;
        cout<<f(b,k)-f(a-1,k)<<endl;
    }
    else if(a>0&&b>0)
        cout<<f(b,k)-f(a-1,k)<<endl;
    else
        cout<<f(b,k)+f(-a,k)+1<<endl;
}