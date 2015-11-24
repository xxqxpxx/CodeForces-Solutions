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
    vv<int> v(3),x(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(all(v));
    for(int i=1;i<=10001;i++)
        for(int j=1;j<=10001;j++)
            {
                if (v[0]!= i*j && v[1] != i*j && v[2]!= i*j )
                    continue;
                for(int k=1;k<=10001;k++)
                {

                    x[0]= i*j;
                    x[1]= j*k;
                    x[2]= k*i;
                    sort(all(x));
                    if(x==v)
                    {
                    cout<<(i*4)+(j*4)+(k*4);
                    return 0;
                    }

                }
            }
    return 0;

}