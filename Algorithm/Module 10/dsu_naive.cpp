#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int par[N];

void dsu_initialize(int n){
    for(int i=0;i<n;i++){
        par[i]=-1;
    }
    par[1] = 3;
    par[2] = 1;
}

int find_dsu(int node){
    if(par[node] == -1) return node;
    return find_dsu(par[node]); 
}

int main(){
    dsu_initialize(4);
    for(int i=0;i<4;i++){
        cout << find_dsu(i) << endl;
    }
    return 0;
}