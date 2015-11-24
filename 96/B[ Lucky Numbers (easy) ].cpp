#include <bits/stdc++.h>
#include <string>
 
using namespace std;

int main()
{
    string x = "";
    unsigned long long num , f = 0 , s = 0 , z , j = 0 , var ;
    bool done = false ;


    cin >> num;


    z = floor (log10 (abs (num))) + 1 ;

    
    if (z%2 != 0)
    {
        ++z;
    }

        
        
   for(int i = 0 ; i < z/2 ; ++i)
    {
        x+="4";

    }

    for(int i = 0 ; i < z/2 ; ++i)
    {
        x+="7";
    }

    
    
    do
    {
         stringstream str;
            str << x ;
            str >> var ;
    
        if (var >= num)
            {
            cout << var << endl;
            return 0 ; 
            }
                   
    }
    while ( std::next_permutation(x.begin(), x.end()) );
    

         x+="47";

        std::sort(x.begin(), x.end());

        cout << x << endl;


    return 0 ;
}