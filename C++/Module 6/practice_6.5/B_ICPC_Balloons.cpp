#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt[26] = {0};
        int sum = 0;
        for(char c:s){

            if(cnt[c-'A'] == 1){
                sum += 1;
            }
            else{
                sum += 2;
                cnt[c-'A'] = 1;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}