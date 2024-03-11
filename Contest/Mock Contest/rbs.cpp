#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        int cnt1=0, cnt2=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]=='('){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        
        if(cnt1==cnt2) cout<<"Possible"<<'\n';
        else cout<<"Impossible"<<'\n';
    }

    return 0;
}
