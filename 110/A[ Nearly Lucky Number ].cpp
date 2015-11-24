#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num;
	char w = &#39;7&#39;;
	char q = &#39;7&#39;;

	cin >> num ; 
	int flag = 0 ; 
	for ( int i = 0 ; i < num.length() ; i++ )
	{


		if ( &#39;7&#39; == num[i] || &#39;4&#39; == num[i] )
		{
			flag++;
		}
	}

	if ( flag == 7 || flag == 4 )
	{
		cout << "YES" << endl; 
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}