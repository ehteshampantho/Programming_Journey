#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1) cout<<j;
            else if(i!=1 && i<=n-1){
                if(j==1){
                    cout<<i;
                }
                else if(j==n){
                    cout<<n;
                }
                else{
                    cout<<" ";
                }
            }
            else if(i==n){
                cout<<n;
            }
        }
        cout<<"\n";
    }
    return 0;
}