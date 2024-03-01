#include <bits/stdc++.h>
// #define pi pair<int,int>

using namespace std;

const int N = 1e3+5;
char a[N][N];
bool vis[N][N];
pair<int,int> path[N][N];
// map<pi,pi> mp;
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

int n,m;

bool valid(int ci,int cj){
    if(ci<0 || ci>=n || cj<0 || cj>=m) return false;
    else return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    // mp[{si,sj}] = {-1,-1};
    
    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();
        
        // cout<<"{"<< par.first<<","<<par.second<<"}"<<endl;
        
        for(int i=0;i<4;i++){
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && a[ci][cj] != '#'){
                vis[ci][cj] = true;
                q.push({ci,cj});
                // mp[{ci,cj}] = {par.first,par.second};
                path[ci][cj] = {d[i].first,d[i].second};
            }
        }
    }
}

int main()
{
    memset(vis,false,sizeof(vis));

    cin>>n>>m;
    int si,sj,di,dj;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='R'){
                si = i;
                sj = j;
            }
            if(a[i][j]=='D'){
                di = i;
                dj = j;
            }
        }
    }
    
    // memset(parent,make_pair(-1,-1),sizeof(parent));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            path[i][j] = make_pair(-1,-1);
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<< "{"<< parent[i][j].first<<","<< parent[i][j].first<< "}" <<" ";
    //     }
    //     cout<<endl;
    // }
    
    bfs(si,sj);
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<< "{"<< path[i][j].first<<","<< path[i][j].second<< "}" <<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    if(!vis[di][dj]){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< a[i][j];
            }
            cout<<endl;
        }
        return 0;
    }

    pair<int,int> des = {di,dj};
    
    vector<pair<int,int>> ans;
    while(des.first != si || des.second != sj){
        ans.push_back({path[des.first][des.second]});
        if(a[des.first][des.second]=='.') a[des.first][des.second] = 'X';
        des.first -= ans.back().first;
        des.second -= ans.back().second;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< a[i][j];
        }
        cout<<endl;
    }

    return 0;
}
