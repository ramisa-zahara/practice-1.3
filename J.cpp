#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    double a,b,ans;
    cin>>a>>b;
    ans=(a-b)/a*100.0;
    cout<<fixed<<setprecision(3)<<ans<<"\n";
}