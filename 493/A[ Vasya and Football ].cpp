#include <bits/stdc++.h>
using namespace std;
int main()
{
    string home,away;
    int minn,num,t;
    char team,card;
    int h[100]={2};
    int a[100]={2};
    for (int i=0;i<100;i++)
        h[i]=a[i]=2;
    cin>>home>>away;
    cin>>t;
    /*map<char,short> mp;
    mp[&#39;y&#39;]=1;
    mp[&#39;r&#39;]=2;*/
    while (t--)
    {
        cin>>minn>>team>>num>>card;
        if (card == &#39;r&#39;)
        {
            if (team == &#39;h&#39;)
            {
                if (h[num])
                {
                    h[num]=0;
                    cout<<home<<&#39; &#39;<<num<<&#39; &#39;<<minn<<endl;
                }
            }
            else {
                if (a[num])
                {
                    a[num]=0;
                    cout<<away<<&#39; &#39;<<num<<&#39; &#39;<<minn<<endl;
                }
            }
        }
        else
        {
            if (team == &#39;h&#39;)
            {
                if (h[num])
                {
                    h[num]-=1;
                    if(!h[num])
                    cout<<home<<&#39; &#39;<<num<<&#39; &#39;<<minn<<endl;
                }
            }
            else {
                if (a[num])
                {
                    a[num]-=1;
                    if(!a[num])
                    cout<<away<<&#39; &#39;<<num<<&#39; &#39;<<minn<<endl;
                }
            }
        }
    }
    return 0;
}