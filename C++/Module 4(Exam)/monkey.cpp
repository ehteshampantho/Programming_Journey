#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100001];

    while(cin.getline(s,100001)){

        sort(s,s+strlen(s));
        for(int i=0;s[i]!='\0';i++){
            if(s[i] != ' '){
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}