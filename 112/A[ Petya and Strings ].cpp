#include <iostream>
#include <string>
#include <cctype>

using namespace std ; 
int main () 
{   

        string x , xx; 
        string y ; 
        int i = 0 ;
        char c ; 
        
        cin >> x >> y; 
        

     while (x[i])
  {
    c=x[i];
    x[i]=(tolower(c));
    i++;
  }
 i = 0 ;
      while (y[i])
  {
    c=y[i];
    y[i]=(tolower(c));
    i++;
  }



        if ( x == y ) 
            cout << "0"<< endl;

        else if ( x > y ) 
        {
            cout << "1" << endl;
        }

        else 
        {
            cout << "-1" << endl;
        }


        return 0 ; 
}