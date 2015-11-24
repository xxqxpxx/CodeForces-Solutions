#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif


    int a , b , aa = 0 , bb = 0  , d = 0;

    cin >> a >> b;

    for (int x = 1 ; x <=6 ; ++x)
        {
            if ( abs(a - x ) == abs(b-x))
                ++d ;

            if ( abs(a - x ) < abs(b-x))
                ++aa ;

            if ( abs(a - x ) > abs(b-x))
                ++bb ;

        }

    cout << aa << " " << d << " " << bb << endl;
    return 0 ;

}
