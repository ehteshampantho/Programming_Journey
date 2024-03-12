#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    set<int> s;
    
    while(t--){
        int x;
        cin>>x;
        if(x==1){
            int val;
            cin>>val;
            s.insert(val);
        }
        else{
            if(s.empty()) cout<<"empty"<<"\n";
            else{
                auto ans = s.begin();
                cout<< *ans << "\n";
                s.erase(ans);
            }
        }
    }

    return 0;
}
