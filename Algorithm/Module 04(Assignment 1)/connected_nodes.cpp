#include <bits/stdc++.h>

using namespace std;

const int N = 1000;

vector<int> v[N];
bool vis[N];

int main()
{
    int n,e;
    cin>>n>>e;
    
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int x;
        cin>>x;
        
        vector<int> res;
        for(int child: v[x]){
            res.push_back(child);
        }
        
        if(res.empty()){
            cout<< -1 << endl;
        }
        else{
            sort(res.begin(),res.end());
            reverse(res.begin(),res.end());
            for(int child: res){
                cout << child << " ";
            }
            cout<< endl;
        }
        
    }

    return 0;
}