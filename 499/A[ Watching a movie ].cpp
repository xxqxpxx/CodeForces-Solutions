#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> beg(n),endd(n);
    int time=1,watch=0;
    for (int i=0;i<n;i++)
    {
        cin>>beg[i]>>endd[i];
        endd[i]++;
    }
    for (int i=0;i<n;)
    {
        if(beg[i]-time < x)
        {
            watch += endd[i]-time;
            time= endd[i];
            i++;
        }
        else
            time+=x;
    }
    cout<<watch<<endl;
    return 0;
}