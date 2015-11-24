#include<bits/stdc++.h>

using namespace std;

int ver[101],hor[101],ansx,ansy;

int main()
{
    int n;
    scanf("%d",&n);
    int x,y;
    for(int i=0;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            if(!ver[x])
                ansx++,ver[x]=1;
            if(!hor[y])
                ansy++,hor[y]=1;
        }
    printf("%d\n",min(ansx,ansy));
    return 0;
}