
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdlib>
using namespace std;


int main()
{
     string x;
      cin >> x ;

     int place = x.find("WUB");
     while(place != std::string::npos)
     {
         place = x.find("WUB");

         if ((place != std::string::npos) && place == 0 )
         {
             x.replace(place , 3 , "");
         }
         else if (place != std::string::npos)
         {
            x.replace(place , 3 , " ");
         }


     }

            for ( int i = 0 ; i < x.length()-1 ; ++i)
                if (x[i] == &#39; &#39; && x[i+1] == &#39; &#39;)
                    x.replace(i , 1 , "");


             cout << x << endl;


            return 0 ;
}

