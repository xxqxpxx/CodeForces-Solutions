#include <iostream>

using namespace std;

int main()
{

    int n , m ;

    cin >> n >> m ;

            int** arr = new int*[n];
            for (int i = 0; i < n; ++i)
                arr[i] = new int[m];




    for (int i = 0 ; i < n ; ++i)
        for (int j = 0 ; j < m ; ++j)
        {
            cin >> arr[i][j];
        }



    for (int i = 0 ; i < m ; ++i)
        {
            if (arr[0][i] == 1)
            {
                cout << "2" << endl;

                return 0;
            }

        }


        for (int i = 0 ; i < n ; ++i)
        {
            if (arr[i][0] == 1)
            {
                cout << "2" << endl;

                return 0;
            }

        }


        for (int i = 0 ; i < m ; ++i)
        {
            if (arr[n-1][i] == 1)
            {
                cout << "2" << endl;

                return 0;
            }

        }


        for (int i = 0 ; i < n ; ++i)
        {
            if (arr[i][m-1] == 1)
            {
                cout << "2" << endl;

                return 0;
            }

        }


        cout << "4" << endl;

    return 0 ;
}
