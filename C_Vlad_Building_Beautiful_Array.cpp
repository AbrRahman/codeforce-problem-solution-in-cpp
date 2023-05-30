#include<bits/stdc++.h>
using namespace std;
void fun(){
    int n;
    cin>>n;
    int a[n];
    int min_even=INT_MAX,min_odd=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            min_even=min(min_even,a[i]);
        }else{
            min_odd= min(min_odd,a[i]);
        }
    }
    // odd beaut check
    int odd_beu=1,even_beu=1;
    if(min_odd==INT_MAX){
        odd_beu=0;
    }else{
       for(int i=0;i<n;i++){
       if(a[i]%2==0){
          if(a[i]-min_odd<=0){
            odd_beu=0;
            break;
          }
       }
    }
    }
    //even beaut check
    if(min_even==INT_MAX){
        even_beu=0;
    }else{
       for(int i=0;i<n;i++){
       if(a[i]%2==1){
          if(a[i]-min_odd<=0){
            even_beu=0;
            break;
          }
       }
    }
    }
    if(even_beu==1||odd_beu==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++){
        fun();
    }
    return 0;
}