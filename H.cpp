#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<=5000;i++){
        for(int j=0;j<=5000;j++){
            if((a*i)+(b*j)==c){
                cout<<"Yes\n";
                return 0;
            }
           
        }
    }
     cout<<"No\n";
    return 0;
}