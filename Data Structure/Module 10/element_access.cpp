#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList = {30,10,20,10,60,10,50,40};
    // cout<< myList.front()<<endl;
    // cout<< myList.back()<<endl;
    cout<<*next(myList.begin(),3);

    return 0;
}