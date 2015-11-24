#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;


int main()
{
    int a , b , sum, sumZ , l , h , g  ;
    string z , x , c , t , k , u  ;

    scanf("%d\n%d", &a , &b);

    sum = a+b ;

    stringstream y , v , r ;
    y << a ;
    v << b ;
    r << sum ;
    y >> z ;
    v >> x ;
    r >> c ;

      std::size_t found = z.find("0");
      std::size_t found1 = x.find("0");
      std::size_t found2 = c.find("0");



    if (found==std::string::npos && found1==std::string::npos && found2==std::string::npos && sum == a+b )
        printf("YES\n");

    else
    {
    for ( int i = 0 ; i < z.length() ; ++i){
        if (z[i] != &#39;0&#39; )
        {
            t+= z[i];
        }

         if (x[i] != &#39;0&#39; )
        {

            k+= x[i];

         }


         if (c[i] != &#39;0&#39; )
        {

            u+= c[i];
         }

         }

        //cout << t << " " << k << " " <<  u << endl;

    y << t ;
    v << k ;
    r << u ;

    istringstream ss(t) , sh(k) , uu(u);
    ss >> h;
    sh >> g;
    uu >> l;
    sumZ = h + g ;

    // cout << sumZ << " " << l << endl;

    if ( sumZ == l )
        printf("YES\n");
        else
        printf("NO\n");

}
    return 0;
}
