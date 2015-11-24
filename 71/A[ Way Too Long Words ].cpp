#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word ; 
    int tst ; 

    cin >> tst ; 
    if (1 <= tst <= 100)
    {
    for ( int w = 0 ; w < tst ; w++ )
    {


        cin >> word; 

        if ( word.length() > 10 )
        {

      cout << word[0] << (word.length()-2) << word[(word.length()-1)] << endl; 
        } 

        else 
        {
            cout << word << endl; 
        }
    
    
    }
    }

    return 0;
}