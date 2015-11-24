#include<bits/stdc++.h>

using namespace std;

char a[100];

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    scanf("%s",&a);
    for(int i=0;i<n/2;i++)
        if(a[i]==&#39;R&#39;&&a[i+n/2]==&#39;L&#39;)
            printf("%d %d\n",i+n/2+1,i+1);
        else
            printf("%d %d\n",i+1,i+n/2+1);
    return 0;
}