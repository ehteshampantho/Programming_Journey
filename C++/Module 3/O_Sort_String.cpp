#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s;
    

    int cnt[26] = {0};
    for(int i=0;i<n;i++){
        cin>>s;
        int val = s - 'a';
        cnt[val]++;
    }
    
    for(int i=0;i<26;i++){
        if(cnt[i]!=0){
            for(int j=0;j<cnt[i];j++){
                cout<<(char)(i+'a');
            }
        }
    }
    return 0;
}