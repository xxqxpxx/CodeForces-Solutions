#include <bits/stdc++.h>


using namespace std;

int main()
{

   string x , y , z ;
   int q ,c ;
   cin >> x;

    if (x[0] != &#39;-&#39;)
    {
        cout << x << endl;
        return 0;
    }
   y = x , z = x;

    if (x.length() == 2)
    {
        cout << 0 << endl;
        return 0;
    }
   y.erase(   x.length()-1 , 1 );

   z.erase( x.length()-2 , 1);



    stringstream p;
    p << y;
    p >> q;

     stringstream a;
    a << z;
    a >> c;

    cout << max(q,c) << endl;


    return 0;
}
