#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("in.in" , "r" , stdin);
    freopen("out.out" , "w" , stdout);
#endif


    string x , y ;
    int j = 0;
    cin >> x >> y ;

    for (int i = 0 ; i < y.length() ; ++i)
        {

            if (y[i] == x[j])
                ++j;

        }

        cout << ++j << endl;

    return 0 ;

}
