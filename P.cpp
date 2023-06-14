#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int count =0;
    while(str.size()>1){

       int sum=0;
    
        for(char c : str){
            sum+= c -'0';

        }
        str = to_string(sum);
        count++;
    }

    cout<<count<<"\n";

    return 0;

}