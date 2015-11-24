#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//	freopen("in.in" , "r" , stdin);
//	freopen("out.out" , "w" , stdout);
#endif


    int n, arr[3] = {0 , 0 , 0} , x , c = 1 , b = 2 , k = 3;

    cin >> n;

    for (int i = 1 ; i <= n ;++i)
        {
            cin >> x ;

            if (i ==c )
                arr[0]+=x , c+=3;

            else if (i ==b )
                arr[1]+=x , b+=3;

            else if (i ==k )
                arr[2]+=x , k+=3;
        }

    if (arr[0] > arr[1] && arr[0] > arr[2])
        cout << "chest" << endl;

    else if (arr[0] < arr[1] && arr[1] > arr[2])
        cout << "biceps" << endl;

    else
        cout << "back" << endl;
	return 0 ;

}
