#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin>>n;
   char a;
   int arr[26]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        arr[(int)a-'a']++;
    }
    for(int i=0;i<26;i++){
      for(int j=0;j<arr[i];j++){
        cout<<(char)(i+'a');
      }
    }
    return 0;
} 