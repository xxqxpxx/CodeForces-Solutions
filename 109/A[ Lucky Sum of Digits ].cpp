#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main()
{

    int n , tries = 4 , numOfx = 0 , numOfy = 0 ;
     string x;
     bool k = false;
    scanf("%d" , &n);

        // (4.x)+(7.y)= n
    for ( int x = 0 ; x < n ; ++x)
    {
        for ( int y = 0 ; y < n ; ++y)
        {
            if((4*x)+(7*y)== n)
                {
                    numOfx = x ;
                    numOfy = y ;
                    k = true ;
                    break;
                }

        }
        if (k == true )
            break;
    }
        for ( int i = 0 ; i < numOfx ; ++i)
            x.append("4");
        for ( int i = 0 ; i < numOfy ; ++i)
            x.append("7");





        if (k == true )
        cout << x << endl;

        else
          printf("-1\n");



    return 0;
}
