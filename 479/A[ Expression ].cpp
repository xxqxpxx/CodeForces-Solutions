#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main()
{

    int a ,b , c ;
    int sum[8] = {0};

    cin >> a >> b >>c ;

    sum[0] = a + b + c ;
    sum[1] = a + b * c ;
    sum[2] = a * b + c ;
    sum[3] = a * b * c ;
    sum[4] = (a+b) * c ;
    sum[5] = a * (b + c);


    cout << *max_element(sum, sum+6 ) << endl;

    return 0;
}
