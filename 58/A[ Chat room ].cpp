#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    string x   ;

     cin >> x ;


    int hello[5] = { (x.find("h") ) , x.find("e" , hello[0]+1 ) , x.find("l" , hello[1]+1) , x.find("l" ,hello[2]+1) , x.find("o" , hello[3]+1) };

    if ( ( hello[0] < hello[1] )  && (  hello[1] < hello[2]  ) &&  ( hello[2] < hello[3] ) && (hello[3] < hello[4] ) )
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
    return 0 ;
}
