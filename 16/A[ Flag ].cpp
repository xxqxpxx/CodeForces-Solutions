#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , m   ;



    cin >> n >> m;


    string *num = new string[n] , x ;

    for (int i = 0 ; i < n ; ++i)
        {
            cin >>  num[i];

            std::sort( num[i].begin(),  num[i].end());
             num[i].erase(std::unique( num[i].begin(),  num[i].end()),  num[i].end());

        }
        
         if (num[0].length() != 1)
        {
            cout << "NO" << endl;
            return 0 ;
        }

    for (int i = 1 ; i < n ; ++i)
    {
        if (num[i-1] == num[i])
        {
            cout << "NO" << endl;
            return 0 ;
        }

        if (num[i-1].length() != num[i].length())
         {
            cout << "NO" << endl;
            return 0 ;
        }

        if (num[i].length() != 1)
        {
            cout << "NO" << endl;
            return 0 ;
        }

    }




        cout << "YES" << endl;

    return 0 ;
}