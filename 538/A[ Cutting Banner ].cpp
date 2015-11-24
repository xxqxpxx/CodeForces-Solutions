#include <bits/stdc++.h>
#define pb push_back
#define For(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define all(v) v.begin(),v.end()

using namespace std;

int main(){
    string a;
    cin>>a;
    int n=a.size();
    for(int f=0; f<n; f++)
    {
        string ans="";
        for(int k=0; k<f; k++)
        {
            ans+=a[k];
        }
        for(int j=f; j<n; j++)
        {
            if(ans+a.substr(j)=="CODEFORCES"){
                cout<<"YES"<<endl;
            return 0;
            }
        }
        if(ans=="CODEFORCES")
            {
            cout<<"YES"<<endl;
            return 0;
            }
    }
    cout<<"No"<<endl;
}
