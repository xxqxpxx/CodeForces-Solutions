#include <iostream>
using namespace std;
int main()
{
	int numofbars;
	int max = 0 ;
	int hght = 0 ; 
	cin >> numofbars ;
	int tot = numofbars ;  
	int* arr = new int [numofbars];
        bool* stt = new bool[numofbars];
	for ( int i = 0 ; i < numofbars ; i++ )   // inputing the heights of every bar 
	{
		cin >> arr[i]; 
                stt[i] = false; 
	}
	for ( int j = 0 ; j <  numofbars ; j++ )
	{ 

                 if ( stt[j] == false )
{
		for ( int i = 0 ; i < numofbars ; i++)
		{
			if (arr[i]==arr[j])
			{
                                int temp = 0 ; 
				temp = j ;
				j = i ;
				max++;
                                stt[j] = true; 
				stt[i] = true; 
 				j = temp ; 
			}
		}

		if (max > hght )
		{
			hght = max ;     
		}
		max = max - 1 ; 
		tot = tot - max ;
		max = 0 ;
}
	}
 	cout << hght << " "  << tot << endl; 
 	return 0;
}