#include<bits/stdc++.h>

using namespace std;
#define endl &#39;\n&#39;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    // freopen("filename.txt" , "r" , stdduin );

    long long n,a,s = 0;
    
    cin>>n>>a;
    
    vector<long long> ddu(n);
    for( int i=0 ; i<n ; ++i )
    {
        cin>>ddu[i];
        s+=ddu[i];
    }
    
    for(int i=0 ; i<n ; ++i){
        long long mn = max(1LL,a - (s - ddu[i]));
        long long mx = min(ddu[i],a-(n-1));
        cout<<ddu[i] - (mx-mn+1)<<" \n"[i == n-1];
    }

    return 0;

}


