#include <bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("in.in" , "r" , stdin);
	freopen("out.out" , "w" , stdout);
#endif


	int r1 , r2 , c1 , c2  ;
	
	cin >> r1 >> c1 >> r2 >> c2 ;

	// rock
	if (c1 == c2 || r1 == r2)
		cout << "1 " ;
	else
		cout << "2 " ;

	// bishop
	if ((r1 + c1) % 2 != (r2 + c2) % 2) 
		cout << "0 "; 
	else {
        if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2)
        	cout << "1 "; 
        else cout << "2 ";
    }

	//king
	cout << max(abs(r1 - r2), abs(c1 - c2)) << endl;

	return 0 ;

}
