#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    bool inside_words = false;
    int cnt = 0;
    for(char c:s){
         if(isalpha(c)){
            if(inside_words == false) cnt++;
            inside_words = true;
         }
         else{
            inside_words = false;
         }
    }
    cout<<cnt<<endl;
    return 0;
}