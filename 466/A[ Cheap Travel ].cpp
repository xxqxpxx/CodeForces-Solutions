//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>


using namespace std;

int main()
{

    int  n, m, a, b;
    int costm , costone ;
    cin >> n >> m >> a >> b;

    int temp = n;



    costm = (n/m) * b;
    costm += (n%m) *a ;

    costone = n*a;

    cout << min ( min(costm , costone) , (n/m+1) * b ) << endl;


    return 0;
}