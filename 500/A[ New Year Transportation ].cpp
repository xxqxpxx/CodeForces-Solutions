#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, t;
cin>>n>>t;
vector<int> vec(n);
for (int i=0;i<n-1;i++)
cin>>vec[i];
int i=0;
for (i=0;i<n-1;)
{
if (i==t-1)
{
cout<<"YES"<<endl;
return 0;
}
//cout<<i<<endl;
i += vec[i];
}
if (i==t-1)
{
cout<<"YES"<<endl;
return 0;
}
cout<<"NO"<<endl;
return 0;
}