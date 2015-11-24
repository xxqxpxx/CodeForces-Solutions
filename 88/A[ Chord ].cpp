#include <bits/stdc++.h>

using namespace std;


string arr[3] ;         //B G D#
string places[] = {"C", "C#", "D" , "D#" , "E" , "F" , "F#" , "G" , "G#" , "A" , "B" , "H" };



inline int search(string arr[] , string look)
{
    for (int i = 0 ; i < 12 ; ++i)
    {
        if (look == arr[i])
            return i ;
    }
}

inline int diff(string x , string y)
{
    int placex = search(places , x) ;
    int placey = search(places , y);

    if (placex > placey)
        return (12-placex) + (0+placey) ;

    else
        return abs(placex - placey) ;

}

string answer (string arr[] , string places[] )
{
        int XYdiff ;
        int YZdiff ;
        sort(arr, arr+3 );
    do
    {
        XYdiff = diff(arr[0] , arr[1]);
        YZdiff = diff(arr[1] , arr[2]);



    if (XYdiff == 4 && YZdiff ==3 )
           return "major" ;

    else if (XYdiff == 3 && YZdiff ==4 )
            return "minor " ;


    }
    while ( std::next_permutation(arr , arr + 3 ) );

    return "strange" ;
}

int main()
{
    int X , Y , Z , XYdiff  = 0 , YZdiff = 0 ;

    cin >> arr[0] >> arr[1] >> arr[2];


    XYdiff =  diff(arr[0],arr[1]);
    YZdiff =  diff(arr[1],arr[2]);


    if (XYdiff == 4 && YZdiff ==3 )
            cout << "major" << endl;

    else if (XYdiff == 3 && YZdiff ==4 )
            cout << "minor " << endl;

    else
    {
        cout << answer(arr , places ) << endl;
    }


    return 0 ;
}
