#include <bits/stdc++.h>

using namespace std;

vector<int> v[100];
bool vis[100];
int level[100];

void bfs(int node){
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
    
    int cnt = 0;
    for(int child: v[node]){
        cnt++;
    }
    cout<<cnt<<endl;
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
    int node;
    cin>>node;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(node);
    return 0;
}
