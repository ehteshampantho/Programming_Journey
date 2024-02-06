#include <bits/stdc++.h>

using namespace std;

char a[1000][1000];
bool vis[1000][1000];

vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

int n,m;
int cnt = 0;

bool valid(int ci,int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m) return false;
    else return true;
}

int dfs(int si,int sj){
    cnt++;
    vis[si][sj] = true;
    
    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] == false && a[ci][cj] != '#'){
            dfs(ci,cj);
        }
    }
    return cnt;
}

int main()
{
    // int si,sj;
    vector<int> v;
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
                int res = dfs(i,j);
                v.push_back(res);
                cnt = 0;
            }
        }
    }
    
    if(v.empty()) cout << 0 << endl;
    else{
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;        
    }
    
    
    return 0;
}