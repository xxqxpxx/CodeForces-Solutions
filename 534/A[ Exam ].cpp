#include <bits/stdc++.h>
using namespace std;

#define endl &#39;\n&#39;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    // freopen("filename.txt" , "r" , stdin );

    int n ;
    cin >> n ;

   list <int> arr;
   list <int> lol;


        if (n == 4)
        {
            cout << "4" << endl;
            cout << "3 1 4 2" << endl;
            return 0;
        }

    for (int i = 0 ; i < n;  ++i)
    {
             if ( (i+1) % 2 != 0)
                {
                lol.push_back(i+1);
                continue;
                }

             arr.push_back( i+1 );
    }

      while(! arr.empty() ){
            if (abs(lol.back() - arr.front()) != 1)
                lol.push_back(arr.front());

            arr.pop_front();
        }

        cout << lol.size() << endl;
        while(!lol.empty())
        {
            cout << lol.front() << " ";
            lol.pop_front();
        }
    return 0;

}


