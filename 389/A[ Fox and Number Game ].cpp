    #include <bits/stdc++.h>
    using namespace std;



    int main()
    {

        int n ;

        cin >> n;

        int arr[n];
        vector <int> x;

        for (int i = 0 ; i < n ; ++i)
            cin >> arr[i];

        sort(arr,arr+n);

        for ( int i = 1 ; i <= arr[0] ; ++i )
            {
                if (arr[0] % i == 0)
                    x.push_back(i);
            }


        for (int i = 0 ; i < n ; ++i)
            {
                if ( arr[i] % x[x.size() -1 ] != 0 )
                    x.pop_back() , i = 0;

            }


        cout << x[x.size()-1]*n <<endl;


        return 0;
    }
