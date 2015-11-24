        #include <bits/stdc++.h>

        using namespace std;

        int main()
        {
              string x , y ;


              cin >> x >> y ;

              if ( x == y ){
                    cout << "YES" << endl;
                    return 0;}

             else if (x.length() != y.length()){
                    cout << "NO" << endl;
                    return 0;
                    }

                else
                        for (int i = 0 ; i < x.length()-1 ; ++i)
                                if (x[i] != y[i] )
                                        {
                                            for (int j = i ; j  < y.length() ; ++j)
                                                if (y[i] == x[j] && y[j] != x[j])
                                                        swap ( x[i] , x[j]);

                                            break;
                                        }

               //b     cout << x << y << endl;

                 if ( x == y ){
                    cout << "YES" << endl;
                    return 0;}

             else {
                    cout << "NO" << endl;
                    return 0;
                    }



            return 0;

        }
