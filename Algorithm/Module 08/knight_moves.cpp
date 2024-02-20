#include<bits/stdc++.h>
using namespace std;

bool vis[100][100];
int dis[100][100];
vector<pair<int,int>> d = {{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2}};

int n,m;

bool valid(int ci,int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m) return false;
    else return true;
}

int grid[100][100];

void bfs(int si,int sj,int di,int dj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();

        for(int i=0;i<8;i++){
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
                vis[ci][cj] = true;
                dis[ci][cj] = dis[par.first][par.second]+1;
                q.push({ci,cj});
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = 1;
            }
        }

        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));

        int si,sj,di,dj;
        cin>>si>>sj>>di>>dj;

        bfs(si,sj,di,dj);

        if(vis[di][dj]) cout<< dis[di][dj] << endl;
        else cout << -1 << endl;

    }
    return 0;
}