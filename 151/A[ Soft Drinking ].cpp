#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif


    int n, k, l, c, d, p, nl, np , mofd , limis , salt ;

    cin >> n >>  k >>  l >>  c >>  d >> p >> nl >> np;

    mofd = k * l;
    mofd = mofd / nl ;

    limis = c * d;

    salt = p / np;

    cout << min(mofd , min ( limis , salt) ) / n << endl;



    return 0 ;

}
