#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define sz(x) (int)(x).size()
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n , arr[101];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mn = abs(arr[0]-arr[1]);
    int in1 = 1 , in2 = 2;

    for(int i = 1; i < n-1; i++)
    {
        if(abs(arr[i]-arr[i+1])<=mn)
        {
            mn = abs(arr[i]-arr[i+1]);
            in1 = i+1;
            in2 = i+2;
        }
    }
    if(abs(arr[0]-arr[n-1])<mn)
    {
        in1 = 1;
        in2 = n;
    }

    cout << in1 << " " << in2 << endl;

 return 0;
}