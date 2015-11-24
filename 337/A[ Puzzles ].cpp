#include <bits/stdc++.h>

using namespace std;

int main ()
{

    int n , m , s = 1000000;

    cin >> n >> m;

    int arr[m];

    for (int i = 0 ; i < m ; ++i)
        cin >> arr[i];


      sort(arr,arr+m);


      for (int i = 0 ; i < m ; ++i)
        {
            if (i+n > m)
                break;

                if ( abs( arr[i] - arr[i+n-1]  )  < s   )
                        s = abs(arr[i] - arr[i+n-1] );

        }

        cout << s << endl;
    return 0;
}
