#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int mx = INT_MIN;
    for(int i=0;i<n;i++){
        
            mx = max(mx,arr[i]);
        
    }

    cout<<mx<<endl;
    return 0;

}