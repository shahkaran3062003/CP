// https://www.codechef.com/problems/DISCNT

#include <iostream>
using namespace std;

void solve(){
    int p;
    int base=100;
    cin>>p;

    cout<<(base - (p*100/base))<<endl;
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