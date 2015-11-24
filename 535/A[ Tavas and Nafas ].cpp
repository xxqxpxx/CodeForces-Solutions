#include <bits/stdc++.h>

using namespace std;

string fuck (int x)
{
              if (x == 11)
                return "eleven" ;
        else if (x == 12)
                return "twelve" ;
                else if (x == 13)
                return "thirteen" ;
                else if (x == 14)
                return "fourteen" ;
                else if (x == 15)
                return "fifteen" ;
                else if (x == 16)
                return "sixteen" ;
                else if (x == 17)
                return "seventeen" ;
                else if (x == 18)
                return "eighteen" ;
                else if (x == 19)
                    return "nineteen" ;

}
string shrat(int x)
{
        if (x == 0)
                return "zero" ;
        else if (x == 1)
                return "one" ;
        else if (x == 2)
                return "two" ;
                else if (x == 3)
                return "three" ;
                else if (x == 4)
                return "four" ;
                else if (x == 5)
                return "five" ;
                else if (x == 6)
                return "six" ;
                else if (x == 7)
                return "seven" ;
                else if (x == 8)
                return "eight" ;
                else if (x == 9)
                    return "nine" ;
}


string lol(int x)
{
        if (x == 10)
                return "ten" ;
        else if (x == 20)
                return "twenty" ;
                else if (x == 30)
                return "thirty" ;
                else if (x == 40)
                return "forty" ;
                else if (x == 50)
                return "fifty" ;
                else if (x == 60)
                return "sixty" ;
                else if (x == 70)
                return "seventy" ;
                else if (x == 80)
                return "eighty" ;
                else if (x == 90)
                    return "ninety" ;
}


string mix (int x)
{

     return ( lol( (x/10)*10 ) + "-" + shrat(x%10));
}
int main()
{
     int n ;

        cin >> n;
     if ( n >= 0 && n <= 9)
            {
                    cout << shrat(n) << endl;
            }

    else if ( n >= 11 && n <= 19)
            {
                    cout << fuck(n) << endl;
            }
     else if (n % 10 == 0)
            {
                cout << lol(n) << endl;
            }

     else
         {
                cout << mix(n) << endl;
         }


    return 0 ;
}
