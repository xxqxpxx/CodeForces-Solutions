#include <iostream>
#include <string>
#include <stdio.h>
#include <memory.h>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    bool v[3]={};
    int x;
    cin>>x;
    v[x-1]=true;
    for(int i=0,a,b;i<3;++i){
        cin>>a>>b;
        --a;--b;
        swap(v[a],v[b]);
    }
    for(int i=0;i<3;++i)
        if(v[i])
            cout<<i+1<<endl;
    return 0;
}