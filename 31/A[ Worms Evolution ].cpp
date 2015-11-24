#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t , arr[101];

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < t; i++){
        for(int y = 0; y < t; y++){
            for(int j = y+1; j < t; j++){
                if(arr[i]==arr[y]+arr[j]){
                    cout <<i+1<<" "<<y+1<<" "<< j+1;
                    return 0;
                 }
            }
        }
    }

    cout << -1 << endl;

return 0;
}