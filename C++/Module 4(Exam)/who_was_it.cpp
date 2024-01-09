#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int uid;
    char name[100];
    char section;
    int total_marks;
};



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Student a,b,c;
        cin>>a.uid>>a.name>>a.section>>a.total_marks;
        cin>>b.uid>>b.name>>b.section>>b.total_marks;
        cin>>c.uid>>c.name>>c.section>>c.total_marks;

        if((a.total_marks >= b.total_marks) && (a.total_marks >= c.total_marks)){
            cout<<a.uid<<" "<<a.name<<" "<<a.section<<" "<<a.total_marks;
        }
        else if((b.total_marks > a.total_marks) && (b.total_marks > c.total_marks)){
            cout<<b.uid<<" "<<b.name<<" "<<b.section<<" "<<b.total_marks;
        }
        else if(b.total_marks == c.total_marks){
            cout<<b.uid<<" "<<b.name<<" "<<b.section<<" "<<b.total_marks;
        }
        else{
            cout<<c.uid<<" "<<c.name<<" "<<c.section<<" "<<c.total_marks;
        }
        cout<<endl;
    }
    
    return 0;
}