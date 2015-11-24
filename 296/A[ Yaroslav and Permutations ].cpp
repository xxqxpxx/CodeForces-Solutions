#include <stdio.h>
#include <stdlib.h>
int i,max=-320000,m[1010],y,n;
int main()
{
    //freopen("r.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&y);
        m[y]++;
        if(m[y]>max)
            max=m[y];
    }
    if(max>((n+1)/2))
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}