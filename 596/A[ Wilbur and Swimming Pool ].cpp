
/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
        cin>>p[i].first>>p[i].second;


    if(n==1)
        {
            cout << -1 << endl;
            return 0; 
        }
    if(n==2)
        {
            int x,y;
            if(p[0].first==p[1].second||p[0].second==p[1].first)
                {
                    if (p[0].first==p[1].second && p[0].second==p[0].first)
                        {
                            cout << -1 << endl;
                            return 0;
                        
                        }
                    else
                    if (p[0].first >p[0].second )
                        {
                            cout << abs(abs(p[0].first)- abs(p[0].second))*abs(abs(p[0].first)- abs(p[0].second))<< endl;
                        }
                        
                    else
                        {
                        cout << abs(abs(p[0].second)- abs(p[0].first))*abs(abs(p[0].second)- abs(p[0].first))<< endl;
                        
                        }
                    return 0;
                }
            x=p[0].first;
            y=p[1].second;
            y-=p[0].second;
            x=abs(x-p[1].first);
            cout<<abs(x*y)<<endl;
        }
    else if(n==3)
        {
            sort(p,p+n);
            cout<<abs(p[0].second-p[1].second)*abs(p[1].first-p[2].first)<<endl;
        }
    else
        {
            sort(p,p+n);
            cout<<abs(p[0].second-p[1].second)*abs(p[1].first-p[3].first)<<endl;
        }


  return 0;
}

*/
/*

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n , z = 0 ;
    cin >> n;

    int arr[n];
    int arrx[n];

    for (int i = 0 ; i < n ; ++i){
        cin >> arrx[n];
        arr[i] = 0;
        }

    for (int i = 0 ; i < n ; ++i)
        {
            cout << arr[i] << " " << arr[i+1] << endl;
            if (arr[i] == arrx[i]);

            else
                {
                    if (arr[i] < arrx[i])
                        for (int j = i ; j < n ; ++j)
                            ++arr[i];
                    else if (arr[i] > arrx[i])
                        for (int j = i ; j < n ; ++j)
                            --arr[i];

                    ++z;
                }

        }

        cout << z << endl;
        return 0;
}

*/


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
#define V vector
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
ull gcd (ull a,ull b){ull c;while(a!=0){c=a;a=b%a;b=c;}return b;}
///Actual solution starts here/////////////////////Sherbi7y////////////////////////////////////////

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);//cout.tie(0);
    #ifndef ONLINE_JUDGE
        //freopen("A2.out","w",stdout);
        freopen("a1.in","r",stdin);
    #endif
    int n;
    while(cin>>n)
    {if (n==1)
    {
        cin>>n>>n;
        cout<<"-1"<<endl;
        continue;
    }
    int arrx[n],arry[n];
    forr(n)
    {
        cin>>arrx[i]>>arry[i];
    }
    int k=100000000,l,kk,ll;
    for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<n;j++)
        {
            if(arrx[i] != arrx[j] && arry[i]!= arry[j])
                {k=arrx[i];l=arry[i];kk= arrx[j];ll= arry[j];break;}
        }   
        }
         if (k==100000000)
        cout<<"-1"<<endl;
            else cout<<abs(l-ll)*abs(k-kk)<<endl;
    }

    return 0;
}
/**/