#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <fstream>
#include <map>
#include <set>
#include <cstdlib>
#include <queue>
#include <math.h>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <stack>
#include <iomanip>
#define ll long long
#define endl &#39;\n&#39;
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pll pair<ll,ll>
#define pull pair<ull,ull>
 
ll MOD=1000000007;
ll inf=1e18;
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int r1,r2,c1,c2,d1,d2,a,b,c,d;
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;
    
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            if(a==b){continue;}
            for(c=1;c<=9;c++)
            {
                if(a==c || b==c){continue;}
                for(d=1;d<=9;d++)
                {
                    if(d==a || d==b || d==c){continue;}
                    if(a+b!=r1 || c+d!=r2 || a+c!=c1 || b+d!=c2 || a+d!=d1 || b+c!=d2){continue;}
                    cout<<a<<" "<<b<<endl<<c<<" "<<d;
                    return 0;
                }
            }
        }
    }
    cout<<-1;
    
    return 0;
} 