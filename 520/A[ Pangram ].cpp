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
#define sf(x) scanf("%d", &x);
#define sfll(x) scanf("%I64d", &x);
#define pr(x) printf("%d ", x);
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<bool> booi(26,0);
    string str;
    int ln;
    cin>>ln;
    cin>>str;

    forr(ln)
    {
        str[i]=tolower(str[i]);
        booi[str[i]-97]=1;
    }
    sort(all(booi));
    string arr[2]={"NO","YES"};
    cout<<arr[booi[0]]<<endl;

    return 0;
}