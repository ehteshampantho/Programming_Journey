#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student * fun(){
    Student *  karim = new Student(342, 10, 4.99);        /* karim(10A)         heap memory
                                                            52A                 10A */

    return karim;
}

int main(){
    Student * ans  = fun() ;                                        /* ans(10A)
                                                                    99A */
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<" "<<endl;

    delete ans;

    return 0;
}