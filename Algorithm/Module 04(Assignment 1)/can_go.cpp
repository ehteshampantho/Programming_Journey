
#include <bits/stdc++.h>

using namespace std;

char a[1000][1000];
bool vis[1000][1000];

vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

int n,m;
bool flag = false;

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
            if(a[ci][cj] == 'B') flag = true;
            dfs(ci,cj);
        }
    }
}

int main()
{
    int si,sj,di,dj;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
            if(a[i][j] == 'A'){
                si = i;
                sj = j;
            }
            if(a[i][j] == 'B'){
                di = i;
                dj = j;
            }
        }
    }
    
    memset(vis,false,sizeof(vis));
    
    dfs(si,sj);
    
    if(flag) cout<< "YES" <<endl;
    else cout<< "NO" << endl;

    return 0;
}