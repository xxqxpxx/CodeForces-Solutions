#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string w; 
	cin >> w ; 
	int flag = 0;
	int x;
	istringstream buffer(w);   
	buffer >> x;
	if ( x % 7 == 0 || x % 4 == 0 || x % 47 == 0   || x % 744 == 0     )
	{
		cout << "YES" << endl; 
	}

	else if ( x % 7 != 0 || x % 4 != 0  )
	{
		for ( int i = 0 ; i < w.length() ; i++ )
		{
			if ( &#39;7&#39; == w[i] || &#39;4&#39; == w[i] )
			{
				flag++;
			}
		}

		if ( flag == w.length() || flag == 4 || flag == 7 )
		{
					cout << "YES" << endl; 
		}
		
		else
		{
			goto well;
		}
	}
	else 
	{
		well :
		cout << "NO" << endl;
	}
	return 0;
}