#include <bits/stdc++.h>

using namespace std;

int main ()
{

    string x;
    int z = 0;
    getline(cin,x);

    sort (x.begin() , x.end());

    x.erase( unique( x.begin(), x.end() ), x.end() );

    for (int i = 0 ; i < x.length() ; ++i)
        if (isalpha(x[i] ))
            ++z;

            cout << z << endl;
    return 0;
}
