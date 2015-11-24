#include <bits/stdc++.h>

using namespace std;


void sort_by_marks(int data[][2], int n){
  // assumption: 1st column contains marks, 2nd contains roll number
  auto ptr = (pair<int, int>*) data;
  sort(ptr, ptr+n);
}


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif


    int n ;

    while (cin >> n)
    {
        int arr[n][2];
        int p , q;
        bool x = false;
        for (int i = 0 ; i < n ; ++i)
            {
                cin >> arr[i][0] >> arr[i][1];
            }


        sort_by_marks(arr , n);


        p = arr[0][0] , q =  arr[0][1] ;


        for (int i = 1 ; i < n ; ++i)
           {
                p = arr[i-1][0] , q =  arr[i-1][1] ;

                if (p <= arr[i][0] && q >= arr[i][1])
                    x = true;


           }

           if (x)
            cout << "Happy Alex" << endl;

            else
                cout << "Poor Alex" << endl;
    }

    return 0 ;

}
