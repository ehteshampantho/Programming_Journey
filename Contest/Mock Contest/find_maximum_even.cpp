#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) ans = max(ans,a[i]);
        for(int j=0;j<n;j++){
            
            if(i!=j){
                if((a[i]+a[j]) % 2 == 0){
                    sum = a[i] + a[j];
                    ans = max(ans,sum);
                }
            }
            sum = 0;
        }
    }
    
    cout << ans << endl;

    return 0;
}
