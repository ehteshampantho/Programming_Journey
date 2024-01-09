#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(char * name,int roll,char section,int math_marks,int cls){
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main(){
    Student rahim("rahim", 1, 'A', 80, 10);
    Student karim("karim", 5, 'B', 90, 10);
    Student jasim("jasim", 10, 'C', 85, 10);

    if(rahim.math_marks > karim.math_marks && rahim.math_marks > jasim.math_marks){
        cout<<rahim.name<<endl;
    }
    else if(karim.math_marks > rahim.math_marks && karim.math_marks > jasim.math_marks){
        cout<<karim.name<<endl;
    }
    else{
        cout<<jasim.name<<endl;
    }
    return 0;
}