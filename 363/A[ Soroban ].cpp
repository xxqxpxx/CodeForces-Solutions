    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {

        string x;
        cin >> x;

        for (int i = x.length()-1 ; i >= 0 ; --i)
            {
                if (x[i] == &#39;0&#39;)
                    {
                        cout << "O-|-OOOO" << endl;
                    }

                else if (x[i] == &#39;1&#39;)
                    {
                        cout << "O-|O-OOO" << endl;
                    }

                else if (x[i] == &#39;2&#39;)
                    {
                        cout << "O-|OO-OO" << endl;
                    }

                    else if (x[i] == &#39;3&#39;)
                    {
                        cout << "O-|OOO-O" << endl;
                    }

                    else if (x[i] == &#39;4&#39;)
                    {
                        cout << "O-|OOOO-" << endl;
                    }
                    else if (x[i] == &#39;5&#39;)
                    {
                        cout << "-O|-OOOO" << endl;
                    }
                    else if (x[i] == &#39;6&#39;)
                    {
                        cout << "-O|O-OOO" << endl;
                    }
                    else if (x[i] == &#39;7&#39;)
                    {
                        cout << "-O|OO-OO" << endl;
                    }
                    else if (x[i] == &#39;8&#39;)
                    {
                        cout << "-O|OOO-O" << endl;
                    }
                    else if (x[i] == &#39;9&#39;)
                    {
                        cout << "-O|OOOO-" << endl;
                    }


            }

        return 0;
    }
