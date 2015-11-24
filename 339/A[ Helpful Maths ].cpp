#include <bits/stdc++.h>

using namespace std;

int main ()
{

    string x;

    cin >> x;

    sort(x.begin() , x.end());

    x.erase (0 ,  x.length()/2);
    for (int i = 0 ; i < x.length() ; ++i)
        {
                if (i+1== x.length())
                        cout << x[i] ;

                else
                    cout << x[i] << "+";
        }

    return 0;
}
