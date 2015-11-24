#include <bits/stdc++.h>

using namespace std;

void clear( std::queue<int> &q )
{
   std::queue<int> empty;
   std::swap( q, empty );
}


int main()
{
    int t  , s = 0 ;
    queue <int> one , two , three ;
    cin >> t;

    int x[t] ;

    for (int i = 0 ; i < t ; ++i){
            cin >> x[i];
        if (x[i] == 4)
            ++s;

        else if (x[i] == 3)
            three.push(x[i]);

        else if (x[i] == 1)
            one.push(x[i]);

            else if (x[i] == 2)
            two.push(x[i]);
    }

     int q = three .size();
    for (int i = 0 ; i < q ; ++i)
    {
        if (one.empty() != true)
             one.pop();

        ++s;
    }

                s += two.size() / 2 ;

                if (two.size() % 2 == 1)
                {

                if (one.size() >= 2)
                {
                    one.pop();
                    one.pop();
                    ++s;
                }

               else if (one.size() == 1)
                {
                    one.pop();
                    ++s;
                }

                else
                    ++s;
                }

        if (one.size() < 4 && one.empty() != true )
            ++s;

        else if (one.size() >= 4 )
        {
            s+=one.size() / 4 ;
            int k = one.size()%4;

            if (k < 4 && k > 0 )
            ++s;
        }

    cout << s << endl;
    return 0;
}
