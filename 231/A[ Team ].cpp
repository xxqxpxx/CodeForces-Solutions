//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>


using namespace std;

int main()
{

    int t; 
    int r = 0;
    int s = 0;
    cin >> t;

    int arr[t][3];

    for (int i = 0 ; i < t; ++i)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] ;
        r += arr[i][0] + arr[i][1] + arr[i][2] ;

        if (r >= 2)
            ++s;

        r = 0;
    }


    cout << s << endl;

    return 0;
}