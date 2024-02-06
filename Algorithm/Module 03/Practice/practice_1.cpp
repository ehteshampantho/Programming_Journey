#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

vector<int> v[N];
bool vis[N];

int cnt = 0;

void dfs(int src){
    
    cnt++;
    vis[src] = true;
    
    for(int child: v[src]){
        if(vis[child] == false){
            dfs(child);
        }   
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
    
    int src;
    cin>>src;
    
    memset(vis,false,sizeof(vis));
    dfs(src);
    
    cout << cnt << endl;
    
    return 0;
}
