#include <bits/stdc++.h>

using namespace std;

int main ()
{

     int arr[5][5];
     int x , y;

     for (int i = 0 ; i < 5 ; ++i)
        {
            for (int j = 0 ; j < 5 ; ++j)
                {
                        cin >> arr[i][j];

                        if (arr[i][j] == 1)
                            {
                                x=i ;
                                y = j;
                            }
                }

              
        
        
     }
     
     
                   ++x , ++y;

                if (x >=3)
                    {
                        x= x-3;
                    }

                else
                    {
                        x = 3-x;
                    }

                    if (y >=3)
                    {
                        y= y-3;
                    }

                else
                    {
                        y = 3-y;
                    }




                     cout << abs(x+y) << endl;


            return 0;
}
