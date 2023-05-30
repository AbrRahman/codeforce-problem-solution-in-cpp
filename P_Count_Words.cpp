#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin,s);
   int count =0;
   int found = false;
   for(char c:s){
      if(isalpha(c)){
        if(found==false){
            count++;
        }
        found=true;
      }else{
         found=false;
      }
   }
   cout<<count;
//    stringstream ss(s);
//    string word;
//    while (ss>>word)
//    {
//       if(word[0]>='a'&&word[0]<='z'||word[0]>='A'&&word[0]<='Z'){
//          count++;
//       }
//    }
//    cout<<count;

    return 0;
}