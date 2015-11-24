#include <iostream>
using namespace std;
int main()
{
    int frnd; 
        cin >> frnd;
        int *pi = new int [frnd];
        for ( int i = 0 ; i < frnd  ; i++) 
        {
                int x ; 
                cin >> x ; 
                pi[i] = x;
        }
        for ( int j = 1 ; j <= frnd   ; j++)
        {
                for ( int i = 0 ; i < frnd ; i++)
                {
                        if ( pi[i] == j )
                        {
                                cout << i+1 << " " ;
                        }
                }
                 
        }
        cout << endl;
        delete pi;
        return 0;
}