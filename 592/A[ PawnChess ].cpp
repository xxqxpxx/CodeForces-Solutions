#include <bits/stdc++.h>
using namespace std;
#define mpr make_pair
#define pb push_back
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define bit __builtin_popcountll
#define MOD 1000000007
#define EPS 1e-9
typedef long long ll;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef unsigned long long ull;

int main()
{
    string str[8];

    for(int i = 0; i < 8; i++)
    {
        cin >> str[i];
    }

    int W = 10;
    for(int i = 0; i < 8; i++)
    {
        bool flag = true;
        for(int y = 0; y < 8; y++)
        {
            if(str[y][i]==&#39;B&#39;)
                flag = false;
            if(str[y][i]==&#39;W&#39; && flag)
                W = min(W , y);
        }
    }

    int B = 10;
    for(int i = 0; i < 8; i++)
    {
        bool flag = true;
        for(int y = 7; y >= 0; y--)
        {
            if(str[y][i]==&#39;W&#39;)
                flag = false;
            if(str[y][i]==&#39;B&#39; && flag)
                B = min(B , 7-y);
        }
    }

    if(W<=B)
        cout << "A" << endl;
    else
        cout << "B" << endl;

return 0;
}