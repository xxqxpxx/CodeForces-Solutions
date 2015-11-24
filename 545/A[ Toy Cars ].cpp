#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    vector <vector<int> > vv(n , vector<int> (n,0));
    for(int i=0;i<n;i++)
    {    for(int j=0;j<n;j++)
    {
        cin>>vv[i][j];
    }
    }
    set<int> ss;
    for(int i=0;i<n;i++)
    {
    bool b=1;
      for(int j=0;j<n;j++)
    {
        //cout<< i<<" "<<j<< " " << vv[i][j]<<end
        if (vv[i][j] == 1 || vv[i][j]==3)
        {
        b=0;
        }

    }
    if(b)
        {
        ss.insert(i+1);
        }
    }
    cout<<ss.size()<<endl;
    for( int s : ss)
    {
        cout<<s<<" ";
    }

return 0;

}
