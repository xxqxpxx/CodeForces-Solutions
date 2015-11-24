
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

        int n , sum = 0 , carry = 0 ;

        cin >> n ;

        string arr ;


                cin >> arr;

        for ( int i = 0 ; i < n ; ++i)
        {
            if ( arr[i] == &#39;1&#39;)
            {

                sum++;
            }
            else
                break;



        }
                    sum++;
                cout << min(n,sum) << endl;



        return 0;
}
