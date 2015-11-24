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
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <limits>
#include <cctype>

using namespace std;
typedef long long LL;

LL n,m,k;
int arr[1009];
int main()
{
    #ifndef ONLINE_JUDGE
  freopen("2.txt","r",stdin);
  #endif

  cin>> n;

  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
  {
      char a;
      cin>>a;
      if(a==&#39;.&#39;) continue;
      a-=&#39;0&#39;;
      arr[a]++;
  }

  n*=2;
  int f=1;
  for(int i=1;i<=9;i++)
    if(arr[i]>n)
     f=0;

  if(f) cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}