#include <bits/stdc++.h>


using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("in.in" , "r" , stdin);
        freopen("out.out" , "w" , stdout);
    #endif


    int n ,k , s = 0 , z = 0;


    while (cin >> n >> k)
    {

        int arr[n];
        int barr[n];

    for (int i = 0 ; i < n ; ++i)
    {
        cin >> arr[i];
        barr[i] = false;
    }

    sort(arr,arr+n);


    for (int i = 0 ; i < n ; ++i)
    {

        
        if (abs(5 - arr[i]) >= k){
            barr[i] = true;
            z++;
        }


        if (z == 3){
            ++s;
            z = 0;
        }

    //   cout << arr[i] << " " << barr[i] << " " << z << endl;

    }


    cout << s << endl;
    z = 0 , s = 0 ; 
}

    return 0 ; 

}