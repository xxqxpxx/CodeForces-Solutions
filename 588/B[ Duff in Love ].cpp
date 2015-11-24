/*
#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif

    int x , z = 0 ;

    cin >> x;

    char arr[x][x];

    for (int i = 0 ; i < x; ++i)
        for (int j = 0 ; j < x ; ++j)
            cin >> arr[i][j];



    for (int i = 0 ; i < x; ++i)
        for (int j = 0 ; j < x ; ++j)
            {

                if(i)
            {
                z+=(arr[i-1][j]==&#39;o&#39;);
            }
            if(j)
            {
                z+=(arr[i][j-1]==&#39;o&#39;);
            }
            if(i!= x-1)
            {
                z+=(arr[i+1][j]==&#39;o&#39;);
            }
            if(j!=x-1)
            {
                z+=(arr[i][j+1]==&#39;o&#39;);
            }

            if(z %2)
            {
                cout<<"NO"<<endl;
                return 0;
            }





            }

             cout << "YES" << endl;



    return 0 ;

}
*/


#include <bits/stdc++.h>
using namespace std;

//#define nll cout<<endl;
#define nl cout<<endl
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
//int x[]={-1,0,1,-1,1,-1,0,1},y[]={-1,-1,-1,0,0,1,1,1};
#define MAX 1000000007
#define MOD 1000000007
#define oo 1e9

int main()
{

    ull n;
    while(cin>>n)
    {

        for(ull i=2;i*i<=n;i++)
        {
            if(n%(i*i)==0)
            {
                n/=i;
                i=1;
            }
        }
        cout<<n<<endl;

    }
    return 0;
}
