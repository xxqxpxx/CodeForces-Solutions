    #include <bits/stdc++.h>
    using namespace std;

    bool isLucky(int i)
{
    int k = 4;
    int cont = 0;
    while(i > 0)
    {
        if(i%10 == 4 || i%10 == 7) cont++;
        i /= 10;
        if(cont > k) return false;
    }
    return true;
}


    int main()
    {
        int n , k , z = 0 , q = 0;


        cin >> n >> k;

        string x;
        for (int i = 0 ; i < n ; ++i)
            {
                cin >> x;

                        for (int j = 0 ; j < x.length() ; ++j)
                            {
                                if (x[j] == &#39;4&#39; || x[j] == &#39;7&#39;)
                                    ++q;

                            }

                        if (q <= k)
                            ++z;

                        q = 0 ;



            }

            cout << z << endl;

        return 0 ;

    }
