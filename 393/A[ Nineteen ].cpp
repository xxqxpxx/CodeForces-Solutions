#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str;
   int n=0,i=0,t=0,e=0;

   cin >> str;

   for(int y = 0; y<str.size(); y++)
   {
      n += (str[y]==&#39;n&#39;);
      i += (str[y]==&#39;i&#39;);
      t += (str[y]==&#39;t&#39;);
      e += (str[y]==&#39;e&#39;);
   }

    int cnt = 0 , ans = 0;

    while(i>0 && e>0 && t>0)
    {
       e-=3; i--; t--;
       cnt += (i>=0 && e>=0 && t>=0);
    }

    bool f = false;

    while(cnt--)
    {
        if(!f)
            n-=3;
        else{
            n-=2;
        }

        ans += (n >= 0);
        f = true;
    }

    cout << ans << endl;

return 0;
}