#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

vector<int> v[N];
bool vis[N];

int cnt;
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
    
    memset(vis,false,sizeof(vis));
    
    vector<int> li;
    for(int i=0;i<n;i++){
        if(vis[i] == false){
            cnt = 0;
            dfs(i);
            li.push_back(cnt);
        }
    }
    
    sort(li.begin(),li.end());
    for(int i=0;i<li.size();i++){
        cout<< li[i] << " ";
    }
    return 0;
}
