#include <bits/stdc++.h>
using namespace std;
#define len(a) a.length()
#define clen(a) strlen(a)
#define all(v) v.begin(),v.end()
#define sortv(v) sort(v.begin(),v.end())
#define rsort(v) sort(v.rbegin(),v.rend())
#define fords(v) for (auto it=v.begin();it!=v.end();it++)
#define forr(n) for(int i=0;i<n;i++)
#define fors(i,n) for(int i=0;i<n;i++)
#define forv(i,v,n,s) for(int i=v;i<n;i+=s)
#define mems(p,v) memset(p, v, sizeof(p))
#define getv(nt,i) nt i;cin>>i;
#define getvec(nt,i,sz) vector< nt > i(sz);for(int j=0;j<sz;j++)cin>>i[j];
#define gett(t,n) t n;cin>>n;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    /*gett(string, str);
    string sub[2];
    bool legit;
    if (str.find("000")==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    int ln=str.lenght();
    for(int i=1;i<ln-2;i++)
    {

        for(int j=i+1;j<ln=1;i++)
        {
            legit=1;
            sub1=str.substr(0,i);
            sub2
        }
    }*/
    int a,b,s;
    cin>>a>>b>>s;
    int sum=abs(a)+abs(b);
    if(s<sum)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(s==sum)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    s-=sum;
    if (s%2)
      {
        cout<<"No"<<endl;
        return 0;
    }
    else
        {
        cout<<"Yes"<<endl;
        return 0;
    }
    return 0;
}
