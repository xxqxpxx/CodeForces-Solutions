//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//int main()
//{
//
//#ifndef ONLINE_JUDGE
////    freopen("in.in" , "r" , stdin);
////    freopen("out.out" , "w" , stdout);
//#endif
//
//
//  int n , min ;
//  cin >> n;
//
//  int arr[n];
//
//  for (int i = 0 ; i < n ; ++i)
//        cin >> arr[i];
//
//        min = arr[2] - arr[0];
//
//        if (n > 3)
//            for (int i = 1 ; i < n-2 ; ++i)
//                {
//                    if ( min < arr[i+2] - arr[i])
//                        min = arr[i+2] - arr[i];
//
//                }
//
//        cout << min << endl;
//
//  return 0 ;
//
//}


#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif


    int n , z = 0 , max = -1 , min = 99999999;
    int x;
    cin >>n ;

    int arr[n];

    for (int i = 0 ;i < n ; ++i)
        cin >> arr[i];


    if (n == 3)
        {
            cout << arr[2] - arr[0] << endl;
            return 0;
        }

    else
    for (int i = 0 ; i < n-2 ; ++i)
        {
               if (min > arr[i+2] - arr[i]  ){
                min = arr[i+2] - arr[i];
                x = i +1;
                }


        }

        min = x;
        for (int i =0 ; i < n-1 ; ++i)
            {

                if ( max < arr[i+2] - arr[i] && i+1 == min)
                     max = arr[i+2] - arr[i] , ++i ;

                else
                     if (max < arr[i+1] - arr[i])
                         max = arr[i+1] - arr[i];
            }

        cout << max << endl;


    return 0 ;

}
