#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList = {10,20,30};

    // assign
    // list<int> newList;
    // newList = myList;
    // newList.assign(myList.begin(),myList.end());

    // push and pop
    // myList.push_back(100);
    // myList.push_front(500);
    // myList.pop_back();
    // myList.pop_front();

    // insert
    // myList.insert(next(myList.begin(),3),100);
    // myList.insert(next(myList.begin(),3),{100,200});
    // list<int> newList = {100,200,300};
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());
    // vector<int> v = {100,200,300};
    // myList.insert(next(myList.begin(),2),v.begin(),v.end());

    // erase
    // myList.erase(next(myList.begin(),2));
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    // replace
    // replace(myList.begin(),myList.end(),20,100);

    // find
    auto it = find(myList.begin(),myList.end(),110);
    if(it == myList.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    // for(int val: myList){
    //     cout<<val<<endl;
    // }
    return 0;
}