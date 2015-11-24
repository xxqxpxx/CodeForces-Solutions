#include <iostream>
#include <string>
#include <cctype>

using namespace std ; 
int main () 
{   
    string x ; 
    cin >> x ; 
    bool a = false ; 

    for ( int i = 0 ; i < x.length() ;i++ )
    {

        if ( x[i] == &#39;H&#39; || x[i] == &#39;Q&#39; || x[i] == &#39;9&#39; ) 
        {
            a = true ; 
        }

    }


    if ( a == true ) 
    {
        cout << "YES" << endl; 
    }

    else
    {
                cout << "NO" << endl; 

    }

      
        return 0 ; 
}