#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n<10)
    cout<<"000"<<n<< "\n";
   else if(n<100)
    cout<<"00"<<n<< "\n";
   else if(n<1000)
    cout<<"0"<<n<< "\n";
    else
    cout<< n<<"\n";
    return 0;
}
