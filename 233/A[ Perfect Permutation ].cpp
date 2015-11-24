#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif

    int n ;
    cin >> n;
int    arr[n];

    for (int i = 0 ; i < n ; ++i)
        arr[i] = i+1;

    if (n%2!=0)
        {
            cout << -1 << endl;
            return 0;
        }

    else
     for (int i = 0 ; i < n ; i+=2)
        {
            cout << arr[i+1] << " " << arr[i] << " " ;
        }

    return 0 ;

}
