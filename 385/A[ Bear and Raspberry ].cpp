#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif


    int n , c , maxdiff = -1 , x , y ;

    while (cin >> n >> c)
    {
     int arr[n];

    for (int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; ++i)
    {

        if (arr[i] > arr[i+1] && maxdiff < arr[i]-arr[i+1])
            maxdiff = arr[i]-arr[i+1] , x = arr[i] , y  =arr[i+1];

    }

    if (x - y - c > 0)
    cout << x - y - c << endl;

    else
    cout << 0 << endl;
    }

    return 0 ;

}
