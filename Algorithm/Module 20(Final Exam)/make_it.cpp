#include<bits/stdc++.h>
using namespace std;

bool knapsack(int n, int s){

    if(s==n || s>=n) return true;

    while(s <= n){
        int op1 = knapsack(n,s+1) + 3;
        int op2 = knapsack(n,s+1) * 2;
        return 
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(knapsack(n,1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}