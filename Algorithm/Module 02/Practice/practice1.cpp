#include <bits/stdc++.h>

using namespace std;

vector<int> v[1000];
bool vis[1000];
int level[1000];
void bfs(int src, int des){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        
        // if(par == des) cout<< level[par] << endl;
        
        for(int child: v[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
    cout<< level[des] << endl;
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
    int tc;
    cin>>tc;
    while(tc--){
        int src,des;
        cin>>src>>des;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        bfs(src,des);
    }
    
    return 0;
}
