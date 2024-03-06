#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],diff,s=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    cin>>diff;
    int s1;
    if((diff+s)%2==0){
        s1 = (diff+s)/2;
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    // cout<<s1<<endl;

    int dp[n+1][s1+1];
    dp[0][0] = 1;
    for(int i=1;i<=s1;i++){
        dp[0][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<=s1;j++){
            if(a[i-1] <= j){
                dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s1;j++){
            cout<< dp[i][j] << " "; 
        }
        cout<<endl;
    }

    // cout<< cnt << '\n';
    return 0;
}