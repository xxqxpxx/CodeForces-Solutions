#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;
int main()
{
    int n,a,b,c,max=0;
    cin >> n >> a >> b >> c;
    for(int i=0;i<=n/a;i++)
    {
    int z=n-i*a;
        for(int k=0;k<=z/b;k++)
        {
        int h=i+k+(z-k*b)/c;
        if(!( (z-k*b)%c ) && h > max)
            {
                max=h;
            }
        }
    }
    cout << max << endl;
}