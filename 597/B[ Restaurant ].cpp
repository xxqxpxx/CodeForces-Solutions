#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int f=0;f<n;f++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int start=0,ans=0;
    for(int f=0;f<v.size();f++)
    {
        if(v[f].second>start)
        {
            ans++;
            start=v[f].first;
        }
    }
    cout<<ans<<endl;
    
  return 0;
}