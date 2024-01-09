#include<bits/stdc++.h>
using namespace std;

int ** fun(){
    int * a = new int;
    cout << "fun: " << a << endl;
    *a = 100;
    int ** p = &a;
    return *p;
}

int main()
{
    int * p = fun();
    cout<< "main: " << p << endl;
    
    // int * p = new int;
    // *p = 100;
    // cout<< *p << endl;
}