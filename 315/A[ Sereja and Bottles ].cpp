#include <iostream>

using namespace std;

int main()
{

    int n , count;

    cin >> n ;

    count = n ;

    int a[n] , b[n];
    bool z[n] = {0};

    for (int i = 0 ; i < n ; ++i)
    {
        cin >> a[i] >> b[i];
    }


    for (int i = 0 ; i < n ; ++i)
    {
        for (int j = 0 ; j < n ; ++j)
           {

                if (b[i] == a[j] && ( i!=j) && z[j] != 1)
                    {
                    --count ;
                        z[j] = 1;
                    }
           }
    }

    cout << count << endl;

    return 0 ;

}
