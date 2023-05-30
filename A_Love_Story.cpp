#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test ;
   cin>>test;
   char c[11]="codeforces";
   for(int j=0;j<test;j++){
    char s[11];
    cin>>s;
    int count =0;
    for(int i=0;i<11;i++){
      if(s[i]!=c[i]){
        count++;
      }
    }
    cout<<count<<endl;
   }
    return 0;
}