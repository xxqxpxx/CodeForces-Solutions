#include <iostream>
/*3 3
223
232
112
output
2
input
3 5
91728
11828
11111
output
3*/
using namespace std;

int main()
{
        int k , n , w , sum = 0 ;
        
        cin >> k >> n >> w;

        for (int i = 1 ; i <= w ; ++i)
            {
                sum+= (k *i);
            }

            if ( sum > n )
                cout << sum-n << endl;

            else
                cout << 0 << endl;
    }
