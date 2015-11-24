#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    //freopen("in.in" , "r" , stdin);
    //freopen("out.out" , "w" , stdout);
#endif


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    sort (arr , arr + n);

    for (int i = 0 , z = 1 ; i < n ; ++i , ++z)
        {
            if (arr[i] != z)
                {
                    cout << z << endl;
                    return 0;
                }
        }

    cout << arr[n-1]+1 << endl;

    return 0 ;

}
