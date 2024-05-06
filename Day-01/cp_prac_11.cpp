// https://www.codechef.com/problems/TODOLIST

#include <iostream>
using namespace std;

void solve(){
    int n,temp,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>=1000){
            count++;
        }
    }
    cout<<count<<endl;
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