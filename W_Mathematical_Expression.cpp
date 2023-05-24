#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;
    if(d=='+'){
        if(a+b==c){
            cout<<"Yes";
        }else{
            cout<<a+b;
        }
    }else if(d=='-'){
        if(a-b==c){
            cout<<"Yes";
        }else{
            cout<<a-b;
        }
    }else{
       if(a*b==c){
        cout<<"Yes";
       }else{
        cout<<a*b;
       }
    }

    return 0;
}