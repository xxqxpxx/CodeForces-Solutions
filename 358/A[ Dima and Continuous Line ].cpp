#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    bool flag=false;
    for(int i=0;i<n-3;i++)
        for(int j=i+2;j<n-1;j++)
            if(min(a[j],a[j+1])>min(a[i],a[i+1])&&min(a[j],a[j+1])<max(a[i],a[i+1])&&max(a[j],a[j+1])>max(a[i],a[i+1]))
                {
                    flag=true;
                    break;
                }
            else if(min(a[j],a[j+1])<min(a[i],a[i+1])&&max(a[j],a[j+1])>min(a[i],a[i+1])&&max(a[j],a[j+1])<max(a[i],a[i+1]))
                {
                    flag=true;
                    break;
                }
    if(flag)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}