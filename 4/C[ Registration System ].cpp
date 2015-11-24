
#include <bits/stdc++.h>

using namespace std;

#define all(v)          ((v).begin()), ((v).end())
#define sz(v)           ((int)((v).size()))


int main()
{

    int n , count ;
    string x;
    cin >> n ;

    map <string , int > l;
    map <string , int>::iterator it;

    for (int i = 0 ; i < n ; ++i)
    {
        cin >> x ;

        if ( l.find(x) == l.end() )
        {
            l.insert( pair<string,int>(x,0) );
            cout << "OK" << endl;
        }

        else
        {
            it = l.find(x);
            it->second +=1;
            cout << it->first << it->second << endl;
        }
    }


    return 0 ;

}
