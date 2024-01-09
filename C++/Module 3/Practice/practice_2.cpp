#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        string country;
        int jersey_no;
};


int main(){
    Cricketer * dhoni = new Cricketer;
    dhoni->country = "Jharkhand";
    dhoni->jersey_no = 777;
    Cricketer * kohli = new Cricketer;
    kohli->country = "India";
    kohli->jersey_no = 999;

    *kohli = *dhoni;
    delete dhoni;
    cout<<kohli->jersey_no<<" "<<kohli->country<<endl;
    return 0;
}