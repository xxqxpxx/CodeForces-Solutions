#include <bits/stdc++.h>

using namespace std;

int main()
{

        string year ;
        int yo ;
        bool what = true;

        cin >> year;

         stringstream s;
                s << year ;
                s >> yo ;

                ++yo ;

                s.clear();
                year = "" ;

                s << yo ;
                s >> year ;


        while(1)
        {
            for (int i = 0 ; i < 4 ; ++i)
                for (int j = i+1 ; j < 4 ; ++j)
                    if (year[i] == year[j])
                        {
                            what = false ;
                        }

            if (what == false)
            {
                stringstream s;
                s << year ;
                s >> yo ;

                ++yo ;

                s.clear();
                year = "" ;

                s << yo ;
                s >> year ;

            }

            else
            {
                cout << year << endl;
                return 0;
            }

            what = true ;
        }

        return 0 ;
}
