#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mn = INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum = arr[i] + arr[j] +j-1;
                mn = min(mn,sum);
            }
        }
        cout<<mn;
    }
    
    return 0;
}