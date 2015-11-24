#include <bits/stdc++.h>

using namespace std;

int main()
{

   int s , n , x , y;
   cin >> s >> n;

   vector <pair <int , int > > arr;

   for (int i = 0 ; i < n ; ++i)
    {
       cin >> x >> y;
       arr.push_back(make_pair(x,y));
   }

   sort(arr.begin() , arr.end() );

    for (int i = 0 ; i < n ; ++i)
    {
         if (arr[i].first < s)
             s+= arr[i].second ;

         else
         {
             cout << "NO" << endl;
            return 0 ; 
         }
    }

    cout << "YES" << endl;

    return 0;
}
