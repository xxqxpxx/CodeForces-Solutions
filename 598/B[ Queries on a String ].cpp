#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

   string x , w;
   int t , l , r , k ,mod ;
    //char
   cin >> x;

   cin >> t ;

   for (int i = 0 ;i < t ; ++i)
        {
            cin >> l >> r >> k ;

            mod = k % (r-l+1);

//            while(mod-- > 0){
//             //    x.insert(l-1 , 1 ,  x[r-1]);
//            //    x.erase(r , 1 );
//
            //for(int i=r-mod;i<r;i++)
            w= x.substr(r-mod, mod);
            //cout<<w<<endl;
            x.erase(r-mod, mod);
            x.insert(l-1,w);
            //cout<<x<<endl;



        }

    cout << x << endl;

  return 0;
}
