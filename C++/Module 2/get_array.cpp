#include<bits/stdc++.h>
using namespace std;

int * get_array(int n){
    // int arr[n];
    int *a =new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    return a;
}

int main(){
    int n;
    cin>>n;
    int *p = get_array(n);
    for(int i=0;i<n;i++){
        cout<< p[i]<<" ";
    }
    delete[] p;
    // cout<<endl<<p[1];
    return 0;
}