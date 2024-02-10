#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

bool vis[N];
vector<int> adj[N];
bool pathVis[N];

bool ans;

void dfs(int parent){

    // cout<< parent << endl;
    vis[parent] = true;
    pathVis[parent] = true;

    for(int child: adj[parent]){

        if(vis[child] && pathVis[child]){
            ans = true;
        }

        if(!vis[child]){
            dfs(child);
        }
    }
    pathVis[parent] = false;
}

int main(){
    int n,e;
    cin>>n>>e;

    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

    memset(vis,false,sizeof(vis));
    memset(pathVis,false,sizeof(pathVis));
    ans = false;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ans) cout << "Cycle Detected" << endl;
    else cout<< "Cycle not found" << endl;

    return 0;
}