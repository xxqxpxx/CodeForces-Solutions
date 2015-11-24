#include <iostream>


using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    if (r - l + 1 < 3) {
        cout << -1 << endl;
        return 0;
    }

    if (l % 2 == 0) {
        cout << l << &#39; &#39; << l + 1 << &#39; &#39; << l + 2 << endl;
        return 0;
    }

    if (r - l + 1 > 3){
        cout << l + 1 << &#39; &#39; << l + 2 << &#39; &#39; << l + 3 << endl;
        return 0;
    }

    cout << -1 << endl;
}   