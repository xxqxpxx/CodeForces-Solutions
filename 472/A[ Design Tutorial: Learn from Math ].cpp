#include <bits/stdc++.h>

using namespace std;


bool isprime(int x)
{
    if (x == 2)
        return 1;

    if (x % 2 == 0)
        return false;

    for (int i = 3 ; i*i <= x ; i+=2)
        if (x % i == 0)
            return false;

    return true;

}
int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif

    int x , z ;

    cin >> x;


    z = x/2;



    if (isprime(z) == false  && isprime(x-z) == false  )
    {
        cout << z << " " << x-z << endl;
        return 0;
    }

    
    else
    {
        z = x/2 - 1 ;

        while ( (isprime(z) || isprime(x-z)) && z < x){
                ++z;
            }

            cout << z << " " << x-z << endl;

    }

    return 0 ;

}
