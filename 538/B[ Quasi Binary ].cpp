#include <bits/stdc++.h>
#define pb push_back
#define For(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define all(v) v.begin(),v.end()

using namespace std;


typedef unsigned long long ll;

const ll mod = 1000000007;

struct query{
    vector<int> moves;
    int cur;
    query(int _cur){
        moves = vector<int>();
        cur = _cur;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> qub = {1000000,111111,111110,111101,111100,111011,111010,111001,111000,110111,110110,110101,110100,110011,110010,110001,110000,101111,101110,101101,101100,101011,101010,101001,101000,100111,100110,100101,100100,100011,100010,100001,100000,11111,11110,11101,11100,11011,11010,11001,11000,10111,10110,10101,10100,10011,10010,10001,10000,1111,1110,1101,1100,1011,1010,1001,1000,111,110,101,100,11,10,1,0};
    reverse(all(qub));
    int n;
    cin>>n;
    queue<query> bfs;
    bfs.push(query(0));
    vector<bool> visited(n+1);
    vector<int> res;
    while(!bfs.empty()){
        query u = bfs.front();
        bfs.pop();
        visited[u.cur] = true;
        if(u.cur > n)
            continue;
        if(u.cur == n){
            res = u.moves;
            break;
        }
        auto it =prev(upper_bound(all(qub),n - u.cur),1);
        for(;it != qub.begin();it--){
            if(!visited[u.cur + *it]){
                u.moves.pb(*it);
                visited[u.cur + *it] = true;
                u.cur += *it;
                bfs.push(u);
                u.moves.pop_back();
                u.cur -= *it;
            }
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size(); i++)
    cout<<res[i]<<" \n"[i == res.size()-1];
    return 0;
}
