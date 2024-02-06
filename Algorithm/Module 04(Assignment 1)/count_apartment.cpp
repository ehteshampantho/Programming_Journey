
#include <bits/stdc++.h>

using namespace std;

char a[1000][1000];
bool vis[1000][1000];

vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

int n,m;


bool valid(int ci,int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m) return false;
    else return true;
}

void dfs(int si,int sj){
    
    vis[si][sj] = true;
    
    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] == false && a[ci][cj] != '#'){
            dfs(ci,cj);
        }
    }
}

int main()
{
    // int si,sj;
    int cnt = 0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
            // if(a[i][j] == '.'){
            //     si = i;
            //     sj = j;
            // }
        }
    }
    
    memset(vis,false,sizeof(vis));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j] == false && a[i][j]=='.'){
                dfs(i,j);
                cnt ++;
            }
        }
    }
    
    cout<< cnt << endl;
    return 0;
}