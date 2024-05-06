// https://www.codechef.com/problems/POPULATION

#include <iostream>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    cout<<(x-y+z)<<endl;
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