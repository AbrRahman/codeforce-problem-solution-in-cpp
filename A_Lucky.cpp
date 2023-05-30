#include<bits/stdc++.h>
using namespace std;
int main()
{

   int test;

   cin>>test;
   while (test--)
   {
        string s;
    cin>>s;
    int totalLen = 6/2;
    int i=0,j=3;
    int a =0,b=0;
    while (totalLen--)
    {
        a+=s[i];
        b+=s[j];
        i++;
        j++;
    }
    if(a==b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
   
 
    return 0;
}