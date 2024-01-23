#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> mat[n];
    while(e--){
        int a,b;
        cin>>a>>b;
        // undirected graph
        mat[a].push_back(b);
        mat[b].push_back(a);
        // directed graph
        // mat[b].push_back(a); -> for directed this line is not executed
    }
    
    for(int x:mat[0]){
        cout<<x << " ";
    }
    cout<<endl;
    
    for(int i=0;i<mat[0].size();i++){
        cout<< mat[0][i] << " ";
    }

    return 0;
}
