#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
    int ans=0;
    for(int i=x[0];i<y[0];i++)
        {
            bool flag=true;
            for(int j=1;j<n;j++)
               if(x[j]<=i&&y[j]>i)
                {
                    flag=false;
                    break;
                }
            ans+=flag;
        }
    printf("%d\n",ans);
    return 0;
}