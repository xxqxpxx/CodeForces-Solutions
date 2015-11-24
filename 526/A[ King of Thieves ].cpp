#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in", "r",stdin);
    int ln,tt=0;
    cin>>ln;
    string str;
    cin>>str;
    for(int i=1;i<ln/2;i++)
    {
        for(int j=0;j<ln;j++)
        {
            tt=0;
            for(int k=j;k<ln;k+=i)
            {
                if (str[k]==&#39;*&#39;)
                    tt++;
                else
                    break;
            }
            if(tt>=5)
            {
               cout<< "yes"<<endl;
               return 0;
            }
        }
    }


        cout<<"no"<<endl;
        return 0;
}