#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int s,t,count=0;
    cin>>s>>t;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;i+j<=s;j++)
        {
            for(int k=0;i+j+k<=s;k++)
            {
                if(i*j*k <=t)
                    count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}