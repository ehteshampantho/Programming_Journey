#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b){
    if(a.marks > b.marks){
        return true;
    }
    else if(a.marks == b.marks){
        return a.roll < b.roll;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    Student a[5];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}