#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//	freopen("in.in" , "r" , stdin);
//	freopen("out.out" , "w" , stdout);
#endif

    int x ;

    string y;

    cin >> x >> x;

    cin >> y;

    for (int i = 0 ; i < x ; ++i)
    {
        for (int j = 0 ; j < y.length()-1 ; ++j)
        {
            if (y[j] == &#39;B&#39; && y[j+1] == &#39;G&#39; ){
                swap(y[j] , y[ j + 1 ]);
                ++j;
            }
        }

    }

    cout << y << endl;

	return 0 ;

}
