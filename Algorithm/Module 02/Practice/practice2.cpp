#include <bits/stdc++.h>

using namespace std;

vector<int> v[100];
bool vis[100];
int level[100];

void bfs(int des){
    // int src = 0;
    queue<int> q;
    q.push(0);
    vis[0] = true;
    level[0] = 0;
    
    while(!q.empty()){
        int par = q.front();
        q.pop();
        
        for(int child: v[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
    
    for(int i=sizeof(level)/sizeof(level[0]);i>=0;i--){
        if(level[i] == des) cout << i << " ";
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int des;
    cin>>des;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(des);
    return 0;
}
