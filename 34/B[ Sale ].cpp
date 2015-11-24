#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;


int main()
{

    int m , n , sum = 0;
    
    cin >> m >> n ;
    int * arr = new int[m];
    
    
    for (int i = 0 ; i < m ; ++i)
        cin >> arr[i];
        
    sort(arr , arr+m);
    
           
    for(int i = 0 ; i < n ; ++i)
    {
        if (arr[i] < 0 )
        sum+=arr[i];
     }  
        cout << abs(sum) << endl;

    return 0;

}