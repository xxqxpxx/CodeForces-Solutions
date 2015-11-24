#include <bits/stdc++.h>

using namespace std;

int main()
{
        int t    ;
         cin >> t;
         bool pop = false ;

      unsigned long long  int arr[t] , arr1[t-1] , arr2[t-2] , z , i = 0;



        for (  i = 0 ; i < t ; ++i)
        cin >> arr[i];

         for (  i = 0 ; i < t-1 ; ++i)
        cin >> arr1[i];

         for (  i = 0 ; i < t-2 ; ++i)
        cin >> arr2[i];

        sort (arr , arr+t);
        sort(arr1, arr1+t-1);
        sort(arr2,arr2+t-2);

        for (  i = 0 ; i < t-1 ; ++i)
            if (arr[i] == arr1[i])
                continue;
            else{
                z = arr[i] ;
                pop = true ;
                break;
                }

            if (!pop)
                z = arr[t-1] ;

            cout << z << endl;

            pop = false;

            for (  i = 0 ; i < t-2 ; ++i)
            if (arr1[i] == arr2[i])
                continue;

                 else{
                z = arr1[i] ;
                pop = true;
                break;
                }

            if (!pop)
                z = arr1[t-2];

                cout << z << endl;

    return 0 ;

}
