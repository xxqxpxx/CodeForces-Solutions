#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



void printVec(vector<string> v2)
{
    for (int i = 0; i < (int)v2.size(); ++i)
            cout<<v2[i]<< endl;
}


int main()
{
    string s , t ;
    cin >> s;


if (s.length() <10)
   {
    cout << 0 << endl;
    return 0;
    
}
    unsigned long long  h = 0 , res = 0 ;

    for (int i = 0; i <= s.length()-5; i++)
    {
        t = s.substr(i , 5);

        if (t == "heavy")
        {
            ++h;
        }

        else if (t == "metal")
        {
                res += h;
        }
    }

    cout << res << endl;

    return 0;
}