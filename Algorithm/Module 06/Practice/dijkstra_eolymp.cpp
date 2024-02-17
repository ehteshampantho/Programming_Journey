#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v[100];
int dis[100];

void dijkstra(int src){
    queue<pair<int,int>> q;
    q.push({src,0});
    dis[src] = 0;
    
    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();
        
        int node = parent.first;
        int cost = parent.second;
        
        for(pair<int,int> child: v[node]){
            int childNode = child.first;
            int childCost = child.second;
            if(cost + childCost < dis[childNode]){
                dis[childNode] = cost + childCost;
                q.push({childNode,dis[childNode]});
            }
        }
    }
}

int main()
{
    int n,s,d;
    cin>>n>>s>>d;
    
    int adj[n+1][n+1];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>adj[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || adj[i][j] == -1) continue;
            else v[i].push_back({j,adj[i][j]});
        }
    }
    
    // for(int i=0;i<n;i++){
    //     for(pair<int,int> child: v[i]){
    //         cout << child.first << " " << child.second << endl;
    //     }
    // }
    
    for(int i=1;i<=n;i++){
        dis[i] = INT_MAX;
    }
    
    dijkstra(s);

    if(dis[d] == INT_MAX){
        cout << -1 << endl;
    }
    else cout << dis[d] << endl;

    return 0;
}
