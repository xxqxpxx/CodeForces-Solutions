#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string lever;
    ll piv , left , right;
    left = right = 0;

    cin >> lever;

    for(int i = 0; i < lever.size(); i++)
    {
        if(lever[i]==&#39;^&#39;){
            piv = i;
            break;
        }
    }

    for(int i = 0; i < piv; i++)
    {
        if(lever[i] >= &#39;0&#39; && lever[i] <= &#39;9&#39;)
            left += (lever[i]-&#39;0&#39;)*(piv-i);
    }
    for(int i = piv; i < lever.size(); i++)
    {
        if(lever[i] >= &#39;0&#39; && lever[i] <= &#39;9&#39;)
            right += (lever[i]-&#39;0&#39;)*(i-piv);
    }

    if(left==right)
        cout << "balance" << endl;
    else if(left > right)
        cout << "left" << endl;
    else
        cout << "right" << endl;

 return 0;
}