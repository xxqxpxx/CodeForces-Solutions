#include <iostream>
using namespace std;

bool iseven (double x)
{
    int s = x ;
    
     if (s % 2 == 0 )
       return 1;
    
    else
        return 0;
}


int main()
{
  int n , m ;
  double z = 0.5 ;
  cin >> n>> m;

  for ( int i = 0 ; i < n ; i++)
  {
     if ( iseven(z) == 1 && z != 0.5 && i % 2 != 0 )
          cout << "#" ;
                  
   for (int j = 0 ;j < m-1 ;j++)
        {
              if ( i % 2 == 0 ){
                  cout << "#" ; 
          }

             else {
              cout << "." ;
               
             }
         }

    if ( iseven(z) == 0 || i%2 == 0 )
            cout << "#" << endl;

    else 
        cout << endl; 
    
         z += 0.5;    
   }
  
return 0; 
}
