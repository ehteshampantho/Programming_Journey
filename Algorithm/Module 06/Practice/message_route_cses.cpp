#include<bits/stdc++.h>
using namespace std;

vector<int> v[100005];
bool vis[100005];
int parent[100005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    
    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(int child: v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
    }
}

int main(){
    vector<int> path;
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));

    bfs(1);
    if(!vis[n]) cout << "IMPOSSIBLE" << endl;
    else{
        int cnt = 0;
        while(n != -1){
            cnt++;
            path.push_back(n);
            n = parent[n];
        }

        reverse(path.begin(),path.end());

        cout<< cnt << endl;

        for(int val: path){
            cout << val << " ";
        }
    }
    

    return 0;
}