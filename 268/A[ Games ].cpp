#include <bits/stdc++.h>

using namespace std;

int main ()
{

    int t , x = 0;

    cin >> t;


            int arr[t][2];

            for (int i = 0 ; i < t; ++i)
                    {
                          cin >> arr[i][0] >> arr[i][1] ;
                    }


            for (int i = 0 ; i < t; ++i)
                    {
                            for (int j = i ; j < t ; ++j)
                                {
                                        if (  i == j )
                                                continue;


                                        if (arr[i][0] == arr[j][1])
                                                ++x;

                                         if (arr[i][1] == arr[j][0])
                                                ++x;


                                }
                    }

            cout << x << endl;
    return 0;
}
