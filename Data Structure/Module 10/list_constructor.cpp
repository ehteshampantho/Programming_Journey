#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int> myList(5,5);
    // cout<<myList.size();

    // list<int> list2 = {10,20,30,40,50};
    // list<int> myList(list2);

    // vector<int> v = {1,2,3,4,5};
    // list<int> myList(v.begin(),v.end());

    int a[3] = {100,200,300};
    list<int> myList(a,a+3);

    for(auto it=--myList.end();it != myList.begin();it--){
        cout<<*it<<endl;
    }
    cout<<*myList.begin()<<endl;
    // for(int val: myList){
    //     cout<<val<<endl;
    // }
    return 0;
}