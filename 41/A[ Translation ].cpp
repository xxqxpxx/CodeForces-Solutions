#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//	freopen("in.in" , "r" , stdin);
//	freopen("out.out" , "w" , stdout);
#endif

	string x , y ;

	cin >> x >> y;

    reverse(y.begin() , y.end());

	if (x ==  y)
        cout << "YES" <<endl;

    else
        cout << "NO" << endl;

	return 0 ;

}
