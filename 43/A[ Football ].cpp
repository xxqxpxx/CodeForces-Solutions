#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <sstream>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <complex>
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
//  freopen("1.in", "rt", stdin);
    //freopen("1.out", "wt", stdout);
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        mp[s]++;
    }
    int mx = 0;
    string b = "";
    for(map<string,int>::iterator it = mp.begin(); it != mp.end(); it++) {
        if( it->second > mx ) {
            mx = it->second;
            b = it->first;
        }
    }
    cout << b << endl;
    return 0;
}