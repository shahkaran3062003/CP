// https://www.codechef.com/problems/AVGPROBLEM

#include <iostream>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    if((x+y) > z * 2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

// 12345
// 12345.5


int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}