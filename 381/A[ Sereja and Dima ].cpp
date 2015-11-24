#include <iostream>
using namespace std;
int main()

{

	int s = 0 , d = 0 ;
	int num ;

	cin >> num ;

	 int x = num ;
	 int player = 0 ;
	 int w = 0 ;
	 int* arr = new int[num];

    for ( int i = 0 ; i < num ; i++)
        cin >> arr[i];

	while(x > 0 )
	{

		if ( player %2 == 0 )
		{
			if (arr[w] > arr[num-1])
			{
				s+=arr[w];
				++w;
			}
			else
			{
				s+=arr[num-1];
				--num;
			}

		}


		else
		{
			if (arr[w] > arr[num-1])
			{
				d+=arr[w];
				++w;
			}
			else
			{
				d+=arr[num-1];
				--num;
			}
			}

			--x;
			++player;
		}

	cout << s << " " <<  d << endl;

	return 0 ;

}
