#include<bits/stdc++.h>
using namespace std;

int dp[100005];

int knapsack(int n, int s){

    if(s==n){
        return 1;
    }    
    else if(s>n){
        return 0;
    }    

    if(dp[s] != -1) return dp[s];

    int op1 = knapsack(n,s+3);
    int op2 = knapsack(n,s*2);
    return dp[s] = op1 || op2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        for(int i=0;i<=n;i++){
            dp[i] = -1;
        }

        if(knapsack(n,1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}