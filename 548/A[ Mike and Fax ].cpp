#include <bits/stdc++.h>
using namespace std;
bool ispal(string s)
{
    for(int i =0,j=s.length()-1;i<j;i++,j-- )
    {
        if(s[i]!= s[j])
            return 0;
    }
    return 1;
}
int main()
{
    string x; cin>>x;
    int n; cin>>n;
    int ln=x.length()/n;
    if(n > x.length()||x.length()%n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(n==x.length())
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<x.length();i+=ln)
    {
        if(!ispal(x.substr(i,ln)))
        {cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}