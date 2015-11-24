    #include <bits/stdc++.h>
    using namespace std;



    int main()
    {
        string x;

        getline(cin , x);
        transform(x.begin(), x.end(), x.begin(), ::tolower);
        x.erase(remove_if(x.begin(), x.end(), ::isspace), x.end());



        if (tolower( x[x.length()-2] ) == &#39;a&#39; || tolower( x[x.length()-2]  ) == &#39;o&#39; ||   tolower(x[x.length()-2] ) == &#39;e&#39; || tolower(x[x.length()-2] ) == &#39;i&#39; || tolower(x[x.length()-2] ) == &#39;u&#39; || tolower(x[x.length()-2]) == &#39;y&#39;  )
            cout << "YES" << endl;

        else
            cout << "NO" << endl;


        return 0 ;

    }
