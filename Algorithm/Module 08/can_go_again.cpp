#include <bits/stdc++.h>
#define ll long long int

using namespace std;

class Edge{
    public:
        ll u,v,c;
        Edge(ll u,ll v,ll c){
            this->u = u;
            this->v = v;
            this->c = c;
        }
};

const ll N = 1000;
ll dis[N];

int main()
{
    ll n,e;
    cin>>n>>e;
    vector<Edge> EdgeList;
    while(e--){
        ll u,v,c;
        cin>>u>>v>>c;
        EdgeList.push_back(Edge(u,v,c));
    }
    
    for(int i=1;i<=n;i++){
        dis[i] = 1e18;
    }
    
    ll src;
    cin>>src;
    
    dis[src] = 0;
    
    for(int i=1;i<=n-1;i++){
        for(Edge ed: EdgeList){
            ll u,v,c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if(dis[u] < 1e18 && dis[u]+c < dis[v]){
                dis[v] = dis[u]+c;
            }
        }
    }
    
    bool cycle = false;
    
    for(Edge ed: EdgeList){
        ll u,v,c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if(dis[u] < 1e18 && dis[u]+c < dis[v]){
            cycle = true;
        }
    }
    
    ll t;
    cin>>t;
    while(t--){
        ll d;
        cin>> d;
        
        if(cycle){
            cout<< "Negative Cycle Detected" << endl;
            break;
        } 
        else if(dis[d] == 1e18) cout<< "Not Possible" << endl;
        else{
            cout<<dis[d]<<endl;
        }
    }

    return 0;
}
