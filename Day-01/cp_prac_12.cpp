#include <iostream>
using namespace std;

void solve(){
    int n;
    long long int fact=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact<<endl;
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