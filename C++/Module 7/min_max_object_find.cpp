#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    int t;
    cin>> t;
    Student a[t];
    for(int i=0;i<t;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    Student mn;
    mn.marks = INT_MAX;
    Student mx;
    mx.marks = INT_MIN;
    for(int i=0;i<t;i++){
        if(a[i].marks < mn.marks){
            mn = a[i];
        }
        if(a[i].marks > mx.marks){
            mx = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    
    return 0;
}