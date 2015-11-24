#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;
int main ()
{
	int num;
	int ftrue = 0 ;
	int ffalse = 0;
	int index = 0;
	int arr[100];
	bool farr[100][100] ;
	cin >> num ;
	int evenf = 0 , oddf = 0 ;

	for ( int i = 0 ; i < num ; i++ )
	{

		cin >> arr[i] ; 
		if ( arr[i] % 2 == 0 )
		{
			evenf++;
		}

		else
		{
			oddf++;
		}

	}

	if ((evenf) == num -1 || oddf == num - 1 ) 
	{

		if ( (evenf) == num -1 )
		{
			for ( int w = 0 ; w < num ; w++)
			{
				if ( arr[w] % 2 != 0 )
				{
					index = w + 1 ; 
				}

			}
		}

		else
		{
			for ( int w = 0 ; w < num ; w++)
			{
				if ( arr[w] % 2 == 0 )
				{
					index = w + 1 ; 
				}

			}
		}

	}

	else
	{
	for ( int i = 0 ; i < num ; i++ )
	{
		for ( int j = 0 ; j < num ; j++ )
		{
			if ( arr[i] == arr[j])
			{
				 farr[i][j] = true ; 
				 ftrue++;
			}
			else
			{
				ffalse++;
			}
		}
	}

	for ( int i = 0 ; i < num ; i++ )
	{
		if ( ftrue > ffalse )
		{
			if ( arr[i] == false )
			{
				index = i + 1 ; 
				break;
			}
		}

		else
		{
			if ( arr[i] == true )
			{
				index = i + 1 ; 
				break;
			}
		}

	}
	}


	cout << index << endl; 
	return 0 ;
}
