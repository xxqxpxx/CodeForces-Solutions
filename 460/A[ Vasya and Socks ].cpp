#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    int days = 0 ;
    int sum = 0 ;

    cin >> n >> m ;

    while(true)
    {

        if ( days == m)
        {
            days = 0;
            ++n;
        }

        else if ( n == 0)
            break;

        else
        {
            --n;
            ++days;
            ++sum ;
        }



    }

    cout << sum << endl;

    return 0;
}
