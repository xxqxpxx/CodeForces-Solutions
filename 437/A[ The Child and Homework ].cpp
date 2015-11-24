#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cstring>

using namespace std;

#define mp make_pair
#define pp push_back
#define Sort(x) sort(x.begin(), x.end())
#define rep(i, x, y) for(int i = x; i < y; ++i)
#define Rep(i, x, y) for(int i = x; i <= y; ++i)
#define dRep(i, x, y) for(int i = x;i >= y; --i)
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long
#define all(v) v.begin(),v.end()
#define ii pair<int, int>
#define mem(x, v) memset(x, v, sizeof(x))
#define nl &#39;\n&#39;
#define MOD 1000000007

int main()
{
    string a, b, c, d;
    int as, bs, cs, ds;
    char res;
    bool great[4];
    while(cin >> a >> b >> c >> d)
    {
        res = &#39;C&#39;;
        as = a.size() - 2;
        bs = b.size() - 2;
        cs = c.size() - 2; 
        ds = d.size() - 2;
        mem(great, 0);
        if(as <= (bs) / 2 && as <= (cs) / 2 && as <= (ds) / 2)
        {
            great[0] = 1;
        }
        if(as >= 2 * bs && as >= 2 * cs && as >= 2 * ds)
        {
            great[0] = 1;
        }
        if(bs <= (as) / 2 && bs <= (cs) / 2 && bs <= (ds) / 2)
        {
            great[1] = 1;
        }
        if(bs >= 2 * as && bs >= 2 * cs && bs >= 2 * ds)
        {
            great[1] = 1;
        }

         if(ds <= (bs) / 2 && ds <= (cs) / 2 && ds <= (as) / 2)
        {
            great[3] = 1;
        }
         if(ds >= 2 * as && ds >= 2 * cs && ds >= 2 * bs)
        {
            great[3] = 1;   
        }

         if(cs <= (bs) / 2 && cs <= (ds) / 2 && cs <= (as) / 2)
        {
            great[2] = 1;
        }
         if(cs >= 2 * as && cs >= 2 * ds && cs >= 2 * bs)
        {
            great[2] = 1;
        }
        if(great[0] && !great[1] && !great[2] && !great[3])
            res = &#39;A&#39;;
        else if(!great[0] && great[1] && !great[2] && !great[3])
            res = &#39;B&#39;;
        else if(!great[0] && !great[1] && !great[2] && great[3])
            res = &#39;D&#39;;
        else
            res = &#39;C&#39;;
        cout << res << nl;
    }
    return 0;
}