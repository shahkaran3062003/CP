// https://www.codechef.com/problems/CHEFGAMES

#include <iostream>
using namespace std;

void solve(){
    int r1,r2,r3,r4;
    cin>>r1>>r2>>r3>>r4;

    if( r1 || r2 || r3|| r4){
        cout<<"OUT\n";
    }
    else{
        cout<<"IN\n";
    }

    // if((r1+r2+r3+r4) == 0){
    //     cout<<"IN\n";
    // }
    // else{
    //     cout<<"OUT\n";
    // }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}