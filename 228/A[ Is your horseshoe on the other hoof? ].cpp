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


    int n = 4 , x = 0;

    int arr[n];
    for (int i = 0 ; i < n ; ++i)
        {
            cin >> arr[i];
        }
        
        sort(arr,arr+n);

    for (int i = 0 ; i < n ; ++i)
        if (arr[i] == arr[i+1])
            ++x;


        cout << x<< endl;
    return 0 ;

}
