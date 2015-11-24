#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
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
#define rep(i, x, y) for(int i = x; i < y; i++)
#define Rep(i, x, y) for(int i = x; i <= y; i++)
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long
#define all(v) v.begin(),v.end()
#define ii pair<int, int>
#define mem(x, v) memset(x, v, sizeof(x))
#define nl &#39;\n&#39;

int main()
{
    ll casheirs;
    vi people;
    vi summation;
    ll temp;
    while(cin >> casheirs)
    {
        people.resize(casheirs);
        summation.resize(casheirs);
        rep(i, 0, casheirs)
            cin >> people[i];
        rep(i, 0, casheirs)
        {
            summation[i] = 15 * people[i];
            rep(j, 0, people[i])
            {
                cin >> temp;
                summation[i] += 5 * temp;
            }
        
        }
        Sort(summation);
        cout << summation[0] << nl;
    }

    return 0;
}