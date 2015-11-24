#include <bits/stdc++.h>
using namespace std;
#define forr(n) for (int i=0;i<n;i++)
#define forx(x,n) for(int i=x;i<n;i++)
#define len(x,s) int x=s.length()
#define lenv(s) s.length()
#define pb push_back
#define endd(x) return x;
#define mems(a,v) memset(a,v,sizeof a)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sfi(x) scanf("%d",&x)
#define sfi2(x,y) scanf("%i%i",&x,&y)
#define sfu(x) scanf("%hd",&x)
#define sfu2(x,y) scanf("%hd%hd",&x,&y)
#define mp(x,y) make_pair(x,y)
//#define nll cout<<endl;
#define nl cout<<endl
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
//int x[]={-1,0,1,-1,1,-1,0,1},y[]={-1,-1,-1,0,0,1,1,1};
#define MAX 1000000007
#define MOD 1000000007
#define oo 1e9
//string ans[]={"NO\n","YES\n"};
void printv(vector<int> v){forr(v.size())cout<<v[i]<<" ";cout<<endl;}
ull summ(ull n){return ((n*n)+n)/2;}
bool isubseq(string s,string s1){len(ln,s1);len(lll,s);int i=0,j=0;for(;i<ln&&j<lll;i++)j+=(s1[i]==s[j]);return j==lll;}
string to_string(int val){if(!val)return "0";string s;while(val){s+=val%10+48;val/=10;}reverse(s.begin(),s.end());return s;}
bool incirc(double x,double y, double center_x,double center_y,double r){return(x-center_x)*(x-center_x)+(y-center_y)*(y-center_y)<=r*r;}
///Actual solution starts here/////////////////////Sherbi7y////////////////////////////////////////
bool isp(int n)
{
    if(n == 2 )
        return 1;
    if(n <= 1|| n%2 ==0)
        return 0;
    for(int i=3;i*i<= n;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
bool test(int n,int c)
{
    ll acc=c;
    for(int i=0;i<n-2;i++,acc*=c)
    {
        if((acc -1 )% n==0)
            return 0;
        acc %= n;
    }
    //acc*=c;
    return ((acc-1)% n==0);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);//cout.tie(0);
    #ifndef ONLINE_JUDGE
        //freopen("A2.out","w",stdout);
        //freopen("a1.in","r",stdin);
    #endif
    int p;
    cin>>p;
    int res=0;
    for(int i=1;i<=p;i++)
        {
            //if(isp(i))
                {
                    //res+=
                    if(test(p,i))
                    {//cout<<i<<endl;
                        res++;
                    }
                }
        }
    cout<<res<<endl;
    return 0;
}