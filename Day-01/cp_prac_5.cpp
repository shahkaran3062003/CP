// https://www.codechef.com/problems/BULLBEAR

#include <iostream>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;  

    if(x>y){
        cout<<"LOSS\n";
    }
    else if(x==y){
        cout<<"NEUTRAL\n";
    }
    else{
        cout<<"PROFIT\n";
    }
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