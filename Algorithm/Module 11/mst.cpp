#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int u,v,w;
        Edge(int u,int v,int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge> edgeList;
    while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    for(Edge ed: edgeList){
        cout << ed.u <<" " <<ed.v<<" "<<ed.w<<endl;
    }
    return 0;
}