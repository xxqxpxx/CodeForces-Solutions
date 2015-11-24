#include <bits/stdc++.h>


using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("in.in" , "r" , stdin);
		freopen("out.out" , "w" , stdout);
	#endif


	int r , c , s = 0 ;
	bool x = true;
	cin >> r >> c ;

	char arr[r][c];
	bool barr[r][c];

	for (int i = 0 ; i < r ; ++i)
	{
		for (int j = 0 ; j < c ; ++j)
		{
			cin >> arr[i][j];
			barr[i][j] = false;
		}
	}


	for (int i = 0 ; i < r ; ++i)
	{
		for (int j = 0 ; j < c ; ++j)
		{
			if ( arr[i][j] == &#39;S&#39;)
			{
				x = false;
				break;
			}
		}

		if (x == true)
		{
			for (int j = 0 ; j < c ; ++j)
			{
				if (barr[i][j] == false)
				{
					barr[i][j] = true;
					++s;
				}


				
			}

			
		}

		x = true ;

	}

	for (int i = 0 ; i < c ; ++i)
	{
		for (int j = 0 ; j < r ; ++j)
		{

			if ( arr[j][i] == &#39;S&#39;)
			{
				x = false;
				break;
			}
		}

		if (x == true)
		{
			for (int j = 0 ; j < r ; ++j)
			{
				if (barr[j][i] == false)
				{
					barr[j][i] = true;
					++s;
				}
				
			}

		}

		x = true ;

	}


	cout << s << endl;

	return 0 ; 

}