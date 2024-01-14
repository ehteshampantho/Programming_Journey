#include <bits/stdc++.h>

using namespace std;

class Person{
  public:
    string name;
    int num;
    Person(string name,int num){
        this->name = name;
        this->num = num;
    }
};

class cmp{
  public:
    bool operator()(Person a, Person b){
        // if(a.name > b.name) return true;
        // else if(a.name < b.name) return false;
        // else{
        //     return (a.num < b.num) ;
        // }
        if(a.name == b.name){
            return a.num < b.num;
        }
        else return a.name > b.name;
    }
};

int main()
{
    int n;
    cin>>n;
    
    
    priority_queue<Person, vector<Person>,cmp> pq;
    
    for(int i=0;i<n;i++){
        cin.ignore();
        string name;
        int num;
        cin>>name>>num;
        Person obj(name,num);
        pq.push(obj);
    }
    while(!pq.empty()){
        cout<< pq.top().name << " " << pq.top().num << " " << endl;
        pq.pop();
    }
    return 0;
}
