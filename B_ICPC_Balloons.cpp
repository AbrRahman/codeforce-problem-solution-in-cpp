#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
          int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    int sum[26]={0};
    for(int i=0;i<s.size();i++){
        if(sum[s[i]-'A']==0){
            sum[s[i]-'A']+=2;
        }else{
           sum[s[i]-'A']+=1;
        }
    }
    
    int a = 26;
    int ans =0;
    while (a--)
    {
      ans+=sum[a];
    }
    cout<<ans<<endl;
    }
    

    return 0;
}