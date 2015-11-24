#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[8][8];
    int w = 0 , b = 0 ;

        for (int i = 0 ; i < 8 ; ++i)
            for (int j = 0 ; j < 8 ; ++j)
                {
                        cin >> arr[i][j] ;

                        if (arr[i][j] == &#39;.&#39; || arr[i][j] == &#39;K&#39; || arr[i][j] == &#39;k&#39;)
                            continue;

                        else   // &#39;q&#39;, &#39;r&#39;, &#39;b&#39;, &#39;n&#39;, &#39;p&#39;, &#39;k&#39;,   
                            if (arr[i][j] == &#39;Q&#39; )
                                w+=9;
                            else if ( arr[i][j] == &#39;q&#39; )
                                b+=9;
                            else if ( arr[i][j] == &#39;R&#39; )
                                w+=5;
                                else if ( arr[i][j] == &#39;r&#39; )
                                b+=5;
                                 else if ( arr[i][j] == &#39;B&#39; )
                                w+=3;
                                else if ( arr[i][j] == &#39;b&#39; )
                                b+=3;
                                 else if ( arr[i][j] == &#39;N&#39; )
                                w+=3;
                                else if ( arr[i][j] == &#39;n&#39; )
                                b+=3;
                                 else if ( arr[i][j] == &#39;P&#39; )
                                w+=1;
                                else if ( arr[i][j] == &#39;p&#39; )
                                b+=1;
                }

                if (b == w){
                    cout << "Draw" << endl;
                    return 0 ;
                    }

                  if (b > w)
                    cout << "Black" << endl;
                    else
                    cout << "White" << endl;
                    
    return 0 ;

}
