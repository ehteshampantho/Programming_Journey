#include<bits/stdc++.h>
#define ll long long 
using namespace std;

const ll N = 1e5+5;
ll par[N];
ll group_size[N];

void dsu_initialize(ll n){
    for(ll i=1;i<=n;i++){
        par[i] = -1;
        group_size[i] = 1;
    }
}

ll dsu_find(ll node){
    if(par[node]==-1) return node;
    ll leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_size(ll node1,ll node2){
    ll leaderA = dsu_find(node1);
    ll leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]){
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge{
    public:
        ll u,v,w;
        Edge(ll u,ll v,ll w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

int main(){
    ll n,e;
    cin>>n>>e;
    int edges = e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(edges--){
        ll u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    ll totalCost = 0, cnt = 0;
    for(Edge ed: edgeList){
        // cout<< ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
        ll leaderA = dsu_find(ed.u);
        ll leaderB = dsu_find(ed.v);
        if(leaderA == leaderB){
            continue;
        }
        else{
            dsu_union_by_size(ed.u,ed.v);
            totalCost += ed.w;
            cnt++;
        }
    }
    
    if(cnt == n-1){
        cout<< e-cnt << " "<< totalCost<< endl;
    }
    else{
        cout<< "Not Possible" << endl;
    }
    return 0;
}
