#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
#define pb push_back
#define sz(x) (int)(x).size()
#define all(v) (v).begin(), (v).end()
#define allR(v) (v).rbegin(), (v).rend()
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unsigned long long ull;

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n , m , l , r ,arr[210001];
    int cnt0 = 0 , cnt1 = 0;

    scanf("%d%d",&n,&m);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        cnt0 += (arr[i] == 1);
        cnt1 += (arr[i] == -1);
    }

    for(int i = 0; i < m; i++)
    {
        scanf("%d%d",&r,&l);
        if((l-r+1)%2)
            printf("0\n");
        else{
            if(cnt0>=((l-r+1)/2)&&cnt1>=((l-r+1)/2))
                printf("1\n");
            else
                printf("0\n");
        }
    }

 return 0;
}