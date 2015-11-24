#include <iostream>
using namespace std;
int main()
{
    int n ,counter =0 ;
    cin >> n ;
    string x ;
   
     cin >> x;
     
     if (x.length() == 1){
        cout << 0 << endl;
        return 0;
}
    for(int i=0;i<n ; i++)
    {
        if (x[i]== x[i+1])
        {
            counter++ ;
        }
    }
    cout << counter << endl ;
    return 0;
}
