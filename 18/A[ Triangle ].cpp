#include<bits/stdc++.h>

using namespace std;

int dx[4]={-1 ,0 ,1 ,0};
int dy[4]={0  ,1 ,0 ,-1};

int right_angle(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    int b=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    int c=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    if(!a||!b||!c)
        return 0;
    if(a+b==c||a+c==b||c+b==a)
        return 1;
    return 0;
}

int main()
{
    int x1,y1,x2,y2,x3,y3;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if(right_angle(x1,y1,x2,y2,x3,y3))
        return printf("RIGHT\n"),0;
    bool flag=0;
    for(int i=0;i<4;i++)
        {
            flag|=right_angle(x1+dx[i],y1+dy[i],x2,y2,x3,y3);
            flag|=right_angle(x1,y1,x2+dx[i],y2+dy[i],x3,y3);
            flag|=right_angle(x1,y1,x2,y2,x3+dx[i],y3+dy[i]);
        }
    if(flag)
        return printf("ALMOST\n"),0;
    printf("NEITHER\n");
    return 0;
}