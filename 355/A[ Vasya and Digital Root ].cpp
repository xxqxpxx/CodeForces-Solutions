    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {

        long long int k , d ;

        cin >> k >> d;

        if (d == 0)
            if (k == 1 )
                cout << 0 << endl;

            else
                cout << "No solution" << endl;

        else{
            cout << d ;
            for (long int i = 0 ; i < k-1; ++i)
                cout << 0 ;
                }
        return 0;
    }
