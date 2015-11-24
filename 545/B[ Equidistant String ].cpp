#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int ln= s1.length(),dist=0;
    for(int i=0;i<ln;i++)
    {
            dist += (s1[i]!= s2[i]);
    }
    if( dist % 2)
    {
    cout<<"impossible"<<endl;
    }
    else{
    dist/=2;
        for(int i=0;i<ln;i++)
        {
            if(s1[i]!= s2[i] && dist)
            {
            cout<<s2[i];
            dist --;
            }
            else
            cout<<s1[i];
        }
    }
return 0;

}
