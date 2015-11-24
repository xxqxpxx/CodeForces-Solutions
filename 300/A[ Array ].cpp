#include <bits/stdc++.h>

#define SZ(x) (int)(x).size()
#define ALL(X) (X).begin(),(X).end()
#define ALLR(X) (X).rbegin(),(X).rend()
using namespace std;

int fix(int a) {
    return (a % 2 + 2) % 2;
}

int n, i, a[1005];
int main() {
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + i);
    cout << "1 " << a[0] << endl;
    if (a[n - 1] > 0) {
        cout << "1 " << a[n - 1] << endl;
        cout << n - 2;
        for (i = 1; i < n - 1; i++)
            cout << " " << a[i];
    } else {
        cout << "2 " << a[1] << " " << a[2] << endl;
        cout << n - 3;
        for (i = 3; i < n; i++)
            cout << " " << a[i];
    }
    return 0;
}