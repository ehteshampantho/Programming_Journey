#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool isFirstWord = true;
    while(ss>>word){
        // 1st method
        // reverse(word.begin(),word.end());
        // 2nd method
        int i=0,j=word.size()-1;
        while(i<j){
            int tmp = word[i];
            word[i] = word[j];
            word[j] = tmp;
            i++;
            j--;
        }
        if(isFirstWord){
            cout<<word;
            isFirstWord = false;
        }
        else{
            cout<<" "<<word;
        }
    }

    return 0;
}