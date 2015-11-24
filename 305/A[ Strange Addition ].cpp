#include<bits/stdc++.h>

using namespace std;

vector<int>ans;
int tmp[5];

int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x==0)
                {
                    tmp[0]=1;
                    continue;
                }
            if(x==100)
                {
                    tmp[1]=x;
                    continue;
                }
            if(x%10==0)
                {
                    tmp[2]=x;
                    continue;
                }
            if(x<10)
                {
                    tmp[3]=x;
                    continue;
                }
            tmp[4]=x;
        }

    if(tmp[0])
        ans.push_back(0);
    if(tmp[1])
        ans.push_back(tmp[1]);
    if(tmp[2])
        ans.push_back(tmp[2]);
    if(tmp[3])
        ans.push_back(tmp[3]);
    if(!tmp[2]&&!tmp[3]&&tmp[4])
        ans.push_back(tmp[4]);

    printf("%d\n",ans.size());
    for(int i=0;i<ans.size();i++)
        printf("%d ",ans[i]);
    printf("\n");
    return 0;
}