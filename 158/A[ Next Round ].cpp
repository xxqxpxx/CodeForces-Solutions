#include <bits/stdc++.h>

using namespace std;

int main()
{

        int n , k , count = 0 ;

        cin >> n >> k ;

        int *arr = new int [n];

        for (int i = 0 ; i < n ; ++i)
            cin >> arr[i];

            k = arr[k-1];

        for (int i = 0 ; i < n ; ++i)
            if (arr[i] >= k && arr[i] != 0 )
            ++count ;

        cout << count << endl;
        return 0 ;
}
