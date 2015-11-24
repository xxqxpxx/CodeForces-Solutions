#include <iostream>
using namespace std;
int main()
{
   unsigned long long  n , m , a , c = 0  , x = 0 ;
    cin >> n >> m >> a ;

    c += n/a;

    
    x += m/a;
    
     
    

       if (n % a != 0 )
           ++c;
       
       if ( m %a != 0 )
           ++x;
           
           cout << x *c << endl;
          
    return 0;
}