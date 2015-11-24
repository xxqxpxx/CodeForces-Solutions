/*

#include <bits/stdc++.h>

using namespace std;

int main()
{

        int x , y ;

        while (cin >> x && cin >> y )
        {
            int *arr = new int [x];

            for (int i = 0 ; i < y ; ++i)
                cin >> arr[i];



            if (x == y )
            {
                for (int i = 0 ; i < x ; ++i)
                        cout << arr[i] << endl;

                return 0;
            }

            else
            {
                for (int i = y ; i < x ; ++i)
                    arr[i] = 0 ;

                sort(arr , arr + x);

                int max = arr[x];


                for (int i = 1 ; i <= max; ++i)

            }
        }

        return 0 ;
}


*/

/*
#include <bits/stdc++.h>

using namespace std;

int main()
{

        string year  , end ;
        int yo , count = 0 ;
        bool what = true;

        while(cin >> year && cin >> end)
    {

        while( (atoi(year.c_str())) <= (atoi(end.c_str()) ))
        {
            for (int i = 0 ; i < year.length() ; ++i)
                for (int j = i+1 ; j < year.length() ; ++j)
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

                cout << "A&A" << endl;
            }

            else
            {

                ++count;
            }

            if (yo == atoi(end.c_str()))
                break;

            what = true ;
        }

            cout << count << endl;
    }

        return 0 ;
}

*/



#include <bits/stdc++.h>

using namespace std;

int main()
{


        int tst , count = 0 ;
        string word;

        cin >> tst ;

        for (int i = 0 ; i < tst ; ++i)
        {
            cin >> word;

            if (word == "X++" || word == "++X")
                ++count;

            else if (word == "X--" || word == "--X")
                --count;
        }

        cout << count << endl;

        return 0 ;
}
