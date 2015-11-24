#include <bits/stdc++.h>

using namespace std;

int main()
{

        long long  n , m , s = 0 ;
        cin >> n >> m;
        int arr[m] , arrh[n];
        bool arrx[m];

        for (int i = 0 ; i < m ; ++i){
            cin >> arr[i];
            arrx[i] = 0;
            }

         for (int i = 0 , x = 1 ; i < m ; ++i){
                if (x > arr[i]){
                    s+= n - x+arr[i];
                    x = arr[i];
                    }

                else
                    {
                        s+= arr[i] - x;
                        x = arr[i];
                    }
            }

            cout << s << endl;


        return 0;
}
