#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int even = 0, odd = 0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        int res;
        if(n%2 == 1){
            cout<<"-1"<<endl;
        }
        else if(even > (n/2)){
            res = even - (n/2);
            cout<<res<<endl;
        }
        else if(even < (n/2)){
            res = (n/2) - even;
            cout<<res<<endl;
        }
        else if(odd > (n/2)){
            res = odd - (n/2);
            cout<<res<<endl;
        }
        else if(odd < (n/2)){
            res = (n/2) - odd;
            cout<<res<<endl;
        }
        else{
            cout<<"0"<<endl;
        }

    }
    return 0;
}