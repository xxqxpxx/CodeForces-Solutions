#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  t , x ;
    long long s = 0 ;
    int arr[30];

    for (int i = 0 ; i < 30 ; ++i){
        arr[i] = pow (2 , i);
        }
    cin >> t ;

    for (int i = 0 ; i < t ; ++i)
        {
            cin >> x;

            s = ( (pow(x,2) + x)/2);
            for (int i = 0 ; i < 30 ; ++i)
                if (arr[i] <= x)
                    s-=arr[i]*2;

            cout << s << endl;
            s = 0 ;
        }


  return 0;
}
