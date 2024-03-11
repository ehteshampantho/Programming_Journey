#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt1=0,cnt2=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                cnt1++;
            }
            if(s[i]=='0' && s[i+1]=='1'){
                cnt2++;
            }
        }

        cout<< cnt1+cnt2 << '\n';
    }
    return 0;
}