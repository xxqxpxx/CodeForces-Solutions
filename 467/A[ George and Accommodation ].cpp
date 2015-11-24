#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    // freopen("in.in" , "r" , stdin);
    // freopen("out.out" , "w" , stdout);
#endif

    int x , z = 0 , q , p ;

    cin >> x;

    for (int i = 0 ; i < x ;  ++i)
    {

        cin >> p >> q;

        if ( (q - p ) >= 2)
            ++z;
    }

    cout << z << endl;

    return 0 ;

}
