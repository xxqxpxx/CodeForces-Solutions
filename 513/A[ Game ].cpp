#include <iostream>

using namespace std;

int main()
{
    int n1 , n2 , k1 , k2 ;

    cin >> n1 >> n2 >> k1 >> k2;


    while(n1 != 0 || n2 != 0 )
    {
            --n1;

            if ( n2 > n1 && n1 == 0)
                {
                    cout << "Second" << endl;
                    return 0 ;
                }

                --n2;
                  if ( n1 > n2 && n2 == 0)
                {
                    cout << "First" << endl;
                    return 0 ;
                }


    }
    return 0 ;

}
