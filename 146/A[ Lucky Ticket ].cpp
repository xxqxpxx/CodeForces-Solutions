#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;
int main ()
{
	string x ; 
	int w ; 
	int p ;
	int sum = 0 , sum1 = 0 ;
	char q ;
	int flag = 0 ;
	cin >> p >> x ; 
	

	for ( int i = 0 ; i < x.length() ; i++ )
	{
		if ( x[i] == &#39;4&#39; || x[i] == &#39;7&#39; )
		{
			flag++;
		}
	}


	for ( int i = 0 ; i < (x.length()/2) ; i++ )
	{
		stringstream oo ;
		oo << x[i] ;
		oo >> w;
		sum = sum + w ; 
	//	cout << w << endl;
		//cout << sum << endl;
	}

	for ( int i = ((x.length()/2)) ; i < x.length() ; i++ )
	{
		
		stringstream oo ;
		oo << x[i] ;
		oo >> w;
		sum1 = sum1 + w ; 
	//	cout << w << endl;
		//cout << sum1 << endl;

	}

	if( sum == sum1 && flag == x.length())
	{

		cout << "YES" << endl; 
	}

	else
	{
		cout << "NO" << endl; 
	}
  	return 0 ;
}
