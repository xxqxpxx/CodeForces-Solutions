        #include <bits/stdc++.h>

        using namespace std;

        int main()
        {
                string x , y ;
                cin >> x >> y ;

                sort( y.begin() , y.end()  );
            //    reverse(y.begin(),y.end());

                        for (int i = 0 ; i < x.length() ; ++i)
                                        if ( (int)x[i] < (int)y[y.length()-1])
                                            {
                                                    x[i] = y[y.length()-1];
                                                    y.erase(y.length()-1 , 1);
                                    //                cout << y << endl;
                                               //     break;

                                            }

                                            cout << x << endl;

            return 0;

        }
