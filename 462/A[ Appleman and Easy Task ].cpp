#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//	freopen("in.in" , "r" , stdin);
//	freopen("out.out" , "w" , stdout);
#endif

    int x , z = 0 ;

    cin >> x;

    char arr[x][x];

    for (int i = 0 ; i < x; ++i)
        for (int j = 0 ; j < x ; ++j)
            cin >> arr[i][j];



    for (int i = 0 ; i < x; ++i)
        for (int j = 0 ; j < x ; ++j)
            {

                if(i)
            {
                z+=(arr[i-1][j]==&#39;o&#39;);
            }
            if(j)
            {
                z+=(arr[i][j-1]==&#39;o&#39;);
            }
            if(i!= x-1)
            {
                z+=(arr[i+1][j]==&#39;o&#39;);
            }
            if(j!=x-1)
            {
                z+=(arr[i][j+1]==&#39;o&#39;);
            }

            if(z %2)
            {
                cout<<"NO"<<endl;
                return 0;
            }





            }

             cout << "YES" << endl;



	return 0 ;

}
