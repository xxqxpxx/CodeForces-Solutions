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


    long long int n ;
    cin >> n;

    if (n % 2 == 0)
        cout << n/2 << endl;

    else
        cout << "-" <<  n/2 +1 << endl;

    return 0 ;

}
