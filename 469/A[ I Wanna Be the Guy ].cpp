#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector <int> arr;
    int x , n , t;
    bool lol = true;

        cin >> n;

            cin >> t;
                for(int i = 0 ; i < t ; ++i)
                {
                    cin >> x ;
                        arr.push_back(x);

                        }

            cin >> t;
             for(int i = 0 ; i < t ; ++i)
            {
            cin >> x ;
                        arr.push_back(x);

                        }


        sort(arr.begin()  , arr.end() );
        arr.erase( unique( arr.begin(), arr.end() ), arr.end() );

        int arr1[n];

        for (int i = 0 ; i < n ; ++i)
            arr1[i] = i+1;

        if (n > arr.size() )
            {
                cout << "Oh, my keyboard!" << endl;
                return 0;
            }

        else
            {
                for (int i = 0 ; i < n ; ++i)
                    {
                            if (arr1[i] != arr[i] )
                                {
                                 cout << "Oh, my keyboard!" << endl;
                                    return 0;
                                }

                    }

                    cout << "I become the guy." << endl;

            }

    return 0;
}
