#include <iostream>

using namespace std;

int main()
{
    int y,k,n,number[100],tester,cnt=0,i;
    cin >> y >> k >> n;
    if(n<=y)
    {
        cout << "-1" << endl;
    }
    else
    {
        i=k-(y%k);
            while(i<=n-y)
            {
                cout << i << " " ;
                i=i+k;
                cnt++;
            }
            if(cnt==0)
                cout << "-1" << endl;
    }

    return 0;
}