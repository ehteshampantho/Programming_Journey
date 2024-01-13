#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> mp;
    
    // mp.insert({"Shakib al hasan",75});
    // mp.insert({"Pantho",100});
    // mp.insert({"Tamim iqbal",19});
    // mp.insert({"Shamim",79});
    // // mp.insert({"akib",0});
    // mp.insert({"Shamim",79});
    
    mp["Shakib Al Hasan"] = 75;
    mp["Tamim Iqbal"] = 100;
    mp["Shamim"] = 76;
    mp["Akib"] = 0;
    
    for(auto it=mp.begin(); it != mp.end(); it++){
        cout<< it->first << " " << it->second << endl;
    }
    
    cout<< mp["Shamim"] << endl;
    
    if(mp.count("akib")){
        cout<< "Ase" << endl;
    }
    else{
        cout<< "Nai" << endl;
    }
    

    return 0;
}
