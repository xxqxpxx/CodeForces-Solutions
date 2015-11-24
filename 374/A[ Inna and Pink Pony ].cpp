#include<bits/stdc++.h>

using namespace std;

int n,m,i,j,a,b,ans=1e9;

void solve(int x,int y)
{
    if(x%a||y%b)
        return;
    int w=x/a,z=y/b;
    if(abs(w-z)%2==0)
    ans=min(ans,max(w,z));
}

int main()
{
    scanf("%d%d%d%d%d%d",&n,&m,&i,&j,&a,&b);
    if(i==1&&j==m||i==n&&j==1||i==1&&j==1||i==n&&j==m)
        return printf("0\n"),0;
    if(i-1<a&&n-i<a||j-1<b&&m-j<b)
        return printf("Poor Inna and pony!\n"),0;
    solve(abs(i-1),abs(j-1));
    solve(abs(n-i),abs(j-1));
    solve(abs(n-i),abs(m-j));
    solve(abs(i-1),abs(m-j));
    if(ans==1e9)
        printf("Poor Inna and pony!\n");
    else
        printf("%d\n",ans);
    return 0;
}