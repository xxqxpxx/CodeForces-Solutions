#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n , x , count = 0;
    cin >> n ;

     vector <int> arr(n);

    for (int i = 0 ; i < n ; ++i)
        {
                cin >> arr[i];
        }

        sort(arr.begin() , arr.end());

        for (int i =1 ; i < n; ++i)
            {

                    if (arr[i] == arr[i-1])
                        {
                                ++count;
                                ++arr[i];
                        }
                        // 1 1 1 1 1
                        // 1 2 1
                    else if (arr[i] < arr[i-1])
                        {
                            while (arr[i] <= arr[i-1])
                                {
                                    ++count;
                                    ++arr[i];
                                }
                        }

            }

            cout << count << endl;
        return 0;
}
