#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
    
    while(n--){
    long long int x;
    cin>>x;
    pq.push(x);
    }
    
    // while(!pq.empty()){
    //     cout<< pq.top() << endl;
    //     pq.pop();
    // }
    
    int q;
    cin>>q;
    while(q--){
        int c;
        cin>>c;
        if(c == 0){
            long long int x;
            cin>>x;
            pq.push(x);
            cout<< pq.top() << endl;
        }
        else if(c == 1){
            if(pq.empty()){
                cout << "Empty" << endl;
            }
            else{
                cout<< pq.top() << endl;
            }
        }
        else if(c == 2){
            if(!pq.empty()){
                pq.pop();
                if(pq.empty()){
                    cout<< "Empty" << endl;
                }
                else{
                    cout<< pq.top() << endl;
                }
            }
            else if(pq.empty()){
                cout<< "Empty" << endl;
            }
        }
    }
    
    return 0;
}
