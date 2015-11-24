#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    int n,x,t=0,k=0;
    string s;
    while(cin>>n>>s)
    {
    t=k=0;
    for(int f=0;f<n;f++)
    {
        if(s[f]==&#39;R&#39;&&k==0)
            k=f+1;
        if(s[f]==&#39;R&#39;&&s[f+1]==&#39;L&#39;&&t==0)
            t=f+1;
        if(s[f]==&#39;R&#39;&&s[f+1]==&#39;.&#39;&&t==0)
            t=f+2;
        if(s[f]==&#39;L&#39;&&t==0)
            t=f;
        if(s[f]==&#39;R&#39;&&s[f+1]==&#39;.&#39;&&k==0)
            k=f+1;
        if(s[f]==&#39;L&#39;&&s[f+1]==&#39;.&#39;&&k==0)
            k=f+1;
    }
    cout<<k<<" "<<t<<endl;
    }
}