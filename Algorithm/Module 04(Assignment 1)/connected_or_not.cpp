#include <bits/stdc++.h>

using namespace std;

vector<int> v[1005];

int main()
{
    int n,e;
    cin>>n>>e;
    
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int x,y;
        cin>>x>>y;
        bool flag = false;
        if(v[x].size() == 0 && x!=y){
            cout << "NO" << endl;
            continue;
        }
        if(v[x].size() == 0 && x==y){
            cout << "YES" << endl;
            continue;
        }
        for(int child: v[x]){
            if(child == y || x==y){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout<< "NO" << endl;
    }
    return 0;
}