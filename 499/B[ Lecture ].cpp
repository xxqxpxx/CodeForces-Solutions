#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string ,string> mmp;
    int n,m;
    string f,s;
    mmp.clear();
    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        cin>>f>>s;
        if (f.length()<= s.length())
        {
            mmp[f]=f;
        }
        else mmp[f]=s;
    }
    for (int i=0;i<n;i++)
    {
        cin>>f;
        cout<<mmp[f]<<" ";
    }
    return 0;
}