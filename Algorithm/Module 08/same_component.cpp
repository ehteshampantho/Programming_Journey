#include <bits/stdc++.h>

using namespace std;

char ar[1005][1005];
bool vis[1005][1005];

int n,m;

vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int ci,int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m) return false;
    else return true;
}

void dfs(int si,int sj){
    vis[si][sj] = true;
    
    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] == false && ar[ci][cj]!='-'){
            dfs(ci,cj);
        }
    }
}

int main()
{
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<ar[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    
    memset(vis,false,sizeof(vis));
    
    dfs(si,sj);
    
    if(vis[di][dj]) cout<< "YES" << endl;
    else cout<< "NO" << endl;

    return 0;
}
