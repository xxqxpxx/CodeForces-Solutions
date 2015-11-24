#include <bits/stdc++.h>
using namespace std;
#define forr(n) for (int i=0;i<n;i++)
#define len(s) s.length()
#define all(v) v.begin(),v.end()
typedef long long ll;
//int x[]={-1,0,1,-1,1,-1,0,1},y[]={-1,-1,-1,0,0,1,1,1};
#define MAX 10010
#define vv vector
bool isp(int n)
{
    return sqrt(n)*sqrt(n) == n;
}
int main()
{
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    ll n,acc=0,i=0;
    cin>>n;
    ll arr[]={0,9,90,900,9000,90000,900000,9000000,90000000,900000000,1};
    for(;i<11;i++)
    {
        //cout<<i<<" "<<n<<endl;
        if(arr[i]>n)
            break;
        acc+= arr[i]*i;
        n-=arr[i];
    }
    //cout<<acc<<endl;
    if(n)
    {
        acc+=n*i;
    }
    cout<<acc<<endl;
    return 0;

}

/*int n;
    cin>>n;
    vv<string> str[n];
    forr(n)
    {
        cin>>str[i];
    }
    */

/*vector<pair <int ,int > > vpii;
    int n,v;
    cin>>n;
    vpii.resize(n);
    forr(n)
    {
        cin>>v;
        vpii[i]=make_pair(v,i);
    }
    sort(all(vpii));
    vector <int> sequence(n-1);
    if ()
    for(int i=0;i<n;i++)
    {

    }*/
/*/int n;
    cin>>n;
    vector<int> vpii(n);

    forr(n)
    {
        cin>>vpii[i];
    }
    bool flag=0;
    int cnt=0,stra,nd;
    for(int i=1;i<n)
    {
        if()
    }*/