#include <iostream> 
using namespace std; 
int main () 
{
    int num1 , num2 , stops , max = 0 , round = 0 , temp = 0   ; 
    
    cin >> stops;


    for ( int i = 0 ; i < stops ; i++ )
    { 
        cin >> num1 >> num2 ; 
        
        round = num2 - num1;
        temp = temp + round ; 
        
        if ( temp > max )
        {
            max = temp ;
        }

     //    cout << temp << endl; 

    }

    cout << max << endl; 


    return 0 ; 
}