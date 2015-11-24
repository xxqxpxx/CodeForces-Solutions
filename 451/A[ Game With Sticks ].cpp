#include <bits/stdc++.h>

using namespace std;

int main ()
{

    int n ,m ;
    bool p = 1;
    cin >> n >> m;

    if (n%2== 0 && m %2==0)
            cout << "Malvika" << endl;

    else if (n%2!= 0 && m %2!=0)
            cout << "Akshat" << endl;

    else
        {
                while (n*m >= 1)
                    {
                            p=!p;
                            --n , --m;
                    }

                    if (p == 0)
                        cout << "Akshat" << endl;
                    else
                        cout << "Malvika" << endl;
        }


    return 0;
}
