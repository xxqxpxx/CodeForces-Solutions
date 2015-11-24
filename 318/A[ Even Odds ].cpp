#include <iostream>

using namespace std;

int main()
{


    unsigned long long int n , k ;

    cin >> n >> k ;


            if (n % 2 == 0)
           {
             if (k > (n/2)) // even
            cout << k-(n-k) << endl;

            else // odd
               cout << k + k-1 << endl;
           }

           else
           {
                 if (k==n && n != 1 )
                    cout << k-1 << endl;

                else if (k > (n/2)+1) // even
                    cout << k-(n-k)-1 << endl;

                else // odd
                    cout << k + k-1 << endl;

           }


    return 0 ;

}
