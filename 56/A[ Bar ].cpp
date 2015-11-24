#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    //freopen("in.in" , "r" , stdin);
    //freopen("out.out" , "w" , stdout);
#endif


    int n , z = 0;

    cin >> n;

    string arr[n];
    string d[] = { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};


    for (int i = 0 ; i < n ; ++i){

        cin >> arr[i];

        if(isdigit(arr[i][0]) == true)
            {
                int x = stoi(arr[i]);
                if (x < 18)
                    ++z;
            }

        else{
                for (int j = 0 ; j < 11 ; ++j)
                    if (arr[i] == d[j])
                        ++z;

            }
            
            }


    cout << z << endl;
    return 0 ;

}
