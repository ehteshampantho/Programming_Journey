#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,e;
    cin>>n>>e;
    ll mat[n+1][n+1];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            mat[i][j] = 1e16;
        }
    }
    // memset(mat,0,sizeof(mat));
    while(e--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(mat[a][b] > c) mat[a][b] = c;
    }

    for(int i=1;i<=n;i++){
        mat[i][i] = 0;
    }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(mat[i][j] == 1e16) cout<< "INF" << " ";
    //         else cout<< mat[i][j] << " ";
    //     }
    //     cout<<endl;
    // }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(mat[i][k]+mat[k][j] < mat[i][j]){
                    mat[i][j] = mat[i][k]+mat[k][j];
                }
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        if(mat[s][d] == 1e16) cout<< -1 << endl;
        else cout << mat[s][d] << endl;
    }

    return 0;
}