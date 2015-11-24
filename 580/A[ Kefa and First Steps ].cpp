#include <bits/stdc++.h>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
//  freopen("in.in" , "r" , stdin);
//  freopen("out.out" , "w" , stdout);
#endif

    int n , k , o , i  ;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    k=1;
    for(i=1;i<n;i++)if(a[i]>=a[i-1])k++;else o=max(o,k),k=1;
    o=max(o,k);
    cout<<o;
    return 0 ;

}
