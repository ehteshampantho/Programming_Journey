#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
};

int main(){
    Person * rakib = new Person("Rakib Ahmed", 24);
    Person * sakib = new Person("Sakib Al Ahsan", 23);

    *rakib = *sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}