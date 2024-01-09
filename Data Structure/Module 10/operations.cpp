#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList = {30,10,20,10,60,10,50,40};

    // remove value
    // myList.remove(10);

    // sort
    // myList.sort();
    // myList.sort(greater<int>());

    // remove duplicate
    // myList.unique();

    // reverse
    myList.reverse();
    for(int val: myList){
        cout<<val<<endl;
    }
    return 0;
}