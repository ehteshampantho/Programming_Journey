#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    vector<int> v;
    int arr[1000];

    for(int i=0;i<1000;i++){
        arr[i] = 0;
    }

    while(t--){
        int x;
        cin>>x;
        if(x==1){
            int val;
            cin>>val;
            v.push_back(val);
            arr[val]++;
        }
        else{
            if(v.empty()) cout<<"empty"<<"\n";
            else
            {
                
            }
        }
    }
    return 0;
}