#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif

    int n;
    cin >> n;
     string x[n ] ;
    char  d , q ;
    for (int i = 0 ; i < n ; ++i)
        cin >> x[i];

    d = x[0][0];
    q = x[0][1];

     for (int i = 0 ; i < n ; ++i)
        {
            if ( x[i][i] != d || x[n-n+i][n-i-1] != d)
                {
                    cout << "NO" << endl;
                    return 0 ;
                }

            for (int j = 0 ; j < n ; ++j)
                {
                    if ( (i == j)  || n-i-1 == j )
                        continue;

                    else
                        if (q != x[i][j])
                        {
                            cout << "NO" << endl;
                             return 0 ;
                        }

                }
        }

        if (q == d)
            cout << "NO" << endl;
        
        else
        cout << "YES" << endl;

        return 0;


}
