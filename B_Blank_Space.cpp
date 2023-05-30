#include<bits/stdc++.h>
using namespace std;

void fun(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0,max_space=0;
    int flag =0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count ++;
        }else{
            count=0;
        }
         if(max_space<=count){
                max_space=count;
         }
    }

        cout<<max_space<<endl;
    
    
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