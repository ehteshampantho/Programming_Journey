#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int u,v,w;
        Edge(int u, int v, int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main(){
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v[n];
    vector<Edge> edgeList;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
    // for(int i=0;i<n;i++){
    //     cout<<i<<" - >";
    //     for(pair<int,int> child: v[i]){
    //         cout<<"{ "<< child.first<<", "<<child.second<<" }";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(pair<int,int> child: v[i]){
            int childNode = child.first;
            int cost = child.second;
            edgeList.push_back(Edge(i,childNode,cost));
        }
    }
    for(Edge ed:edgeList){
        cout<<ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
    }
    return 0;
}