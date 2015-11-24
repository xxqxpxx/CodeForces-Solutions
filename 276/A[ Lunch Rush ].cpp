#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
//	freopen("in.in" , "r" , stdin);
//	freopen("out.out" , "w" , stdout);
#endif


	int n , k ;

	long long int max = -999999999999999;

	while (cin >> n >> k )
	{
		int arr[n][2];

		for (int i = 0 ; i < n ; ++i)
			cin >> arr[i][0] >> arr[i][1];


		for (int i = 0 ; i < n ; ++i)
		{

			if (k >= arr[i][1])
			{
				if (max < arr[i][0])
					max = arr[i][0];

			}


			else if (k < arr[i][1])
			{
				if (max < arr[i][0] - (arr[i][1] - k) )
					max = arr[i][0] - (arr[i][1] - k);
			}


		}

		cout << max << endl;

		max = -1000000;

	}

	return 0 ;

}
