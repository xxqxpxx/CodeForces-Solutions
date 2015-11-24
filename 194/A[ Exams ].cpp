#include <vector>
#include <list>
#include <map>
#include <math.h>
#include <cmath>
#include <set>
#include <queue>
#include <deque>
#include <string>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <string.h>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#define ll long long
using namespace std;
int main(){
  int n,e;
  while(cin>>n>>e){
    int ans=10000;
     for(int i=0; i<53; i++){
        for(int j=0; j<53; j++){
            for(int k=0; k<53; k++){
                for(int f=0; f<53; f++){
                    if(i*2+j*3+k*4+f*5==e && i+k+j+f==n) ans=min(i,ans);
                }
            }
        }
     }
  cout<<ans<<endl;
  }
}