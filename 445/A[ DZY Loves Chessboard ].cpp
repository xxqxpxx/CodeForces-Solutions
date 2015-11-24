#include <cstdio>
using namespace std;
 
int n, m;
char S[1100];
 
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", S);
        for (int j = 0; j < m; j++)
            if (S[j] == &#39;.&#39;) {
                if ((i + j) & 1)    S[j] = &#39;W&#39;;
                else    S[j] = &#39;B&#39;;
            }
        printf("%s\n", S);
    }
}
 
