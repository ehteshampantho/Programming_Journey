#include<bits/stdc++.h>
using namespace std;
int main(){
    // replace
    /* vector<int> v={1,2,3,4,2,2,5,2,3,2,4,2,5,2};
    replace(v.begin(),v.end()-1,2,100);
    for(int x:v){
        cout<<x<<" ";
    } */

    //  find
    vector<int> v={1,2,3,4,2,2,5,2,3,2,4,2,5,2};
    // vector<int>:: iterator it;
    // it = find(v.begin(),v.end(),10);
    auto it = find(v.begin(),v.end(),3);
    if(it == v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}