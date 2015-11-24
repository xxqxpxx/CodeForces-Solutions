#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int dxt[] = {1,0,-1,0};
int dyt[] = {0,1,0,-1};

bool found(int x , int y , int x1 ,int y1 ,int x2 ,int y2){
    if(x1 == x2){
        if(x != x2)return 0;
        if(y1 > y2)swap(y1,y2);
        return (y >= y1 && y <= y2);
    }
    if(y != y2)return 0;
    if(x1 > x2)swap(x1,x2);
    return (x >= x1 && x <= x2);
}

int main(){
    int X , Y , cnt = 0;
    cin >> X >> Y ;
    int x = 0 , y = 0 , tempx , tempy;
    int d = 0 ;
    for(int i = 0 ;  ; i++){
        tempx = x ;
        tempy = y ;
        x += dx[d];
        y += dy[d];
        d++;
        d%=4;
        if(d == 2 || d == 0){
            for(int j = 0 ; j < 4 ; j++){
                dx[j] += dxt[j];
                dy[j] += dyt[j];
            }
        }
        if(found(X , Y , x , y , tempx , tempy)){
            break;
        }
        cnt++;
    }
    cout << cnt << "\n";
}