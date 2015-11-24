#include <iostream>
#include <string>
#include <cctype> 
using namespace std ; 
int main () 
{
     string ss;
     string word ; 
     cin >> ss ; 
     int flag = 0 ; 
     bool x = false; 

     for ( int i = 0 ; i< ss.length() ; i++ ) // check if  kol el letters uppercase
    {
        char c=ss[i];
         if (isupper(c) != 0 )
         {
             flag++; 
         }
     if ( flag == ss.length())   
     {
         x = true ; 
     }
    }
     flag = 0 ;

    for ( int i = 1 ; i< ss.length() ; i++ ) //  Lw kol el letters uppercase ella awel wa7ed lowercase
    {
       char c=ss[i];
         if (isupper(c) != 0 )
         {
             flag++; 
         }

     if (isupper(ss[0]) == 0 && flag == (ss.length()-1) )   
     {
         x = true ; 
     }
    }

     if ( x == true || ss.length()==1 ) 
     {
         for ( int w = 0 ; w < ss.length() ; w++ )
         {
         char c=ss[w];
             if (isupper(c) != 0 )
         {
             ss[w] = tolower(c);
         }
             else
             {
                 ss[w] = toupper(c);
             }
         }  
         cout << ss << endl; 
     }
     
     else
     {
                 cout << ss << endl; 
     }
    


    return 0 ; 
}