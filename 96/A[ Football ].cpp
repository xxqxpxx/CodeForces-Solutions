#include <iostream>
#include <string>
using namespace std;
int main()
{
    string players ;
    size_t found;
     size_t found1;

    cin >> players;

    found=players.find("1111111");
        found1=players.find("0000000");

     
        
        if (found != string::npos || found1 != string::npos)
        cout << "YES" <<  endl;

        else
        {
            cout << "NO" << endl; 
        }
     
        return 0;
}