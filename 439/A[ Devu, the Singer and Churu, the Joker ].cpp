#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , d , z;
    vector <int> x;
    cin >> n >> d;

    for (int i = 0 ; i < n ; ++i)
        {
            cin >> z ;
            x.push_back(z);
        }

        z = 0;
        for (int i = 0 ; i < x.size() ; ++i )
        {
                if (d > 0)
                {
                    d-=x[i];
                    d-=10;
                    z+=2;
                }
                    if (i == x.size()-1){
                         d+=10;
                         z-=2;
                    }

                    if (d < 0)
                    {
                        cout << -1 << endl;
                        return 0;
                    }
                }


        if (d == 0)
        {
            cout << z << endl;
        }
       else if (d%5==0 || d%5 != 0)
        {
            z+=d/5;
            cout << z << endl;
        }

        else
            cout << -1 << endl;

    return 0;
}
