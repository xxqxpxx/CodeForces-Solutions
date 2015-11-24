#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long int  a , b , n ;

    cin >> a >> b >> n ;

    a*=10;

    for (int i = 0 ; i <10 ; ++i)
        {
               
                a+=i;
                if (a%b == 0)
                    {
                    cout << a ;
                    for (int j =0 ; j < n-1 ; ++j)
                        cout << "0" ;
                        return 0;
                    }
                    a-=i;
        }



        cout << "-1" << endl;

    return 0;

}
