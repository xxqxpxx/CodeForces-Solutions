#include <iostream>
#include <string>
#include <sstream> 
#include <cctype>

using namespace std;

int main() 
{

    int x ;
    cin >> x ; 
    
if (x <= 2){
   cout <<  "NO" << endl;
}
else if (x % 2 == 0)
    {
   cout <<  "YES" << endl;  
}
else
{
    cout << "NO" << endl;
}
return 0;
}