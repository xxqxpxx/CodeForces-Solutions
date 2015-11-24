#include <bits/stdc++.h>
#define forr(n) for (int i=0;i<n;i++)
#define len(s) s.length()
#define all(v) v.begin(),v.end()
#define MAX 10010
#define vv vector

using namespace std;

typedef long long ll;

bool isp(int n)
{
    return sqrt(n)*sqrt(n) == n;
}

int main()
{
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector< vector<int> > vvi(102, vector<int> (102,0));
    int xx,x,yy,y;
    forr(n)
    {
        cin>>x>>xx>>y>>yy;
        for(int k=x;k<=y;k++)
        {
            for(int j=xx;j<=yy;j++)
            {
                vvi[k][j]++;
            }
        }
    }

    int acc=0;
    for(int i=1;i<=100;i++)
        for(int j=1;j<=100;j++)
            acc+=vvi[i][j];
        cout<<acc<<endl;

    return 0;

}
