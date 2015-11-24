#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    unsigned long long n=0;
    cin >> s;
    int ln = s.length();
    for(int i=1;i<ln ;i++)
        n+= (1<<i);
    //cout<<n<<endl;
    reverse(s.begin(),s.end());
    for(int i=0;i<ln;i++)
    {
        if(s[i]==&#39;7&#39;)
            n+=(1<<(i));
    }
    cout<<n+1<<endl;


    return 0;
}