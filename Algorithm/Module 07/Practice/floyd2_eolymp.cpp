#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    long long int adj[n+1][n+1];

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         adj[i][j] = INT_MAX;
    //     }
    // }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>adj[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        adj[i][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(adj[i][j] == -1){
                adj[i][j] = INT_MAX;
            }
        }
    }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(adj[i][j] == INT_MAX) cout<< "INF" << " ";
    //         else cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(adj[i][k]+adj[k][j] < adj[i][j]){
                    adj[i][j] = adj[i][k]+adj[k][j];
                }
            }
        }
    }

    long long int mx = INT_MIN;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // cout<< adj[i][j] << " ";
            if(adj[i][j] == INT_MAX) continue;
            mx = max(adj[i][j],mx);
        }
        // cout<<endl;
    }

    cout << mx << endl;

    return 0;
}