for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(adj[i][j] == INT_MAX) cout<< "INF" << " ";
            else cout<< adj[i][j] << " ";
        }
        cout<<endl;
    }