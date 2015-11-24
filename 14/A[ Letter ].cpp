#include <iostream>

using namespace std;

int main()
{


    int n , m  , temp = -1 , y , x , temp1 = 1000000000, start = 1000000 , end = -1;

    cin >> n >> m ;

    string arr[n];

    for (int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
          y = arr[i].find_last_of("*");
          x = arr[i].find_first_of("*");

          if ( y > temp && y != -1 )
            temp = y ;
 
          if (x < temp1 && x != -1 )
            temp1 = x;

          if (x != -1 && start > i)
                start = i ;

          if (x != -1)
                end = i ;

    }

     for (int i = start ; i <= end ; ++i)
        {
            for (int j = temp1 ; j <= temp ; ++j)
                    cout << arr[i][j] ;

                cout << endl;
        }



    return 0;
}
