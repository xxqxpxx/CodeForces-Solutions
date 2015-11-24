#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;
int main ()
{
	string x ; 
	int flag = 0 ;
	int ln = 0 ;
	cin >> x ; 

	for ( int j = 0 ; j < x.length() ; j++ )
	{
		if (x[j] == x[j+1] && ln < 5)
		{
			ln++;
			if (ln == 5 )
				{
					flag++;
					ln=0;
				}
		}
		else
		{
			flag++;
			ln = 0 ; 
		}
	}


	cout << flag << endl;

 	return 0 ;
}
