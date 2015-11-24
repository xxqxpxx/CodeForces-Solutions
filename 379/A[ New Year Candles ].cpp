#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif

    int a , b , h = 0,r ;
    //double z;

    while(cin >> a >> b)
    {h=a;

    while(a>=b)
    {
        h+=a/b;
        r=a%b;
        a/=b;
        a+=r;
    }
    cout<<h<<endl;}
    /*
    h+=a;

    while(a > 0){
        h+=a/b;
        z+=a%b;
        z+=a/b;
        a=a/b;
        z-=a;
    }
    cout << h << endl;
    cout << z << endl;
    while(z > b)
    {
        h+=z/b;
        z= z/b;
    }

        cout << a << " " << z << endl;
        cout << h << endl;
    */

    return 0 ;

}
