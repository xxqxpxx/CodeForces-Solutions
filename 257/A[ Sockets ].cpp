#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) ((int)v.size())
#define rep(i,m) for(int i=0;i<(int)(m);i++)
#define rep2(i,n,m) for(int i=n;i<(int)(m);i++)
#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define dot(a,b) ((conj(a)*(b)).X)
#define X real()
#define Y imag()
#define length(V) (hypot((V).X,(V).Y))
#define vect(a,b) ((b)-(a))
#define cross(a,b) ((conj(a)*(b)).imag())
#define normalize(v) ((v)/length(v))
#define rotate(p,about,theta) ((p-about)*exp(point(0,theta))+about)
#define pointEqu(a,b) (comp(a.X,b.X)==0 && comp(a.Y,b.Y)==0)

typedef stringstream ss;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vii;
typedef long double ld;
typedef complex<double> point;
typedef pair<point, point> segment;
typedef pair<double, point> circle;
typedef vector<point> polygon;

const int oo = (int) 1e9;
const double PI = 2 * acos(0.0);
const double eps = 1e-9;

int n, m, k, N, M, I, J;
int di[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
bool val(const int& i, const int& j) {
    return i >= 0 && i < I && j >= 0 && j < J;
}
int comp(const double& a, const double& b) {
    if (fabs(a - b) < eps)
        return 0;
    return a < b ? -1 : 1;
}
int nums[55];

int main() {
#ifndef ONLINE_JUDGE
    freopen("a.txt", "rt", stdin);
    //freopen("b.txt", "wt", stdout);
#endif
    cin >> n >> m >> k;
    rep(i,n)
        cin >> nums[i];
    sort(nums, nums + n);
    reverse(nums, nums + n);
    int i = 0;
    for (i = 0; i < n && k < m; i++) {
        k += nums[i];
        k--;
    }
    if (k < m)
        cout << -1 << endl;
    else
        cout << i << endl;
    return 0;
}