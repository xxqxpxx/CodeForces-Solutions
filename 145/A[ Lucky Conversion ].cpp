#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int fours=0,sevens=0,ln;
    cin>>str1>>str2;
    ln= str1.length();
    for (int i=0;i<ln;i++)
        if(str1[i]!=str2[i])
        {
            if (str1[i]==&#39;4&#39;)
                fours++;
            else
                sevens++;
        }
    cout<<max(fours,sevens)<<endl;
    return 0;
}