#include <bits/stdc++.h>


using namespace std;

int main()
{
    /*
    int t , s =0;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t ; ++i){
        cin >> arr[i];
    }

   sort(arr,arr+t);

   for (int i = t-1 ; i >= 0 ;--i)
        {
            if (arr[i] == 4)
            {
            	++s;
            	arr[i] = 0;
            }

            else
            {
            	for (int j = 0 ; j < i ; ++j)
    			{
    				if (arr[i] + arr[j] <= 4)
                    {
                        arr[i]+=arr[j];
                        arr[j] = 0 ;
                  	}

                    if (arr[i] == 4)
                    {
                        break;
                    }
    			}

    			if (arr[i] > 0)
                {
    			++s;
    			arr[i] = 0 ;
                }

    		}
       	}



        cout << s << endl;


    */

    string x;
    cin >> x;

    x[0] = toupper(x[0]);

    cout << x << endl;
    return 0;
}
