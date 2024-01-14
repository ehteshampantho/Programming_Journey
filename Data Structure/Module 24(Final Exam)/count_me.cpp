#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
       string sentence,ans;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        map<string,int> mp;
        int mx = 0;
        while(ss >> word){
            mp[word]++;
            if(mp[word] > mx){
                mx = mp[word];
                ans = word;
            }
        }
        // for(auto it=mp.begin(); it!=mp.end();it++){
        //     cout<< it->first << " " << it->second << endl;
        // }
        cout<< ans << " " << mx << endl; 
    }
    
    return 0;
}
