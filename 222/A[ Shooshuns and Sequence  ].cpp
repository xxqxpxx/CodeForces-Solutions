#include <vector>
#include <list>
#include <map>
#include <set>
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
#include <memory.h>
#include <ext/hash_map>
using namespace std;
using namespace __gnu_cxx;

#define SZ(X) (int)(X).size()
#define ALL(X) (X).begin(),(X).end()
#define ALLR(X) (X).rbegin(),(X).rend()

const double EPS = 1e-9;
const int INF = 1 << 30;
const long long INFL = 1LL << 62;
string out[] = { "NO", "YES" };

int arr[100003];
int main() {
    //    #ifndef ONLINE_JUDGE
    //        freopen("in.txt", "rt", stdin);
    //        freopen("out.txt", "wt", stdout);
    //    #endif
    int k,n;
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    k--;
    int elm  = arr[k];
    bool v=1;
    for(int i=k+1;i<n;++i)
        if(arr[i]!=elm)
        {
            v=0;
            break;
        }
    if(!v)
        cout<<"-1"<<endl;
    else
    {
        int c=-1;
        for(int i=0;i<k;++i)
            if(arr[i]!=elm)
                c=i;
        cout<<c+1<<endl;
    }
}