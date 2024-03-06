#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int knapsack(int n,int weight[],int value[],int W){

    if(n==0 || W==0) return 0;

    if(dp[n][W] != -1){
        return dp[n][W];
    }

    if(weight[n-1] <= W){
        int op1 = knapsack(n-1,weight,value,W-weight[n-1])+value[n-1];
        int op2 = knapsack(n-1,weight,value,W);
        return dp[n][W] = max(op1,op2);
    }
    else{
        return dp[n][W] = knapsack(n-1,weight,value,W);
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;
        int weight[n],value[n];
        for(int i=0;i<n;i++){
            cin>>weight[i];
        }
        for(int i=0;i<n;i++){
            cin>>value[i];
        }

        for(int i=0;i<=n;i++){
            for(int j=0;j<=W;j++){
                dp[i][j] = -1;
            }
        }

        cout<< knapsack(n,weight,value,W)<<'\n';

    }
    return 0;
}