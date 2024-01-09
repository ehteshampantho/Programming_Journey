#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        // cout<<s<<endl;
        int sum1 = 0, sum2 = 0;
        for(int j=0;j<3;j++){
            int ch = s[j] - '0';
            sum1 += ch;
        }
        for(int j=5;j>=3;j--){
            int ch = s[j] - '0';
            sum2 += ch;
        }
        // cout<<sum1 <<" "<<sum2<<endl;
        if(sum1 == sum2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}