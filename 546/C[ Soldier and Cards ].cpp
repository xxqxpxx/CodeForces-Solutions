#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n , n1 , n2 , count = 0;

        cin >> n ;
        cin >> n1 ;
        deque <int> x1(n1);

        for (int i = 0 ; i < n1 ; ++i)
            {
                cin >> x1[i];
            }

            cin >> n2;
            deque <int> x2(n2);

        for (int i = 0 ; i < n2; ++i)
            {
                cin >> x2[i];
            }

            int loop = n*n*n*2;

        while (--loop)
            {
                if (    x1.empty()  ||  x2.empty()    )
                {
                        if (x1.empty())
                            {
                                cout << count << " " << 2 << endl;
                                return 0;
                            }

                        else
                            {
                               cout << count << " " << 1 << endl;
                                return 0;
                            }
                }


                if (x1.front() > x2.front())
                    {
                            x1.push_back(x2.front());
                            x1.push_back(x1.front());
                              x2.pop_front();
                              x1.pop_front();
                              ++count;
                    }

                 else if (x1.front() < x2.front())
                    {
                            x2.push_back(x1.front());
                            x2.push_back(x2.front());
                              x2.pop_front();
                              x1.pop_front();
                              ++count;
                    }
            }

            cout << -1 << endl;
        return 0;
}
